#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string";
    getline(cin,str);

    int len=str.length();

    cout<<"the length of string is :"<<len<<endl;
    return 0;

}