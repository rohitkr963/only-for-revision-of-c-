#include<iostream>
using namespace std;
int main(){
    int number,count=0;
    cout<<"enter the value of n = ";
    cin>>number;

    while(number>0)
    {
         number/=10;
            count++;
        }
                cout<<"this number is  "<<count<<endl;

    }
