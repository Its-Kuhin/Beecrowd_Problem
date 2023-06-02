#include<iostream>
#include<stdio.h>
#include <cstring>
using namespace std;
int main(){

int t;
int sum,size;
string n;
cin>>t;
 for(int i = 0; i < t; i++){
        cin>>n;
        sum=0;
        int j=0;
 size = n.length();

   for (int j = 0; j < size; ++j){
if(n[j] == '1') sum += 2;
if(n[j] == '2') sum += 5;
if(n[j] == '3') sum += 5;
if(n[j] == '4') sum += 4;
if(n[j] == '5') sum += 5;
if(n[j] == '6') sum += 6;
if(n[j] == '7') sum += 3;
if(n[j] == '8') sum += 7;
if(n[j] == '9') sum += 6;
if(n[j] == '0') sum += 6;
    }

    cout<<sum<<" leds"<<endl;

}


return 0;
}
