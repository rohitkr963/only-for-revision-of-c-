#include<iostream>
using namespace std; 

int main()
{
    int arr[5]={3,5,8,2,9};
    int min=arr[0];

    for(int i=1; i<5; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min;
}