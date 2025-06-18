/*SORU1:C++'ta 
1. numbers ad�nda integer t�r�nde bir vekt�r olu�turun 
2. Bu vekt�re s�ras�yla 10, 20 ve 30 say�lar�n� ekleyin 
3. Vekt�r 2. indeksine 15 say�s�n� ekleyin 
4. Vekt�r�n 3. eleman�n� silin 
5. Vekt�r�n kalan elemanlar�n� ekrana yazd�r�n	
*/

#include<iostream>
#include<vector>
using namespace std;

/*int main()
{
	vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.insert(numbers.begin() +1,15);
	numbers.erase(numbers.begin()+2);
	for(int i = 0;i<numbers.size();i++){
		cout<<numbers[i]<<endl;
	}

	return 0;
}*/

/*
Soru 2: C++'da 
1. Storage ad�nda bir vekt�r olu�turun. 
2. Kullan�c�dan bu vektore kaydetmek �zere say� girmesini isteyin. 
3. Kullan�c� istedi�i kadar say� girebilsin, girilen bu de�erleri vekt�re kaydedin. 4. -1 de�eri girdi�inde program say� almay� tamamlas�n ve ba�ka say� almas�n. 
5. Son girilen -1 de�erini Storage vekt�r�nden silin 
6. Storage vekt�r�nde kalan t�m de�erleri ekrana yazd�r�n. 
7. Kalan say�lar�n toplam de�erini bulup ekrana yazd�r�n. 
8. T�m de�erleri 2 olan ve 10 element i�eren yeni bir vekt�r olu�turun. 
9. Bu yeni verkt�rde t�m elementlerin 2 oldu�unu g�stermek i�in t�m vekt�r� yazd�r�n. 
*/

/*int main()
{
	vector<int> storage;
	int b= 0;
	while(b!=-1){
		cout<<"-1 Degerini girdiginiz anda sayi girme isleminiz biter!!"<<endl;
		cout<<"Enter a numbers"<<endl;
		cin>>b;
		storage.push_back(b);
	}

	
	for(int i = 0;i<storage.size();i++){
		cout<<storage[i]<<endl;
	}
	
	int toplam = 0;
	for(int i=0;i<storage.size();i++){
		toplam+=storage[i];
	}
	cout<<"Toplam deger: "<<toplam<<endl;
	
	storage2 (10 , 2);//de�erler sa� tarafa ka� element i�erece�i sol k�sma yaz�l�r
	for(int i = 0;i<storage2.size();i++)
	{
		cout<<storage2[i]<<endl;
	}
	return 0;
}*/


/*
Soru 3: C++'ta 
1. MyClass ad�nda bir class olu�turun. 
2. MyClass s�n�f�ndan bir nesne olu�turuldu�unda value de�erini alarak bunu s�n�f�n value 
de�erine atas�n. 
3. S�n�fa ait display ad�nda bir metod olu�turun, bu metod value de�erini ekrana yazd�rs�n. 
4. MyClass t�r�nden nesneleri tutacak myVector ad�nda bir vekt�r olu�turun. 
5. Bu vekt�re 10 de�eri ile bir MyClass nesnesi ekleyin. 
6. Bu vekt�re 20 de�eri ile bir MyClass nesnesi ekleyin. 
7. myVector i�erisindeki ilk de�er 35 de�erini i�erecek bir MyClass nesnesi olacak �ekilde vector� 
g�ncelleyin. 
8. Vekt�rdeki son de�eri silin. 
9. Kalan elemanlar�n t�m� MyClass'�n display metodunu �a��racak bir d�ng� yaz�n. 
10. Vekt�rden ilk eleman� sildikten sonra tekrardan ayn� d�ng� ile kalan elemanlar� ekrana yazd�r�n. 
*/

/*class myClass{
	public:
		myClass(int value):value(value){
		};
		display()
		{
			cout<<"Value degeri: "<<value<<endl;
		}
};

int main()
{
	vector<myClass> myVector;
	myVector.push_back(myClass(10));
	myVector.push_back(myClass(20));
	myVector.insert(myVector.begin(),myClass(35));//vectorun ilk eleman�na 35 de�erini atad�k
	
	for(int i=0;i<myVector.size();i++)
		myVector[i].display();
	cout<<"Vectorden ilk eleman silindikten sonra kalan elemanlar: "<<endl;
	myVector.pop_back();
	for(int i=0;i<myVector.size();i++)
		myVector[i].display;
		
	return 0;
}*/




/*
Soru 4: C++'ta bir proje olu�turun. 
1. Projeye IntCell ad�nda bir s�n�f olu�turarak header dosyas�n� main dosyaya ekleyin. Not: 
Intcell s�n�f� tek bir de�er ( value ) tutan bir h�cre olacak. 
2. S�n�f i�in iki farkl� constructor fonksiyonu olu�turun. Bunlardan bir tanesi nesne olu�turulurken 
herhangi bir ba�lang�� de�eri verilmedi�inde �a�r�lacak, bu durumda default ba�lang�� de�erini 67 yap�n�z, di�eri ise ba�lang�� de�eri verildi�inde �a�r�lacak. 
3. S�n�f�n read & write �eklinde iki metodu olacak. Read fonksiyonu value yu ekrana yazd�racak. Write 
fonksiyonu ise value de�erini g�ncelleyecektir. 
4. Main fonksiyonunda default constructor �a��racak �ekilde bir nesne olu�turun. 
5. Main fonksiyonunda 12 de�eri ile nesne olu�turun. 
6. Birinci nesneye 44 de�erini atayin. 
7. �kinci nesnenin de�erini 1 art�rarak kaydedin. 
8. 1 ve 2. nesnelerin de�erlerini ekrana yazd�r�n. 
*/

#include<iostream>
#include"IntCell.h"

using namespace std;

int main()
{
	IntCell m1;
	IntCell m2(12);
	IntCell *m3;
	m1.write(44);
	m2.write(m2.read() +1);
	cout<<m1.read()<<endl;
	cout<<m1.read()<<m2.read()<<endl;
	m3 = new IntCell;
	cout<<"m3 = "<<m3->read()<<endl;
	return 0;
}


