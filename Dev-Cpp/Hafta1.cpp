//SORU1: C++ ta bir sayýyý input olarak alýð karekökünü vere programý yazýnýz
#include<iostream>
#include<math.h>
using namespace std;


/*int main()
{
	int x;
	cout<<"Enter a number: "<<endl;
	cin>>x;
	cout<<"Girilen sayýnýn karekoku : "<<sqrt(x)<<endl;
	return 0;
}*/

//SORU2: C++ ta toplama iþlemi yapan bir program tasarlayýn ilk aþamada sayýlar a = 5 b = 7 gömülü olarak verilecek ikinci aþamada
// kullanýcýdan  sayý alýnarak toplama iþlemi gerçekleþtirilecek

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

//SORU3: Nesne tabanlý programlama yöntemini kullanarak ekrana girilen sayýlarý toplayan bir program yazýnýz



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
	
	cout<<"Bu program girdiginiz degerleri toplar ve bu toplamý ekrana yazdýrýr"<<endl;
	cout<<"Girdigin deger negatif ise bunuda ekler ve programý sonlandýrýr"<<endl;
	while(x>=0){
		cout<<"Deger giriniz: "<<endl;
		cin>>x;
		
		adder_1.Addnum(x);
		adder_1.printValue();
	}
	return 0;
}*/


//SORU:4 Nesne tabanlý programlama yöntemi kullanarak line sýnýfýný tanýmla.Sýnýfýn lenght uzunluk deðerini belirle Sýnýf içerisinde bu özelliði çaðýrma ve deðiþtirme 
//fonksiyonlarýnýn tanýmla

/*class Line
{
	double length; //length deðiþkeni sadece sýnýf içersinde tanýmlanýr
	void setlength(double len);//length deðerini deðiþtirmek için kullanýlýr
	double getlenght(void);//length deðerini okumak için kullanýlýr
}

double Line::getlenght(void){ // burda length deðerii okuyor ve returnle geriye length deðerini döndürür
	return length;
}

void Line::setlength(double len){//lenght deðerini deðiþtirmek için kullanýlýr
	length = len; 
}


int main()
{
	Line line1;
	line1.setlength(6.0);//burdan double olarak 6.0 olarak gönderilir

	cout<<"Length of line"<<line1.getLength()<<endl;//line1 deðerini burda okur
	line.length  = 10.0;//deðeri deðiþtirir
	cout<<"Length of line"<<line1.length<<endl;//deðeri fonksiyonla tekrar okur
	return 0;
}*/


//SORU5: Soru 4'te tanýmlanan deðerin uzunluk deðerini private yapan Constructor Destructor fonksiyonlarý ve yukarýda verilen sayýlan diðer fonksiyonlar public
//olarak eriþilebilsin


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
double Line::getlength(void)//deðeri burda geri döndürerek okur
{
	return length;
}
double Line::setLength(double len)//deðerin burda deðerini deðiþtirir
{
	length = len;
}

int main()
{
	Line line;
	line.setlength(6.0);
	cout<<"Length of line: "<<line.getlength()<<endl;//getlength()ile return deðerini döndürerek yazdýrýr.
	
	return 0;
}*/


//SORU6: Bir vector örnegi olusturup push_back,insert,remove iþlemlerini göster

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
	numbers.erase(numbers.begin()+2);//2. indeski siler yani 30 sayýsýný siler
	
	for(int i = 0;i<number.size();i++){
		cout<<numbers[i]<<endl;
	}
	
	return 0;
}*/

//SORU7: Vectore bir class pushback edip classýn methoduna eriþecek þekilde bir örnek kod hazýrlayýnýz
#include<iostream>
#include<vector>
using namespace std;
/*class myClass{
	public:
		//Constructor fonksiyonu
		//Value parametresini alýr ve sýnýfýn value deðerini atar
		myClass(int value ):value(value)
		
		//value'yu ekrana yazdýran fonksiyon
		void display(){
			cout<<"Value"<<value<<endl;
		}
		private:
			int value;//value deðerine dýþardan eriþememk için  private yaptýk
};

int main()
{
	vector<myClass> myVector;
	
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.insert(myVector.begin(),35);//içerisindeki ilk deðer 35 olcak þekilde ayarlanýyor
	
	for(int i = 0;i<myVector.size();i++){
		myVector[i].display();
	}
	
	cout<<"Vectorden son silinen eleman  silinidkten sonra kalan elemanlar:"<<endl;
	myVector.pop_back();
	for(int i = 0;i<yVector.size();i++){
			myVector[i].display();
		}
		
	cout<<"Vectorden ilk eleman silindikten sonra kalan elemanlar:"<<endl;
	myVector.erase(myVector.begin());//ilk elemaný bu kod ile sildik
	for(int i=0;i<myVector.size();i++){
		myVector.display();
	}
	return 0;
}*/
