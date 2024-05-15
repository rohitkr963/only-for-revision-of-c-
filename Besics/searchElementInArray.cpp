#include <iostream>
using namespace std;

int main() {
    int n,i;
    int arr[5]={5,8,3,9,6};
    int ans;

    cout<<"enter your element :)";
    cin>>n;

 
    for(i=0; i<5; i++)
    {
        if(arr[i]==n)
        {
            ans=i;
        }
    }
    cout<<"item found at location = "<<ans;
    return 0;
}