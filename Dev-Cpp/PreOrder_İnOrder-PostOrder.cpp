#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*using namespace std;
struct node{
	int data;//k�k de�erini tutar
	struct node *left;//sol d���me gideer
	struct node *right;//sa� d���me gider
};

//yeni d���m olu�turma
struct node *newNode(int data){
	struct node *node = (struct node *)malloc(sizeof(struct node));
	
	node->data  = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

//Preorder
void traversePreOrder(struct node *temp){
	if(temp !=NULL){
		cout<<" "<<temp->data;
		traversePreOrder(temp->left);
		traversePreOrder(temp->right);
	}
}

//InOrder
void traverseInOrder(struct node *temp){
	if(temp !=NULL){
		traverseInOrder(temp->left);
		cout<<" "<<temp->data;
		traverseInOrder(temp->right);
		
	}
}

//PostOrder
void traversePostOrder(struct node *temp){
	if(temp!=NULL){
		traversePostOrder(temp->left);
		traversePostOrder(temp->right);
		cout<<" "<<temp->data;
	}
}


int main(void)
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	
	cout<<"Preorder traveresal: ";
	traversePreOrder(root);
	cout<<"\nInorder traversal: ";
	traverseInOrder(root);
	cout<<"\nPostorder traversal: ";
	traversePostOrder(root);
	
}
*/



//A�a�tan belirli de�ere sahip d���m� g�ncelleme fonksiyonunu yaz�n�z.


/*struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* search(Node* root, int value){
	//A�ac� gezerek istenen de�ere sahib eleman bulunur
	if(root == nullptr || root->data == value)
		return root;
	else if(value<root->data)
		return search(root->left,value);
	else if(value>root->data)
		return search(root->right,value);
}

void updateNode(Node* root, int oldValue, int newValue){
	Node* nodeToUpdate = search(root,oldValue);
	
	if(nodeToUpdate !=nullptr){
		nodeToUpdate->data = newValue; //D���m�n verisi g�ncellendi
		cout<<"D���m g�ncellendi"<<newValue<<endl;
	}	
	else
		cout<<"D���m Bulunamad�"<<endl;
}


int main(void)
{
	Node* root =new Node{50,new Node{30}, new Node{70}};
	
	updateNode(root,30,40);//De�eri 30 olan d���m� 40 olarak g�ncelle
	return 0;
}


struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* search(Node*root , int value){
	//A�ac� gezerek istenen de�ere sahip eleman bulunur
	if(root == !nullptr || root == value)
		return root;
	else if(value<root->data)
		return search(root->left, value);
	else if(value> root->data)
		return search(root->right, value);
}

Node* delete(Node* root , int delValue){
	Node* nodeToDelete = search(root,delValue);
	
	if(nodeToDelete != nullptr){
		nodeToDelete->data = ;
	}
}
*/



//A�a�tan belirli de�ere sahip d���m� silme fonksiyonunu yaz�n�z.

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data){
	Node* node = new Node();
	node->data = data;
	node->left =nullptr;
	node->right = nullptr;
	return node;
}

Node* deletNode(int root, int key){
	if(root == nullptr)
		return root;
	if(key<root->data)
		root->left  = deletNode(root->left, key);
	if(key>root->data)
		root->right = deleteNode(root->right,key);
	//silinecek d����m bulundu
	else{
		//Yapraksa
		if(root->left ==nullptr && root->right == nullptr){
			delete root;
			return nullptr;
		}
		
		//Tek �ocukluysa
		else if(root->left == nullptr){
			Node* temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right ==nullptr){
			Node* temp = root->left;
			delete root;
			return temp;
		}
		
		//�ift �ocukluysa (en k���k sa� alt a�a�taki d���mle de�i�tirilir)
		Node* temp = minValueNode(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
}

Node* minValueNode(Node* node){
	Node* current =node;
	while(current&&current->left!= nullptr)
		current = current->left;
	return current;
}



int main(void)
{
	Node* root = newNode(50);
	root->left = newNode(30);
	root->right= newNode(70);
	root->left->left = newNode(20);
	root->left->right = newNode(40);
	
	cout<<"Silinmeden �nceki deger"<<endl;
	root = deleteNode(root,30);
	cout<<"Silindikten sonraki de�er"<<endl;
	return 0;
}
