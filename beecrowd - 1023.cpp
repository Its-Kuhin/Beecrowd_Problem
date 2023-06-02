#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
int t,c=1,x,y,z[1000]={0},n,sum=0,sum1=0,i,j;
double avg,ip,ap,ap1;

bool bo = false;
while(cin>>t&&t){
 if(bo){
        printf("\n");
 }
  bo = true;
  sum=0;
  sum1=0;
 memset(z, 0, sizeof z);
for( i=0;i<t;++i){
        cin>>x>>y;
        sum+=x;
        sum1+=y;
    n=y/x;
    z[n]=z[n]+x;
}

avg=(double)sum1/sum;
cout<<"Cidade# "<<c<<":"<<endl;
c++;
 for(i = 0,j = 0; i < 300; i++)
  {
            if(z[i] > 0){
                if(j != 0)
                    printf(" ");
                printf("%d-%d", z[i], i);
                j++;
            }
        }
        cout<<endl;
ap=modf(avg,&ip);
    ap=(int)(modf(avg,&ip)*100);
 if(ap < 10) printf("Consumo medio: %d.0%d m3.\n", (int)ip, (int)ap);
  else printf("Consumo medio: %d.%d m3.\n", (int)ip, (int)ap);




avg=0.0;

}











return 0;
}
