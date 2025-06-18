#include <iostream>
#include <string>

using namespace std;

class car{
	public:
		string brand;
		string model;
		int year;
		void message(){
			cout<<"Hello C++ OOP \n";
		}
		int speed(int mySpeed)
		{
			return mySpeed;
		}
};

int main()
{
	car c1;
	c1.brand="Skoda";
	c1.model="Superb";
	c1.year=2001;
	
	car c2;
	c2.brand="Skoda";
	c2.model="Superb";
	c2.year=2001;
	
	c1.message();
	
	cout<<c1.brand<<"-"<<c1.model<<"-"<<c1.year<<"-"<<c1.speed(180)<<"\n";
	cout<<c2.brand<<"-"<<c2.model<<"-"<<c2.year<<"-"<<c2.speed(140)<<"\n";
	
}


////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

class MathOperations{
	public:
		int number1, number2;
		MathOperations(int x, int y){
			number1=x;
			number2=y;
		}
		int addition(){
			return number1 + number2;
		}
		int subtraction(){
			return number1-number2;
		}
		int multiplication(){
			return number1*number2;
		}
		int division(){
			return number1/number2;
		}
		void getData(){
			cout<<addition()<<"\n";
			cout<<subtraction()<<"\n";
			cout<<multiplication()<<"\n";
			cout<<division()<<"\n";
			
		}
};

int main()
{
	MathOperations myObj(10,5);
	myObj.getData();
	
	MathOperations myObj2(20,4);
	myObj2.getData();
	
	return 0;
}

