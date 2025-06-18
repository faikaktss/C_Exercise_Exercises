#include <iostream>
#include <string>
using namespace std;

//class Vehicle{
//	protected:
//		int number = 7;
//	public:
//		string brand="Skoda";
//		void message(){
//			cout<<"My car is";
//		}
//};
//class Car:public Vehicle{ //miras alýyoruz üstteki classta publice ulaþamayýz
//	public:
//		string model="Octovia";
//		void message2(){
//			cout<<number;
//		}
//};



//2. örnek
//class Father{
//	public:
//		void myMethod(){
//			cout<<"This is unbelievable";
//		}
//};

//class Son:public Father{
//	protected:
//		int number = 7;
//};

//class GrandChild: public Son{
//	private:
//		string name = "Faik Aktaþ";
//		public:
//			int getValue(){
//				return number;
//			}
//};

//int main()
//{
//	GrandChild myObj;
//	myObj.myMethod();
//	cout<<myObj.getValue();
//	
//	return 0;
//}



// 3.örnek

class Menu {
	public:
		string name;
		float calories;
		void message{
		cout<<name<<" ("<<calories<<" cal)\n)";
		}
};

class Drink{
	public:
		string name;
		float calories;
		float ounces;
		float cal_per_ounces{
			return calories/ounces;
		}
		void message{
		cout<<name<<" ("<<calories<<" cal) \n";
		}
};

int main()
{
	Mymenu m1;
	m1.name = "kebab";
	m1.calories=658.43;
	m1.message();
	
	Drink s1;
	s1.name= "Icelatte";
	s1.calories=489.09;
	s1.ounces=7	
	s1.message();
	cout<<"drink cal/ounces : "<<d1.cal_per_ounces()<<"\n"; 
	
	
	return 0;
}


///////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
	public:
		double speed;
		int wheels;
		void go(){
			cout<<"This vehicle is moving\n";
		}
		void stop(){
			cout<<"This vehicle is stopped\n";
		}
};
class Car:public Vehicle{
	public:
		int doors=4;
};
class Bicylcle:public Vehicle{
	public:
		int pedals=2;
};
class Bus:public Vehicle{
	public:
		int seat=60;
};

int main()
{
	Bus b1;
	b1.speed=100;
	b1.wheels = 6;
	b1.go();
	cout<<"bus speed:"<<b1.speed<<"\n";
	cout<<"bus wheels:"<<b1.wheels<<"\n";
	cout<<"bus seat:"<<b1.seat<<"\n";
	b1.stop();
	cout<<"\n";
	Car c1;
	c1.speed=70;
	c1.wheels=5;
	c1.go();
	cout<<"bus speed:"<<b1.speed<<"\n";
	cout<<"bus wheels:"<<b1.wheels<<"\n";
	cout<<"bus seat:"<<b1.seat<<"\n";
	b1.stop();
	return 0;
}
