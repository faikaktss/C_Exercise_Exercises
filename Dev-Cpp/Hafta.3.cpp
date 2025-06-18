#include<iostream>
using namespace std;
/*SORU1: 1. recursivePrint ad�nda �zyinemeleli bir fonksiyon tan�mlay�n. 
2. Bu fonksiyon integer t�r�nden bir de�i�ken alacak olup, bu de�i�kenden 1'e kadar olan de�erleri 
ekrana yazd�rmal�d�r. 
3. �rnek olarak tan�ml� de�i�ken 67 oldu�unda 67'den 1'e kadar olan say�lar� s�ras�yla yazd�rmal�. 
4. Fonksiyonun kendisini �a��rma komutundan sonra de�i�keni tekrar yazd�rarak ekran ��kt�s�n� 
inceleyin. */
/*int recursivePrint(int n)
{
	//Temel durum n 1'e ula�t���nda dur
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
1. int n de�i�kenine tan�ml� de�erin fakt�ryelini bulacak �zyinemeli bir fonksiyon yaz�n�z. 
2. Bu fonksiyonu main fonksiyonu i�erisinde n=5, 6 ve 12 de�erleri i�in test ediniz. */

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
1. Fibonacci serisinin ilk n eleman�n� bulacak �zyinemeli bir fonksiyon yaz�n. 
2. Hesaplanan de�erleri main fonksiyonu i�erisinde bir for d�ng�s� ile ekrana yazd�r�n. 
3. Bu fonksiyonu main fonksiyonu i�erisinde n=8, 10 ve 12 de�erleri ile �a��rarak test ediniz. */


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
