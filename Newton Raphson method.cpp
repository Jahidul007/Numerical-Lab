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
main()
{
    float m,n,o;
    cin>>a>>b>>c>>d;
    cin>>e>>o;

    while(abs(f(o))>e)
    {
        o=o-f(o)/f1(o);
        //cout<<o<<endl;
    }
     cout<<"Root = "<<o;
}
