#include<iostream>
using namespace std;
int main(){
    int number;
    int sum=0;
    cout<<"enter the value of n = ";
    cin>>number;

    while(number>0)
    {
         int digit=number%10;
         sum=sum+digit;
         number/=10;
            
        }
        cout<<sum;
            
    }
