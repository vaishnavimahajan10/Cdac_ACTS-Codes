#include <iostream>
using namespace std;
//palindrome number

int main()
{
    int num,rem,rev=0;
    cout<<"Enter the number : ";
    cin>>num;
    
    while(num!=0)
       {
        rem = num%10;
        rev=rev*10+rem;
        num = num/10;
       }
       
      if(rev==num)
      {
          cout<<"it is palindrome number";
      }
      else
      {
          cout<<"it is not a palimdrome number";
      }
    return 0;
}

