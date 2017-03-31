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
    float m,n,root;
    cout<<"Simple input: "<<endl;
    cin>>a>>b>>c>>d;
    cin>>accuracy;
    cout<<"Please enter two initial value:"<<endl;
    do
    {
        cin>>m>>n;
    }
    while(f(m)*f(n)>0.0);
    root=(m*f(n)-n*f(m))/(f(n)-f(m));
    while(abs(f(root))>accuracy)
    {
        if(f(m)*f(root)<0.0)
       {
           n=root;
       }
       else if(f(m)*f(root)>0.0)
       {
           m=root;
       }
         root=(m*f(n)-n*f(m))/(f(n)-f(m));
    }
    cout<<"Simple output: "<<endl;
    cout<<"Root = "<<root;
}


