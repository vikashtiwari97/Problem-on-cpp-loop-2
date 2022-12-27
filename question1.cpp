// Write a program to calculate the factorial of a number.

#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int factroial=1;
    for(int i=1;i<=n;i++)
    {
        factroial*=i;
    }
    cout<<"Factroial of that number is: "<<factroial<<endl;
    return 0;
}