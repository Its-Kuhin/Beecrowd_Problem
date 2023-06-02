#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(x==1){
    printf("Total: R$ %.2lf\n",(double)(4.00*y));
}
else if(x==2){
    printf("Total: R$ %.2lf\n",(double)(4.50*y));
}
else if(x==3){
    printf("Total: R$ %.2lf\n",(double)(5.00*y));
}
else if(x==4){
    printf("Total: R$ %.2lf\n",(double)(2.00*y));
}
else if(x==5){
    printf("Total: R$ %.2lf\n",(double)(1.50*y));
}
return 0;
}

