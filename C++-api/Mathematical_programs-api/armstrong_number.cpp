#include <iostream>
using namespace std;
//armstrong number

int main()
{
    int num,rem,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    
    while(num!=0)
       {
        rem = num%10;
        sum=sum+(rem*rem*rem);
        num = num/10;
       }
       
      if(sum==num)
      {
          cout<<"it is armstrong number";
      }
      else
      {
          cout<<"it is not a armstrong number";
      }
    cout<<sum;
    return 0;
}

