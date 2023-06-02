#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double s;
    cin>>s;
    if(s>=0.00&&s<=400.00)
    {
        printf("Novo salario: %.2lf\n",s+((s*15)/100));
        printf("Reajuste ganho: %.2lf\n",(s*15)/100);
        cout<<"Em percentual: 15 %\n";
    }
    else if(s>=400.01&&s<=800.00)
    {
        printf("Novo salario: %.2lf\n",s+((s*12)/100));
        printf("Reajuste ganho: %.2lf\n",(s*12)/100);
        cout<<"Em percentual: 12 %\n";
    }
    else if(s>=800.01&&s<=1200.00)
    {
        printf("Novo salario: %.2lf\n",s+((s*10)/100));
        printf("Reajuste ganho: %.2lf\n",(s*10)/100);
        cout<<"Em percentual: 10 %\n";
    }
    else if(s>=1200.01&&s<=2000.00)
    {
        printf("Novo salario: %.2lf\n",s+((s*7)/100));
        printf("Reajuste ganho: %.2lf\n",(s*7)/100);
        cout<<"Em percentual: 7 %\n";
    }
    else
    {
        printf("Novo salario: %.2lf\n",s+((s*4)/100));
        printf("Reajuste ganho: %.2lf\n",(s*4)/100);
        cout<<"Em percentual: 4 %\n";
    }





    return 0;
}

