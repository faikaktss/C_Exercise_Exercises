/*SORU1:
1. #include direktifleriyle gerekli kütüphaneleri (örn. iostream, stack, string ) dahil edin. 
2. main fonksiyonunda bir stack veri yapýsý oluþturun ve char türünde olmasýna dikkat edin. 
3. Kullanýcýdan bir string alacak bir deðiþken (str) tanýmlayýn. 
4. Kullanýcýnýn girdiði stringi okuyun. 
5. Bir int deðiþkeni ( i ) tanýmlayýn ve 0 ile baþlatýn. 
6. Bir boolean deðiþkeni ( flag ) tanýmlayýn ve baþlangýçta false olarak ayarlayýn. 
7. while döngüsü kullanarak stringin her karakterini kontrol edin: 
• Eðer karakter { ise stack'e ekleyin. 
• Eðer karakter } ise: 
¦ Stack boþ deðilse en üstteki elemaný çýkartýn. 
¦ Eðer stack boþsa flag deðiþkenini true olarak ayarlayýn ve döngüyü kýrýn. 
8. Döngü bittikten sonra: 
Eðer flag false ise ve stack boþsa "Dengeli Parantez" yazdýrýn. 
• Aksi takdirde "Parantez dengeli deðil" yazdýrýn
*/
/* Bu soruya bir daha bak*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;


/*int main()
{
	stack<char> st;
	string str;
	cout<<"str degerini giriniz:" <<str<<endl;
	cin>>str;
	int i = 0;
	bool flag = false;
	while(i<str.length()){
		if(str[i]=='{')
			st.push(str[i]);
		else if(str[i] == '}'){
			if(!st.empty())
				st.pop();
			else
				flag = true ; break;
				
		}
		i++;
	}
	
	if(flag &&!st.empty())	
		cout<<"Dengeli Parantez "<<endl;
	else
		cout<<"Parantez Dengeli Degil"<<endl;
		
	return 0;
}*/


/*SORU2: 
Linked List 
Soru 2: 
Aþaðýdaki adýmlarý takip ederek bir C++ programý yazýnýz: 
1. #include direktifleriyle gerekli kütüphaneleri (örn. iostream, cstdlib) dahil edin. 2. Bir Node yapýsý tanýmlayýn: 
int data ve Node* next alanlarýný içermelidir. 
3. nodePtr adýnda bir typedef tanýmlayarak Node* türünü kullanýma açýn. 
4. insertCoklu adýnda bir fonksiyon tanýmlayýn: 
Bu fonksiyon, Node* head ve int data parametrelerini almalý ve data deðeri 10 olana kadar her bir Node 'a artan deðerleri eklemelidir. 
5. insertBesinci adýnda bir fonksiyon tanýmlayýn: 
Bu fonksiyon, nodePtr& head ve int data parametrelerini almalý ve listedeki beþinci 
Node 'un data deðerini data ile deðiþtirmelidir. 
6. deleteBesinci adýnda bir fonksiyon tanýmlayýn: 
Bu fonksiyon, nodePtr& head parametresini almalý ve listedeki beþinci Node 'u silmelidir. 7. main fonksiyonunda: 
Bir Node oluþturun ve data deðerini 20 olarak atayin. 
insertCoklu fonksiyonu ile listeye deðerler ekleyin. 
Listeyi yazdýrýn. 
insertBesinci fonksiyonunu çaðýrarak beþinci Node 'un deðerini 100 yapýn ve listeyi yazdýrýn. 
deleteBesinci fonksiyonunu çaðýrarak beþinci Node 'u silin ve listeyi yazdýrýn. 
*/


#include<iostream>
#include<cstdlib>

/*bunu tekrar sor ve birine anlattýr*/
struct{
	int data;
	Node* next;
};
typedef Node* nodePtr;

void insertCoklu(struct Node* head, int data){
	if(data==10) return;
	nodePtr tempPtr=new Node;
	tempPtr->next =	NULL;
	head->next = tempptr;
	insertCoklu(tempPtr,data+1);	
}

void insertBesinci(nodePtr&head,int data)
{
	nodePtr tmp = head;
	int say=0;
	
	while(tmp!=NULL){
		say++;
		if(say==5){
			tmp->data = data;
		}
		break;
		tmp = tmp->next;
	}
}

void deleteBesinci (nodePtr& head) { 
nodePtr tmp = 
int say = 0; 
head; 
while (tmp != NULL) { 
say++; 
if (say 
} 
== 
4) { 
nodePtr yedek = tmp->next; 
tmp->next = 
yedek->next; 
delete yedek; 
tmp = tmp->next; 
} 
int main() { 
nodePtr head; 
head = new Node; 
head->data = 20; 
head->next = NULL; 
cout << head->data << endl; 
// Çoklu insert 
insertCoklu (head, 0); 
nodePtr tmp = head; 
while (tmp != NULL) { 
} 
cout << tmp->data << " "; 
tmp = tmp->next; 
cout << endl; 
// Beþinci elemanýn yerine 100 yazdýr. insertBesinci (head, 100); 
tmp = head; 
while (tmp != NULL) { 
cout << tmp->data << 
"; 
tmp = tmp->next; 
} 
cout << endl; 
// Beþinciyi sil 
deleteBesinci (head); 
tmp = head; 
while (tmp != NULL) { 
} 
cout << tmp->data << " "; 
tmp = tmp->next; 
cout << endl; 
return 0; 
