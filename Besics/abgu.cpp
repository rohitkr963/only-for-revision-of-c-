#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[5];
    int sum=0;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]<35)
        {
             cout<<arr[i]<<" ";
        }
        
    }

}