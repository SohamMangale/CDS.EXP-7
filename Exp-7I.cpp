//Soham
//entc B1
//23070123084
//experiment 7I
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"Enter string: ";
    cin>>a;
    int i;
    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
