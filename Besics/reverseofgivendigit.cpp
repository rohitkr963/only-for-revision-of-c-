#include<iostream>
using namespace std;
int main(){
    int number,count=0;
    cout<<"enter the value of n = ";
    cin>>number;

    while(number>0)
    {
         int digit=number%10;
            cout<<digit;
            number/=10;
        }
                

    }
