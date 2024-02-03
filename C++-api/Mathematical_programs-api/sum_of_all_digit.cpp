
#include <iostream>
using namespace std;
//sum of all digit of positive & negative number

int main()
{
    int num,rem,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    
    if(num<0)
    {
        num=-num;
    }
       do
       {
        rem = num%10;
        sum=sum+rem;
        num = num/10;
       } while(num!=0);
       
    cout<<sum;
    return 0;
}

