/*SORU1:C++'ta 
1. numbers adýnda integer türünde bir vektör oluþturun 
2. Bu vektöre sýrasýyla 10, 20 ve 30 sayýlarýný ekleyin 
3. Vektör 2. indeksine 15 sayýsýný ekleyin 
4. Vektörün 3. elemanýný silin 
5. Vektörün kalan elemanlarýný ekrana yazdýrýn	
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
1. Storage adýnda bir vektör oluþturun. 
2. Kullanýcýdan bu vektore kaydetmek üzere sayý girmesini isteyin. 
3. Kullanýcý istediði kadar sayý girebilsin, girilen bu deðerleri vektöre kaydedin. 4. -1 deðeri girdiðinde program sayý almayý tamamlasýn ve baþka sayý almasýn. 
5. Son girilen -1 deðerini Storage vektöründen silin 
6. Storage vektöründe kalan tüm deðerleri ekrana yazdýrýn. 
7. Kalan sayýlarýn toplam deðerini bulup ekrana yazdýrýn. 
8. Tüm deðerleri 2 olan ve 10 element içeren yeni bir vektör oluþturun. 
9. Bu yeni verktörde tüm elementlerin 2 olduðunu göstermek için tüm vektörü yazdýrýn. 
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
	
	storage2 (10 , 2);//deðerler sað tarafa kaç element içereceði sol kýsma yazýlýr
	for(int i = 0;i<storage2.size();i++)
	{
		cout<<storage2[i]<<endl;
	}
	return 0;
}*/


/*
Soru 3: C++'ta 
1. MyClass adýnda bir class oluþturun. 
2. MyClass sýnýfýndan bir nesne oluþturulduðunda value deðerini alarak bunu sýnýfýn value 
deðerine atasýn. 
3. Sýnýfa ait display adýnda bir metod oluþturun, bu metod value deðerini ekrana yazdýrsýn. 
4. MyClass türünden nesneleri tutacak myVector adýnda bir vektör oluþturun. 
5. Bu vektöre 10 deðeri ile bir MyClass nesnesi ekleyin. 
6. Bu vektöre 20 deðeri ile bir MyClass nesnesi ekleyin. 
7. myVector içerisindeki ilk deðer 35 deðerini içerecek bir MyClass nesnesi olacak þekilde vectorü 
güncelleyin. 
8. Vektördeki son deðeri silin. 
9. Kalan elemanlarýn tümü MyClass'ýn display metodunu çaðýracak bir döngü yazýn. 
10. Vektörden ilk elemaný sildikten sonra tekrardan ayný döngü ile kalan elemanlarý ekrana yazdýrýn. 
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
	myVector.insert(myVector.begin(),myClass(35));//vectorun ilk elemanýna 35 deðerini atadýk
	
	for(int i=0;i<myVector.size();i++)
		myVector[i].display();
	cout<<"Vectorden ilk eleman silindikten sonra kalan elemanlar: "<<endl;
	myVector.pop_back();
	for(int i=0;i<myVector.size();i++)
		myVector[i].display;
		
	return 0;
}*/




/*
Soru 4: C++'ta bir proje oluþturun. 
1. Projeye IntCell adýnda bir sýnýf oluþturarak header dosyasýný main dosyaya ekleyin. Not: 
Intcell sýnýfý tek bir deðer ( value ) tutan bir hücre olacak. 
2. Sýnýf için iki farklý constructor fonksiyonu oluþturun. Bunlardan bir tanesi nesne oluþturulurken 
herhangi bir baþlangýç deðeri verilmediðinde çaðrýlacak, bu durumda default baþlangýç deðerini 67 yapýnýz, diðeri ise baþlangýç deðeri verildiðinde çaðrýlacak. 
3. Sýnýfýn read & write þeklinde iki metodu olacak. Read fonksiyonu value yu ekrana yazdýracak. Write 
fonksiyonu ise value deðerini güncelleyecektir. 
4. Main fonksiyonunda default constructor çaðýracak þekilde bir nesne oluþturun. 
5. Main fonksiyonunda 12 deðeri ile nesne oluþturun. 
6. Birinci nesneye 44 deðerini atayin. 
7. Ýkinci nesnenin deðerini 1 artýrarak kaydedin. 
8. 1 ve 2. nesnelerin deðerlerini ekrana yazdýrýn. 
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


