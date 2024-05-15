#include<iostream>
using namespace std;
int main()
{
   int arr[100],n,i;
   cout<<"enter your five element :)";
   cin>>n;

   cout<<"enter the array element";
   for(int i=0; i<=n; i++)
   {
    cin>>arr[i];
   }

   int max=arr[0];
   for(int i=0; i<5; i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
    }
   }
   cout<<"maximum value is = "<<max<<endl;
    return 0;
}