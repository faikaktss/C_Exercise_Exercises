/*SORU1:
1. #include direktifleriyle gerekli k�t�phaneleri (�rn. iostream, stack, string ) dahil edin. 
2. main fonksiyonunda bir stack veri yap�s� olu�turun ve char t�r�nde olmas�na dikkat edin. 
3. Kullan�c�dan bir string alacak bir de�i�ken (str) tan�mlay�n. 
4. Kullan�c�n�n girdi�i stringi okuyun. 
5. Bir int de�i�keni ( i ) tan�mlay�n ve 0 ile ba�lat�n. 
6. Bir boolean de�i�keni ( flag ) tan�mlay�n ve ba�lang��ta false olarak ayarlay�n. 
7. while d�ng�s� kullanarak stringin her karakterini kontrol edin: 
� E�er karakter { ise stack'e ekleyin. 
� E�er karakter } ise: 
� Stack bo� de�ilse en �stteki eleman� ��kart�n. 
� E�er stack bo�sa flag de�i�kenini true olarak ayarlay�n ve d�ng�y� k�r�n. 
8. D�ng� bittikten sonra: 
E�er flag false ise ve stack bo�sa "Dengeli Parantez" yazd�r�n. 
� Aksi takdirde "Parantez dengeli de�il" yazd�r�n
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
A�a��daki ad�mlar� takip ederek bir C++ program� yaz�n�z: 
1. #include direktifleriyle gerekli k�t�phaneleri (�rn. iostream, cstdlib) dahil edin. 2. Bir Node yap�s� tan�mlay�n: 
int data ve Node* next alanlar�n� i�ermelidir. 
3. nodePtr ad�nda bir typedef tan�mlayarak Node* t�r�n� kullan�ma a��n. 
4. insertCoklu ad�nda bir fonksiyon tan�mlay�n: 
Bu fonksiyon, Node* head ve int data parametrelerini almal� ve data de�eri 10 olana kadar her bir Node 'a artan de�erleri eklemelidir. 
5. insertBesinci ad�nda bir fonksiyon tan�mlay�n: 
Bu fonksiyon, nodePtr& head ve int data parametrelerini almal� ve listedeki be�inci 
Node 'un data de�erini data ile de�i�tirmelidir. 
6. deleteBesinci ad�nda bir fonksiyon tan�mlay�n: 
Bu fonksiyon, nodePtr& head parametresini almal� ve listedeki be�inci Node 'u silmelidir. 7. main fonksiyonunda: 
Bir Node olu�turun ve data de�erini 20 olarak atayin. 
insertCoklu fonksiyonu ile listeye de�erler ekleyin. 
Listeyi yazd�r�n. 
insertBesinci fonksiyonunu �a��rarak be�inci Node 'un de�erini 100 yap�n ve listeyi yazd�r�n. 
deleteBesinci fonksiyonunu �a��rarak be�inci Node 'u silin ve listeyi yazd�r�n. 
*/


#include<iostream>
#include<cstdlib>

/*bunu tekrar sor ve birine anlatt�r*/
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
// �oklu insert 
insertCoklu (head, 0); 
nodePtr tmp = head; 
while (tmp != NULL) { 
} 
cout << tmp->data << " "; 
tmp = tmp->next; 
cout << endl; 
// Be�inci eleman�n yerine 100 yazd�r. insertBesinci (head, 100); 
tmp = head; 
while (tmp != NULL) { 
cout << tmp->data << 
"; 
tmp = tmp->next; 
} 
cout << endl; 
// Be�inciyi sil 
deleteBesinci (head); 
tmp = head; 
while (tmp != NULL) { 
} 
cout << tmp->data << " "; 
tmp = tmp->next; 
cout << endl; 
return 0; 
