#include<iostream>
#include<climits>  

using namespace std; 


int findsecondmax(int arr[],int n)
{
	int max= INT_MIN;
	int second_max=arr[0];

  for(int i=0; i<n ;i++)
  {
     if(arr[i]>max)
      {   second_max=max;
      	 max=arr[i];
  	
      }
      else
      {	if(arr[i]>second_max)
          second_max=arr[i];
      }
  }
   return second_max;
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

	int second_max= findsecondmax(arr,n);
	cout<<"Second max is : "<< second_max;

	return 0;
}