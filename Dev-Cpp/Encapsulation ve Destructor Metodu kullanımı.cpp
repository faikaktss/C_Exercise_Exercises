//Encapsulation ve Destructor Metodu kullanýmý
#include <iostream>
#include <string>

using namespace std;

class Employee{
	private:
		int salary;
	public:
		void setSalary(int x){ // set
		salary = x;
	}
	int getSalary(){
		return salary;
	}
};

int main()
{
	Employee em;
	em.setSalary(30000);
	cout<<em.getSalary()<<"\n";
	
	return 0;
}
