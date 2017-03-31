#include<iostream>
using namespace  std;
int main()
{
    int n,i=0,j=0;
    float a[7],b[7][7],p;
    cout<<"Input the number of to be entered: ";
    cin>>n;
    cout<<"Input values of a:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Input values of b:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>b[i][0];
    }
       for(j=1;j<n;j++)
        for(i=0;i<n-j;i++)
    {
        b[i][j]=(b[i+1][j-1]-b[i][j-1]);
    }
    cout<<"forward difference table is :"<<endl;
    cout<<"a\t"<<"b";
    for(i=1;i<n;i++)
        cout<<"\tb"<<i;
    cout<<"\n-------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
        for(j=0;j<(n-i);j++)
        {
            cout<<b[i][j];

            cout<<"\t";
        }
        cout<<"\n";
    }
    float k;
    cout<<"Enter the value of k for y(k): ";
    cin>>k;
    float diff;
    diff=a[1]-a[0];
    p=(k-1)/diff;
    float value;
    value=b[0][0]+p*b[0][1]+((p*(p-1)*b[0][2])/2)+((p*(p-1)*(p-2)*b[0][3])/6);
    cout<<value;
    return 0;
}


