//Soham
//entc b1
//23070123084
//experiment 7E
#include<iostream>
using namespace std;
int main() {
int a1[5], i, j;
float sum=0, avg;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<":";
cin>>a1[i];
}
for(j=0;j<5;j++) {
sum = sum + a1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/5;
cout<<"Average = "<<avg;
}
