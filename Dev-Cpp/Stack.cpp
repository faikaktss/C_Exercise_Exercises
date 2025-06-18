#include <iostream>
#include <string>
#include <stack>





/*using namespace std;

stack<char>mystack ; 
 
string str ;

bool dogrumuyanlismi=1 ;
cout<<"Lutfen kontrol etmek istediginiz ifadeyi girer misiniz ? "  ;
cin>>str ; 

for(int i=0 ; i<str.size() ; i++)
{

    if(str[i]=='{' || str[i]=='(' || str[i]=='[')
    {

        mystack.push(str[i]) ; 

    }


    else if(str[i]==')' || str[i]=='}' || str[i]==']')
    {
        if(str[i]==')')
        {
            if(mystack.empty()==1)
            {
                dogrumuyanlismi=0 ;
                break ; 

            }

           else  if(mystack.top()=='(')
            {
                mystack.pop() ;     
            }

            else if(mystack.top()!='(')
            {
                dogrumuyanlismi=0 ; 
                break ; 
            }
        }


        else if(str[i]=='}')
        {
            if(mystack.empty()==1)
            {
                dogrumuyanlismi=0 ; 
                break ; 

            }

             else if(mystack.top()=='{')
            {
                mystack.pop() ;     
            }
            else if(mystack.top()!='{')
            {
                dogrumuyanlismi=0 ; 
                break ; 

            }

        }


        else if(str[i]==']')
        {
            
            
            if(mystack.empty()==1)
            {
                dogrumuyanlismi=0 ; 
                break ; 

            }


            else if(mystack.top()=='[')
            {
                mystack.pop() ;     
            }

            else if(mystack.top()!='[')
            {
                dogrumuyanlismi=0 ; 
                break ; 

            }

        }
    }

}

if(dogrumuyanlismi==0 || mystack.empty()==0)
{
    cout<<"Girdiginiz ifade dengeli parantez degildir." ; 
}

else
{
    cout<<"Girdiginiz ifade dengeli parantezdir." ; 
}
*/


/*Infýx ifadeyi postfix ifadeye çeviren kod*/
/*#include <stack>
#include <iostream>*/

/*using namespace std;

int main(void)
{
	stack<char>st;
	string str;
	cout<<"Postfix edilmesini istediðiniz ifadeyi girinz: "<<endl;
	cin>>str;
	
	int i;
	for(int i = 0;i<str.length();i++){
		if(str[i] == '+' || str[i] == '*')
			st.push(str[i]);
		else
			cout<<str[i];
	}
	while(!str.empty()){
		cout<<st.top();
		st.pop();
	}
	
	return 0;
}*/









///////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;
//Node sýnýfýný oluþturma
class Node{
	public:
		int deger;
		Node* next;
		
		Node(int deger){
			this->deger = deger;
			next = NULL;
		}
};

class Stack{
	private:
		Node* top;
		int count;
	public:
		Stack(int deger){
			Node* node = new Node(deger);
			top = node;
			count  = 1;
		}
		~Stack()
		{
			Node* tmp = top;
			while(top !=NULL)
			{
			top = top->next;
			delete tmp;
			tmp = top;
			}
		}
		
		void printAll()
		{
			Node* tmp = top;
			while(tmp !=NULL){
				cout<<tmp->deger<<endl;
				tmp = tmp->next;
			}
		}
		
		void printTop(){
			cout<<"Top Deger : "<<top->deger<<endl;
		}
		
		int getCount()
		{
			return count; 	 	
		}
		void push(int deger)
		{
			Node* newnode = new Node(deger);
			newnode->next = top;
			top = newnode; 
			count++;
		}
		int pop()
		{
			if(count == 0)
				return -1;
			Node* tmp = top;
			int deger = top->deger;
			top = top->next;
			delete tmp;
			tmp = top;
			count--;
			return deger;
		}
};


int main(void)
{
	Stack* stack = new Stack(24);
	
	stack->push(8);
	stack->push(40);
	cout<<"Stacktaki node sayisi: "<<stack->getCount()<<endl;
	stack->printAll();
	stack->printTop();
	stack->pop();
	stack->printAll();
}



/////////////////////////////////////////////////////////////////////////////////
int main() {
    stack<char> st;
    string str;
    cin >> str;
    char c;
    bool Denge = true;

    for (int i = 0; i < str.length(); i++) {
        c = str[i];
        if (c == '{') {
            st.push(c);
        } else if (c == '}') {
            if (!st.empty()) {
                st.pop();
            } else {
                Denge = false;
                break;
            }
        }
    }

    if (Denge && st.empty()) {
        std::cout << "Dengede" << std::endl;
    } else {
        std::cout << "Dengede degil" << std::endl;
    }

    return 0;
}

