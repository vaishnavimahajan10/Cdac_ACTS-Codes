
#include <iostream>
using namespace std;
//product of all digit of positive number

int main()
{
    int num,rem,product=1;
    cout<<"Enter the number : ";
    cin>>num;
    
      while(num!=0)
       {
        rem = num%10;
        product= product*rem;
        num = num/10;
       }
    cout<<product;
    return 0;
}

