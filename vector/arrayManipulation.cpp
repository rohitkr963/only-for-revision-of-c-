#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,1,2,3,5,3};
    int unique=4;

    for(int i=0; i<7; i++)
    {
        for(int j=i+1; j<7; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
            }
        }
    }

    for(int i=0; i<7; i++)
    {
        if(arr[i]>0)
        {
            cout<<arr[i]<<endl;
        }
    }
    
}