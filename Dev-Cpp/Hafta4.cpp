/*
SORU1:
Soru 1: C++'ta 
1. arr ad�nda integer t�r�nde bir array olu�turup {7, 8, 5, 2, 4, 6, 3} de�erlerini bu arraya atayin. 
2. arr arrayinin ka� eleman i�erdi�ini sizeof metodunu kullanarak bulun. 
3. bubbleSort ad�nda arr arrayini ve arrayin uzunluk de�erini alan bir fonksiyon tan�mlay�n. 
4. bubbleSort fonksiyonu arr arrayinin ��elerini insertion/ekleme s�ralamas� algoritmas� ile 
s�ralayacak �ekilde tasarlay�n. 
5. printArray ad�nda arr arrayini ve arrayin uzunluk de�erini alan ba�ka bir fonksiyon tan�mlay�n. 
6. printArray i�erisinde arr arrayini yazd�r�n ve s�ralaman�n do�ru ger�ekle�ip ger�ekle�medi�ini 
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
1. arr ad�nda integer t�r�nde bir array olu�turup {7, 8, 5, 2, 4, 6, 3} de�erlerini bu arraya atay�n. 
2. arr arrayinin ka� eleman i�erdi�ini sizeof metodunu kullanarak bulun. 
3. insertionSort ad�nda arr arrayini ve arrayin uzunluk de�erini alan bir fonksiyon tan�mlay�n. 
4. insertionSort fonksiyonu arr arrayinin ��elerini insertion/ekleme s�ralamas� algoritmas� ile 
s�ralayacak �ekilde tasarlay�n. 
5. printArray ad�nda arr arrayini ve arrayin uzunluk de�erini alan ba�ka bir fonksiyon tan�mlay�n. 
6. printArray i�erisinde arr arrayini yazd�r�n ve s�ralaman�n do�ru ger�ekle�ip ger�ekle�medi�ini 
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



