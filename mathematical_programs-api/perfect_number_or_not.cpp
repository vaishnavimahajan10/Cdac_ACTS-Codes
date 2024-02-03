
#include <iostream>
using namespace std;
//perfect number or not

int main()
{
    int num,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    
    if(sum==num)
    {
        cout<<"It is a perfect number";
    }
    else 
    {
        cout<<"It is not a perfect number";
    }
    return 0;
}

