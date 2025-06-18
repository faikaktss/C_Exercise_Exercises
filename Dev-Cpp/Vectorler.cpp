#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers(10,7);//10 elemanlý hepsine 7 ata
	
	numbers={1,2,3,4,5,6,7,8,9,10};
	
	cout<<"at():"<<numbers.at(6)<<"\n";
	cout<<"front():"<<numbers.front()<<"\n";
	cout<<"back():"<<numbers.back()<<"\n";
	
	return 0;
}
