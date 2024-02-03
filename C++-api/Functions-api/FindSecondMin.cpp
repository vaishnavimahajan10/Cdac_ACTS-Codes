#include<iostream>
#include<climits>  

using namespace std; 


int findsecondmin(int arr[],int n)
{
    int min= INT_MAX;
    int second_min=arr[0];

  for(int i=0; i<n ;i++)
  {
     if(arr[i]<min)
      {   second_min=min;
         min=arr[i];
    
      }
      else
      { if(arr[i]<second_min)
          second_min=arr[i];
      }
  }
   return second_min;
}

int main()
{   
    
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<" Enter the elements of an array: ";

    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int second_min= findsecondmin(arr,n);
    cout<<"Second min is : "<< second_min;

    return 0;
}