#include<iostream>
using namespace std;
int main(){

int n,c,m=0;
cin>>n;
    m=n/100;
    cout<<m<<" nota(s) de R$ 100,00"<<endl;
    c=n%100;

    m=c/50;
    cout<<m<<" nota(s) de R$ 50,00"<<endl;
    c=c%50;

    m=c/20;
    cout<<m<<" nota(s) de R$ 20,00"<<endl;
    c=c%20;

    m=c/10;
    cout<<m<<" nota(s) de R$ 10,00"<<endl;
    c=c%10;

    m=c/5;
    cout<<m<<" nota(s) de R$ 5,00"<<endl;
    c=c%5;

    m=c/2;
    cout<<m<<" nota(s) de R$ 2,00"<<endl;
    c=c%2;
    m=c/1;
    cout<<m<<" nota(s) de R$ 1,00"<<endl;
    c=c%1;


return 0;
}
