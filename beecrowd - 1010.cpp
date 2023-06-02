#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

int c,n,c1,n1;
double p,p1,t,t1;
cin>>c>>n;
cin>>p;
cin>>c1>>n1;
cin>>p1;
t=(double)n*p;
t1=(double)n1*p1;
printf("VALOR A PAGAR: R$ %.2lf\n",t+t1);





return 0;
}
