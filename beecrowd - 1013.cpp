#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

int a,b,c,tmp;
cin>>a>>b>>c;
 tmp = a;
if(a < b || a < c){
             if(b < c){
             tmp = c;
             }
         else{
               tmp = b;
            }
        }
 cout<<tmp<<" eh o maior"<<endl;



return 0;
}

