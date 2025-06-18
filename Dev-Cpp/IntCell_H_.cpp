#ifndef_IntCell_H_
#define_IntCell_H_

class IntCell
{
	public:
		IntCell();
		IntCell(int initialValue);
		int read();
		void write(int x);
		
	private:
		int storedValue;
}

#endif 

#include "IntCell.h"

IntCell::IntCell(){
	storedValue = 67;
}
IntCell: IntCell(int initialValue){
	storedValue = initialValue;
}
int IntCell::read( ){ 
return storedValue; 
} 
void IntCell::write( int x ){ 
storedValue = x; 
} 

