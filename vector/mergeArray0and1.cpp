#include<iostream>
using namespace std;

int main()
{
 
 int arr[100];
 int largest =arr[0];

 int n;


 cout<<"enter the number";
 cin>>n;

 for(int i=0; i<n; i++)
 {
    cin>>arr[i];
 }

 for(int i=0; i<n; i++)
 {
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
 }
 cout<<largest;
 return 0;
    
}