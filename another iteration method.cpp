#include<iostream>
#include<cmath>
using namespace std;

float a,b,c,d,e,accuracy,m,n;
float f (float x)
{
    float fx1;
    fx1=a*pow(x,3)+b*pow(x,2)+c*x+d;
    return (fx1);
}
float f1(float x)
{
    float fx2;
    fx2=pow((2*x+5),.3333);
    return (fx2);
}float f2(float x)
{
    float fx3;
    fx3=.6667*pow((2*x+5),-.6666);
    return (fx3);
}
main()
{
    float m,n,o,p,y,c;
    cout<<"A simple input: "<<endl;
    cin>>a>>b>>c>>d;
    ///cin>>accuracy;
     do
    {
        cin>>m>>n;
    }
    while(f(m)*f(n)>0.0);
    float a=(f2(m));
    float b=(f2(n));
     cout<<"a= "<<a<<"b= "<<b<<endl;

  if(f2(m)==0||f(n)==0)
    {
        cout<<"wrong"<<endl;
    }
    else
          if(a>b)
            c=abs(a);
        else
            c=abs(b);
            cout<<"c= "<<c<<endl;
        y=((1-c)/c)*.0001;
        o=(m+n)/2.0;
        do
        {
            p=o;
            o=f1(p);
            cout<<"o= "<<o<<"p= "<<p<<endl;
        }
        while(abs(o-p)>=y);
        cout<<"Root: "<<o;

}



