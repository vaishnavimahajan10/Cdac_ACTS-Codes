
#include <iostream>
using namespace std;
//prime numbers between two positive numbers

int main()
{
    int n ,m;
    cout<<"Enter range of two numbers : ";
    cin>>n>>m;
    
    for(n;n<=m;n++)
    {
        int f1=1;
        for(int i=2;i<n;i++)
        {
           if(n%i==0)
            {
              f1=0;
              break;
            }
        }
        if(f1==1)
        {
            cout<<n<<"\t";
        }
    }
   
    return 0;
}

