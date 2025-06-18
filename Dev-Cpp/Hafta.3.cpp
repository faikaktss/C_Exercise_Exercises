#include<iostream>
using namespace std;
/*SORU1: 1. recursivePrint adýnda özyinemeleli bir fonksiyon tanýmlayýn. 
2. Bu fonksiyon integer türünden bir deðiþken alacak olup, bu deðiþkenden 1'e kadar olan deðerleri 
ekrana yazdýrmalýdýr. 
3. Örnek olarak tanýmlý deðiþken 67 olduðunda 67'den 1'e kadar olan sayýlarý sýrasýyla yazdýrmalý. 
4. Fonksiyonun kendisini çaðýrma komutundan sonra deðiþkeni tekrar yazdýrarak ekran çýktýsýný 
inceleyin. */
/*int recursivePrint(int n)
{
	//Temel durum n 1'e ulaþtýðýnda dur
	if(n<1)
		return 1;
		cout<<n<<""<<endl;
	recursivePrint(n-1);


}

int main()
{
	int number=67;
	recursivePrint(67);
	return 0;
}*/



/*SORU2: } 
Soru 2: C++'ta 
1. int n deðiþkenine tanýmlý deðerin faktöryelini bulacak özyinemeli bir fonksiyon yazýnýz. 
2. Bu fonksiyonu main fonksiyonu içerisinde n=5, 6 ve 12 deðerleri için test ediniz. */

/*int Faktoriyel(int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	return n*Faktoriyel(n-1);
}

int main()
{
	int n = 5;
	Faktoriyel(n);
	cout<<Faktoriyel(n)<<endl; 
	return 0;
	
}*/


/*SORU3: Soru 3: C++'ta 
1. Fibonacci serisinin ilk n elemanýný bulacak özyinemeli bir fonksiyon yazýn. 
2. Hesaplanan deðerleri main fonksiyonu içerisinde bir for döngüsü ile ekrana yazdýrýn. 
3. Bu fonksiyonu main fonksiyonu içerisinde n=8, 10 ve 12 deðerleri ile çaðýrarak test ediniz. */


int Fibonacci(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return Fibonacci(n-2) + Fibonacci(n-1);
}

int main()
{
	int n = 12;
	cout<<"Fibonacci serileri"<<n<<endl;
	for(int i = 0;i<n;i++){
		cout<<Fibonacci(i)<<" "<<endl;
	}
	return 0;
}
