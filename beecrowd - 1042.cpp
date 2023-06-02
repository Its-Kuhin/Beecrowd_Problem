#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int x,y,z,x1,y1,z1;
cin>>x>>y>>z;
if(x>y&&x>z){
    x1=x;
    if(y>z){
        y1=y;
        z1=z;
    }
    if(z>y){
        y1=z;
        z1=y;
    }
}
if(y>x&&y>z){
    x1=y;
    if(x>z){
        y1=x;
        z1=z;
    }
    if(z>x){
        y1=z;
        z1=x;
    }
}
if(z>y&&z>x){
    x1=z;
    if(y>x){
        y1=y;
        z1=x;
    }
    if(x>y){
        y1=x;
        z1=y;
    }
}
cout<<z1<<endl<<y1<<endl<<x1<<endl<<endl;
cout<<x<<endl<<y<<endl<<z<<endl;

return 0;
}


