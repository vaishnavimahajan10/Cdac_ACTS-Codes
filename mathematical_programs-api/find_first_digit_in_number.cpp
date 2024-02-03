
#include <iostream>
using namespace std;
//first digit in positive numbers

int main()
{
    int num,rem;
    int rev=0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
     rev=rev%10;
     cout<<rev;
    return 0;
}

