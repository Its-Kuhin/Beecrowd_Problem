#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double a,b,c,a1,b1,c1;
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
    {
        a1=a;
        if(b>=c)
        {
            b1=b;
            c1=c;
        }
        if(c>=b)
        {
            b1=c;
            c1=b;
        }

    }
    if(b>=c&&b>=a)
    {
        a1=b;
        if(c>=a)
        {
            b1=c;
            c1=a;
        }
        if(a>=c)
        {
            b1=a;
            c1=c;
        }
    }
    if(c>=a&&c>=b)
    {
        a1=c;
        if(a>=b)
        {
            b1=a;
            c1=b;
        }
        if(b>=a)
        {
            b1=b;
            c1=a;
        }
    }
    if(a>0.0&&b>0.0&&c>0.0)
    {
        if(a1>=(b1+c1))
        {
            cout<<"NAO FORMA TRIANGULO"<<endl;
        }
        else if((a1*a1)==((b1*b1)+(c1*c1)))
        {
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        else if((a1*a1)>((b1*b1)+(c1*c1)))
        {
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        else if((a1*a1)<((b1*b1)+(c1*c1)))
        {
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(a1==b1&&a1==c1&&b1==c1)
        {
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        if(a1==b1 && c1!=a1 && c1!=b1)
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        if(a1==c1 && b1!=a1 && b1!=c1)
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
        if(c1==b1 && a1!=c1 && a1!=b1)
        {
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }

    }



    return 0;
}


