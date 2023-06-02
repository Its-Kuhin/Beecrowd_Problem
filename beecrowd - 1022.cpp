#include<iostream>
using namespace std;
int main(){

int t,r1,r2,a,b;
cin>>t;

while(t--){
    int n1,n2,d1,d2;
    char op1,op2,op;
    cin>>n1>>op1>>d1>>op>>n2>>op2>>d2;
    if(op=='+'){
        r1=(n1*d2+n2*d1);
        r2=(d1*d2);
        cout<<r1<<"/"<<r2<<" = ";
        a=r1;
        b=r2;
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
           cout<<r1/a<<"/"<<r2/b<<endl;
    }
    if(op=='-'){
        r1=(n1*d2-n2*d1);
        r2=(d1*d2);
        cout<<r1<<"/"<<r2<<" = ";
        a=r1;
        b=r2;
        if(a<0){
            a=a*-1;
        }

        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
           cout<<r1/a<<"/"<<r2/b<<endl;
    }
    if(op=='*'){
        r1=(n1*n2);
        r2=(d1*d2);
        cout<<r1<<"/"<<r2<<" = ";
        a=r1;
        b=r2;
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
           cout<<r1/a<<"/"<<r2/b<<endl;
    }
    if(op=='/'){
        r1=(n1*d2);
        r2=(n2*d1);
        cout<<r1<<"/"<<r2<<" = ";
        a=r1;
        b=r2;
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
           cout<<r1/a<<"/"<<r2/b<<endl;
    }

}





return 0;
}
