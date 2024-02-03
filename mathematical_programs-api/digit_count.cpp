
#include <iostream>
using namespace std;
//count the digit in given positive number

int main()
{
    int num,rem,count=0;
    cout<<"Enter the number : ";
    cin>>num;
    
      while(num!=0)
       {
           count++;
        rem = num%10;
        num = num/10;
       }
    cout<<count;
    return 0;
}

