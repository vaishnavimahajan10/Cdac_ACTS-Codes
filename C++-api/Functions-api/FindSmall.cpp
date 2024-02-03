#include<iostream>
#include<climits>  

using namespace std; 


int findsmall(int arr[],int n)
{
	int small = INT_MAX;

  for(int i=0; i<n ;i++)
  {
     if(arr[i] <small)
      {
  	    small = arr[i];
      }
  }
   return small;
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

	int smallest_no = findsmall(arr,n);
	cout<<"Smallest num is : "<< smallest_no;

	return 0;
}