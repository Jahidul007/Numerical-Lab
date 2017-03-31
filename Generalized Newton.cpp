#include<iostream>
#include<cmath>
using namespace std;
float a,b,c,d,e,a1,b1,c1,d1;
float f (float x)
{

    return a*pow(x,3)+b*pow(x,2)+c*x+d;

}
float f1 (float x)
{

    return 3*a*pow(x,2)+b*2*pow(x,1)+c;

}
float f2 (float x)
{

    return 6*a*x+b*2;

}
main()
{
    float m,n,o,o1,e,o2;
    cin>>a>>b>>c>>d;
    cin>>e>>o;
    do
    {
    o1=o-2.0*f(o)/f1(o);
    o2=o-1.0*f1(o)/f2(o);
    if (f(o1)<f(o2))
    o=o1;
    else
    o=o2;

    }
    while(abs(f(o1))>e&&abs(f(o2))>e);
    cout<<"Root= "<<o<<endl;

}

