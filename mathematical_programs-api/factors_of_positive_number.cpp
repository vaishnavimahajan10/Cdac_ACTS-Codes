
#include <iostream>

using namespace std;
//factors of positive n number

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
          cout<<i<<"\t";
    }
    return 0;
}
