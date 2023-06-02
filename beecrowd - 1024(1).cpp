#include<iostream>
#include <cstring>
#include<string.h>
#include <cmath>
#include <stdio.h>
#include<cstdio>
using namespace std;
int main(){
int t;
char s[1000],s1[1001];
cin>>t;
 getchar();
while(t--){
       gets(s);
    int n = strlen(s);
  for(int i=0;i<n;++i){
    if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
       s[i]+=3;
    }
  }

int c=0;
  for(int j=n-1;j>=0;j--)

    {

        s1[c] = s[j];

        c++;

    }
 s1[n]='\0';
int  k=n/2;
 for (int i = k;i<n; i++){
s1[i]=s1[i]-1;
 }
 cout<<s1<<endl;

}

return 0;
}

