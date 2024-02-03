#include<iostream>
#include<climits>
using namespace std;


int findmax(int nums[],int n)
{   int max=INT_MIN;
   for(int i=0;i<n;i++)
   {
   	if(nums[i]>max)
   		max=nums[i];
   }

return max;

}

int main()
{
  int nums[20];
  int n;
  cin>>n;
   for(int i=0;i<n;i++)
   {
   	cin>>nums[i];
   }

 int max =  findmax(nums,n);
cout<<"Maximum is :"<<max<<endl;

	return 0;
}