#include<iostream>
#include<cmath>
using namespace std;
float a,b,c,d,accuracy;
float f (float x)
{
    float fx1;
    fx1=a*pow(x,3)+b*pow(x,2)+c*x+d;
    return (fx1);
}
main()
{
    float m,n,o;
    cout<<"A simple input: "<<endl;
    cin>>a>>b>>c>>d;
    cin>>accuracy;
    do
    {
        cin>>m>>n;
    }
    while(f(m)*f(n)>0.0);
    o=(m+n)/2.0;
    while(abs(f(o))>accuracy)
    {
        if(f(m)*f(o)<0.0)
       {
           n=o;
       }
       else if(f(m)*f(o)>0.0)
        {
            m=o;
        }
         o=(m+n)/2.0;
    }
    cout<<"A simple output: "<<endl;
    cout<<"Root = "<<o<<endl;
}

