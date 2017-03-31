#include<iostream>
using namespace  std;
int main()
{
    int n,i,j;
    double a[100],b[100][100];
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
        for(i=n-1;i>j-1;i--)
    {
        b[i][j]=b[i][j-1]-b[i-1][j-1];
    }
    cout<<"backward difference table is :"<<endl;
    cout<<"a\t"<<"b";
    for(i=1;i<n;i++)
        cout<<"\td"<<i;
    cout<<"\n-------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
        for(j=0;j<=i;j++)
        {
            cout<<b[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    double k;
    cout<<"Enter the value of k for y(k): ";
    cin>>k;
    double diff,p;
    diff=a[1]-a[0];
    p=(k-a[n-1])/diff;
    double value;
    value=b[3][0]+p*b[3][1]+((p*(p+1)*b[3][2])/2)+((p*(p+1)*(p+2)*b[3][3])/6);
    cout<<value;
    return 0;
}

