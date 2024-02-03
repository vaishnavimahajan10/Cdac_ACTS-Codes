#include <iostream>

float average( int num1, int num2 ); 

int main(){
	using namespace std;
	int num1, num2;
  	float c;
  	cout << "Enter first number" << endl;
  	cin >> num1;
  	cout << "Enter second number" << endl;
  	cin >> num2;
  	c = average( num1, num2 ); 
  	cout << "Average is " << c << endl;
	return 0;
}

float average( int num1, int num2 ) /* function */
{
    	float avg; /*  local variable */
    	avg = ( num1 + num2 )/2.0;
   	return avg; /* returning average value */
}