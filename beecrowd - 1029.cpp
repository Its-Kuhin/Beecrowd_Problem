#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int count=-1;
int fibo(int num){
 count+=1;
if(num==0){
    return num;
}
else if(num==1){
    return num;
}
else{
     return(fibo(num-1)+ fibo(num-2));
}

}
int main()
{
    int t,n,r;
cin>>t;
    while(t--){

cin>>n;
if(n>=1&&n<=39){
 r=fibo(n);
}
cout<<"fib("<<n<<") = "<<count<<" calls = "<<r<<endl;
count=-1;
    }

    return 0;
}

