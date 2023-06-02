#include<iostream>
using namespace std;
int main(){
int t,h,m,s;
cin>>t;
h=t/365;
m=(t%365)/30;
s=(t%365)%30;

cout<<h<<" ano(s)"<<endl;
cout<<m<<" mes(es)"<<endl;
cout<<s<<" dia(s)"<<endl;


return 0;
}

