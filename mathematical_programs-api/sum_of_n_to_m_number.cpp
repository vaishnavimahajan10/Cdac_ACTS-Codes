
#include <iostream>

using namespace std;
//sum of positive n to m number

int main()
{
    int n ,m,sum=0;
    cout<<"Enter range of two numbers : ";
    cin>>n>>m;
    
    for(n;n<=m;n++)
    {
        sum = sum+n;
    }
    cout<<"sum : "<<sum;
    return 0;
}
