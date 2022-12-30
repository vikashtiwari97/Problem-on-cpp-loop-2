//Write a c++ program to print a triangle of a prime numbers upto given numbers of the line of the triangle
#include<iostream>

using namespace std;
int main(){
    int x1,x2,x3,number=3,banner=0;
    cout<<"Please enter the number of line: ";
    cin>>x1;
    int d= x1;
for(x2=1;x2<= x1; x2++)
{
for(int e=1;e<=d;e++)
{
cout<<" ";
}
if(x2==1)
{
cout<<"2\n";
}
else
{
for(x3=0; x3!= x2;)
{
banner=0;
for ( int k=2;k<number;k++)
{
if((number%k)==0)
banner=1;
}
if(banner==0)
{ x3++;
cout<<number<<" ";
}
number++;
}
cout<<"\n";
}
d--;
}
return 0;
}