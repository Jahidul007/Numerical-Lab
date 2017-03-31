#include<iostream>
#include<cmath>
using namespace std;
float a,b,c,d,e;
float f (float x)
{
    float fx1;
    fx1=a*pow(x,3)+b*pow(x,2)+c*x+d;
    return (fx1);
}
main()
{
    float m,n,o;
    cin>>a>>b>>c>>d;
    cin>>e;

    while(f(m)*f(n)>0)
    {
        cin>>m>>n;
    }
    if(f(m)<0)
    {
        o=m;
        m=n;
        n=o;
    }
    o=(m*f(n)-n*f(m))/(f(n)-f(m));
    while(abs(f(o))>e)
    {
        cout<<f(o)<<endl;
        if(f(o)<0.0)
       {
           n=o;
       }
    else if(f(o)>0.0)
        {
            m=o;
        }
             o=(m*f(n)-n*f(m))/(f(n)-f(m));
    }
    cout<<"Root = "<<o;
}

