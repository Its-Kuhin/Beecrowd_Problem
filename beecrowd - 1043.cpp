#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
double a,b,c,a1,b1,c1;
cin>>a>>b>>c;
a1=a+b;
b1=a+c;
c1=b+c;

if(a1>c&&b1>b&&c1>a){
   printf("Perimetro = %.1lf\n",(a+b+c));
}
else{
    printf("Area = %.1lf\n",((a+b)/2)*c);
}


return 0;
}



