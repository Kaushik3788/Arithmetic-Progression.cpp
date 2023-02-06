#include<iostream>
using namespace std;
int Ap(int b)
{
    int a,c;
    a=3,c=7;
    
    int d=(a*b)+c;
    
    return d;
}
int main()
{
    int n,m,o;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;
    
    cout<<"Enter the value of M: "<<endl;
    cin>>m;
    
    cout<<"Enter the value of O: "<<endl;
    cin>>o;
    
    int d =Ap(n);
    cout<<"Your A.P. is: "<<d<<endl;
    
    int e = Ap(m);
    cout<<"Your A.P. is: "<<e<<endl;
     
    Ap(o);
    cout<<"Your A.P. is: "<<Ap(o)<<endl;
    
    return 0;
}
