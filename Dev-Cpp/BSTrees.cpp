#include <iostream>

using namespace std;

class Node
{
	public:
		int deger;
		Node* left;
		Node* right;
		
		Node(int deger)//Node sýnýfýnýn oluþturulumasý
		{
			this->deger = deger;
			left = NULL;
			right = NULL;
		}
};

class BinarySearchTree
{
	public:
		Node* root;
		
		BinarySearchTree(){
			root = NULL;
		}
		~BinarySearchTree()
		{
			deleteAllNodes(root);
		}
		void deleteAllNodes(Node* node){
			if(node == NULL) return ;
			if(node->left!=NULL)
			{
				deleteAllNodes(node->left);
			}
			if(node->right!=NULL)
			{
				deleteAllNodes(node->right);
			}
			delete node;
		}
		
		bool insetNode(int deger)
		{
			Node* node = new Node(deger);
			
			if(root == NULL)
			{
				root = node;
				return true;
			}
			
			Node* tmp = root;
			while(true)
			{
				if(node->deger == tmp->deger)
				{
					cout<<"var olan bir sayý eklenmeye calisiliyor"<<endl;
					return false;
				}
				if(node->deger < tmp->deger)
				{
					if(tmp->left == NULL)
					{
						tmp->left = node;
						return true;
					}
					tmp = tmp->left;
				
				}
				else{
					if(tmp->right == NULL){
						tmp->right = node;
						return true;
					}
					
					tmp = tmp->right;
				}
			}
		}
		
		void DFSPreOrderSearchPrintNodes(Node* node){
			cout<<node->deger<<",";
			if(node->left !=NULL){
				DFSPreOrderSearchPrintNodes(node->left);
			}
			if(node->right !=NULL){
				DFSPreOrderSearchPrintNodes(node->right);
			}
			
		}
		
		void DFSPostOrderSearchPrintNodes(Node* node) {
			if(node == NULL)
				return;
			if(node->left!=NULL)
			{
					DFSPostOrderSearchPrintNodes(node->left);
			}	
			if(node->right !=NULL)
			{
				DFSPostOrderSearchPrintNodes(node->right);
			}
			cout<<node->deger<<endl;
		}
		
		Node*  DFSPreOrderSearchAra(Node* node, int aranandeger){
			
			if(node == NULL || node->deger == aranandeger)
				return node;
				
			if(aranandeger < node->deger)
				return DFSPreOrderSearchAra(node->left, aranandeger);
			else
				return DFSPreOrderSearchAra(node->right ,aranandeger);
			
			cout<<node->deger<<" , ";		
		}		
	
		void DFSInOrderSearchPrintNodes(Node* node) {
			if(node == NULL)
				return;
			if(node->left!=NULL)
			{
					DFSInOrderSearchPrintNodes(node->left);
			}	
			cout<<node->deger<<endl;
			if(node->right !=NULL)
			{
				DFSInOrderSearchPrintNodes(node->right);
			}

		}
};

int main(void)
{
	BinarySearchTree* bst = new BinarySearchTree();
	//52,27,15,30,78,65,53
	bst->insetNode(52);
	bst->insetNode(27);
	bst->insetNode(15);
	bst->insetNode(30);
	bst->insetNode(78);
	bst->insetNode(65);
	bst->insetNode(53);
	
	bst->insetNode(76);
	cout<<"son eklenen nodum: "<<bst->root->right->left->right<<endl;
	cout<<"son eklenen nodum: "<<bst->root->left->left->left<<endl;
	
/*	bst->DFSPreOrderSearchPrintNodes(bst->root); 
	Node* ptr = bst->DFSPreOrderSearchAra(bst->root, 30);
	if(ptr !=NULL)
	{
		cout<<"aradiginiz deger: "<<ptr->deger<<endl;
		
	}
	else{
		cout<<"aradiginiz deger bulunamadi!!!"<<endl;
	}*/
	
	//bst->DFSPostOrderSearchPrintNodes(bst->root);
	bst->DFSInOrderSearchPrintNodes(bst->root);

}
