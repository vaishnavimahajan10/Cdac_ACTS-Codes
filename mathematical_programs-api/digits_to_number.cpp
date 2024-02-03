#include <iostream>
using namespace std;
void word(int n)
{
	switch(n){
		case 1:
			cout<<"one";
			break;
		case 2:
			cout<<"two";
			break;
		case 3:
			cout<<"three";
			break;
		case 4:
			cout<<"four";
			break;
		case 5:
			cout<<"five";
			break;
		case 6:
			cout<<"six";
			break;
		case 7:
			cout<<"seven";
			break;
		case 8:
			cout<<"eight";
			break;
		case 9:
			cout<<"nine";
			break;
	}
}
int main()
{ 
	cout<<"\n Given a positive integer print the digits in the number as words: "<<endl;
	int n;
	cin>>n;
	int  rev = 0, remainder;


  while(n != 0) 
  {
    remainder = n % 10;
    rev = rev * 10 + remainder;
    n = n/10;
  }
  
while(rev!=0)
{
	word(rev%10);
	cout<<" ";
	rev=rev/10;
}

	return 0;
}
