#include <iostream>

using namespace std;
//reverse of positive n number

int main()
{
    int num,rem,rev=0;
    cout<<"Enter the number : ";
    cin>>num;
    
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10+rem
        num= num/10;
    }
    cout<<"resverse number is: "<<rev;
    return 0;
}