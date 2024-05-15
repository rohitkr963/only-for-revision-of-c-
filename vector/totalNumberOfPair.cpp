#include<iostream>
#include<vector>
using namespace std;

int main()
{
     int arr[]={1,2,3,4,5,6};
     int pairs=0;
     int totalnumber=7;

     for(int i=0; i<6; i++)
     {
        for(int j=i+1; j<6; j++)
        {
        if(arr[i]+arr[j]==totalnumber)
        {
            pairs++;
        }
     }
     }
     cout<<pairs;
}