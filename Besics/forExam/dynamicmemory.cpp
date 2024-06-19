#include<iostream>
using namespace std;

int main()
{
    string name1;
    string name2;

    cout<<"enter first string";
    cin>>name1;
    cout<<"enter second string";
    cin>>name2;

    name1.append(name2);
    cout<<name1;
    return 0;
}
