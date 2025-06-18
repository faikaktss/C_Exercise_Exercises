/*
SORU1:
Soru 1: C++'ta 
1. arr adýnda integer türünde bir array oluþturup {7, 8, 5, 2, 4, 6, 3} deðerlerini bu arraya atayin. 
2. arr arrayinin kaç eleman içerdiðini sizeof metodunu kullanarak bulun. 
3. bubbleSort adýnda arr arrayini ve arrayin uzunluk deðerini alan bir fonksiyon tanýmlayýn. 
4. bubbleSort fonksiyonu arr arrayinin öðelerini insertion/ekleme sýralamasý algoritmasý ile 
sýralayacak þekilde tasarlayýn. 
5. printArray adýnda arr arrayini ve arrayin uzunluk deðerini alan baþka bir fonksiyon tanýmlayýn. 
6. printArray içerisinde arr arrayini yazdýrýn ve sýralamanýn doðru gerçekleþip gerçekleþmediðini 
kontrol edin. 
*/

#include<iostream>
using namespace std;

/*void bubblesort(int arr[],int n)
{
	for(int i=0;i<n;i++){
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}

int main()
{
	int arr[] = {64,34,25,12,22,11,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"ilk array: ";
	printArray(arr,n);
	
	bubblesort(arr,n);
	cout<<"Siralanmis array: ";
	printArray(arr,n);
	
	return 0;
}*/


/*
SORU2: 
Soru 2: C++'ta 
1. arr adýnda integer türünde bir array oluþturup {7, 8, 5, 2, 4, 6, 3} deðerlerini bu arraya atayýn. 
2. arr arrayinin kaç eleman içerdiðini sizeof metodunu kullanarak bulun. 
3. insertionSort adýnda arr arrayini ve arrayin uzunluk deðerini alan bir fonksiyon tanýmlayýn. 
4. insertionSort fonksiyonu arr arrayinin öðelerini insertion/ekleme sýralamasý algoritmasý ile 
sýralayacak þekilde tasarlayýn. 
5. printArray adýnda arr arrayini ve arrayin uzunluk deðerini alan baþka bir fonksiyon tanýmlayýn. 
6. printArray içerisinde arr arrayini yazdýrýn ve sýralamanýn doðru gerçekleþip gerçekleþmediðini 
kontrol edin. 
*/

/*void insertionSort(int arr[],int lenght)
{
	for(int i=1;i<lenght;i++){
		int key = arr[i];
		int j = i-1;
		while(j=0;&&arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}


void printArray(int arr[], int lenght){
	for(int i=0;i<lenght;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	int arr[] = {7,8,5,2,4,6,3};
	int lenght=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Orjinal dizi";
	printArray(arr.lenght);
	
	insertionSort(arr,lenght);
	cout<<"Siralanmis dizi:";
	printArray(arr.lenght);
	
	return 0;
}*/



