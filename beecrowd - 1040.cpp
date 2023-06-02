#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
double a,b,c,d,z,avg1;
cin>>a>>b>>c>>d;
double avg = ((a*2+b*3+c*4+d)/10);
printf("Media: %.1lf\n",avg);
if(avg>=7.0){
    cout<<"Aluno aprovado."<<endl;
}
if(avg<5.0){
    cout<<"Aluno reprovado."<<endl;
}
if(avg>=5.0&&avg<=6.9){
    cout<<"Aluno em exame."<<endl;
    cin>>z;
    printf("Nota do exame: %.1lf\n",z);

    avg1=((avg+z)/2);
    if(avg1>5.0){
        cout<<"Aluno aprovado."<<endl;
    }
    if(avg1<=4.9){
        cout<<"Aluno reprovado."<<endl;
    }
    printf("Media final: %.1lf\n",avg1);

    }

return 0;
}

