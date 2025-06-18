//SORU1: C++ ta bir say�y� input olarak al�� karek�k�n� vere program� yaz�n�z
#include<iostream>
#include<math.h>
using namespace std;


/*int main()
{
	int x;
	cout<<"Enter a number: "<<endl;
	cin>>x;
	cout<<"Girilen say�n�n karekoku : "<<sqrt(x)<<endl;
	return 0;
}*/

//SORU2: C++ ta toplama i�lemi yapan bir program tasarlay�n ilk a�amada say�lar a = 5 b = 7 g�m�l� olarak verilecek ikinci a�amada
// kullan�c�dan  say� al�narak toplama i�lemi ger�ekle�tirilecek

/*int main()
{
	int a = 5 , b = 7;
	cout<<"a = "<<a<<"b = "<<b<<endl;
	cout<<"a + b"<<a+b<<endl;
	cout<<"Enter a two integers:"<<endl;
	cin>>a>>b;
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	cout<<"a + b = "<<a+b<<endl;
	
	return 0;
}*/

//SORU3: Nesne tabanl� programlama y�ntemini kullanarak ekrana girilen say�lar� toplayan bir program yaz�n�z



/*class Adder
{
	public:
	Adder(int i=0)
	{
		total =i;
	}
	void Addnum(int num){
		total+= num;
	}
	void printValue(){
	cout<<"Yeni total: "<<getTotal()<<endl;
	}
	
	private:
		int total;
		int getTotal(){
			return total;
		}
};

int main()
{
	Adder adder_1;
	int x = 0;
	
	cout<<"Bu program girdiginiz degerleri toplar ve bu toplam� ekrana yazd�r�r"<<endl;
	cout<<"Girdigin deger negatif ise bunuda ekler ve program� sonland�r�r"<<endl;
	while(x>=0){
		cout<<"Deger giriniz: "<<endl;
		cin>>x;
		
		adder_1.Addnum(x);
		adder_1.printValue();
	}
	return 0;
}*/


//SORU:4 Nesne tabanl� programlama y�ntemi kullanarak line s�n�f�n� tan�mla.S�n�f�n lenght uzunluk de�erini belirle S�n�f i�erisinde bu �zelli�i �a��rma ve de�i�tirme 
//fonksiyonlar�n�n tan�mla

/*class Line
{
	double length; //length de�i�keni sadece s�n�f i�ersinde tan�mlan�r
	void setlength(double len);//length de�erini de�i�tirmek i�in kullan�l�r
	double getlenght(void);//length de�erini okumak i�in kullan�l�r
}

double Line::getlenght(void){ // burda length de�erii okuyor ve returnle geriye length de�erini d�nd�r�r
	return length;
}

void Line::setlength(double len){//lenght de�erini de�i�tirmek i�in kullan�l�r
	length = len; 
}


int main()
{
	Line line1;
	line1.setlength(6.0);//burdan double olarak 6.0 olarak g�nderilir

	cout<<"Length of line"<<line1.getLength()<<endl;//line1 de�erini burda okur
	line.length  = 10.0;//de�eri de�i�tirir
	cout<<"Length of line"<<line1.length<<endl;//de�eri fonksiyonla tekrar okur
	return 0;
}*/


//SORU5: Soru 4'te tan�mlanan de�erin uzunluk de�erini private yapan Constructor Destructor fonksiyonlar� ve yukar�da verilen say�lan di�er fonksiyonlar public
//olarak eri�ilebilsin


/*class Line
{
	public:
		void setLength(double len);
		double getlength(void);
	private:
		double len;
};


Line::Line(void)
{
	cout<<"uzunluk degeri olusturuldu"<<endl;
}
Line::~Line(void)
{
	cout<<"uzunluk degeri silindi"<<endl;
}
double Line::getlength(void)//de�eri burda geri d�nd�rerek okur
{
	return length;
}
double Line::setLength(double len)//de�erin burda de�erini de�i�tirir
{
	length = len;
}

int main()
{
	Line line;
	line.setlength(6.0);
	cout<<"Length of line: "<<line.getlength()<<endl;//getlength()ile return de�erini d�nd�rerek yazd�r�r.
	
	return 0;
}*/


//SORU6: Bir vector �rnegi olusturup push_back,insert,remove i�lemlerini g�ster

#include<iostream>
#include<vector>
using namespace std;


/*int main()
{
	vector<int> numbers;
	
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	
	numbers.insert(numbers.begin() +1,15);//15'i 1. indeks konumuna ekler
	numbers.erase(numbers.begin()+2);//2. indeski siler yani 30 say�s�n� siler
	
	for(int i = 0;i<number.size();i++){
		cout<<numbers[i]<<endl;
	}
	
	return 0;
}*/

//SORU7: Vectore bir class pushback edip class�n methoduna eri�ecek �ekilde bir �rnek kod haz�rlay�n�z
#include<iostream>
#include<vector>
using namespace std;
/*class myClass{
	public:
		//Constructor fonksiyonu
		//Value parametresini al�r ve s�n�f�n value de�erini atar
		myClass(int value ):value(value)
		
		//value'yu ekrana yazd�ran fonksiyon
		void display(){
			cout<<"Value"<<value<<endl;
		}
		private:
			int value;//value de�erine d��ardan eri�ememk i�in  private yapt�k
};

int main()
{
	vector<myClass> myVector;
	
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.insert(myVector.begin(),35);//i�erisindeki ilk de�er 35 olcak �ekilde ayarlan�yor
	
	for(int i = 0;i<myVector.size();i++){
		myVector[i].display();
	}
	
	cout<<"Vectorden son silinen eleman  silinidkten sonra kalan elemanlar:"<<endl;
	myVector.pop_back();
	for(int i = 0;i<yVector.size();i++){
			myVector[i].display();
		}
		
	cout<<"Vectorden ilk eleman silindikten sonra kalan elemanlar:"<<endl;
	myVector.erase(myVector.begin());//ilk eleman� bu kod ile sildik
	for(int i=0;i<myVector.size();i++){
		myVector.display();
	}
	return 0;
}*/
