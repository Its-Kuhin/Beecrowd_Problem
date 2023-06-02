#include<iostream>
using namespace std;
int main(){
int t,n,m,r;
cin>>t;
for(int i=0;i<t;++i){
        r=0;
    cin>>n>>m;
    if(n==1){
        cout<<"Case "<<i+1<<": "<<n<<endl;
    }
    else{
        for(int i=2;i<=n;++i){
            r=(r+m)%i;
        }
        cout<<"Case "<<i+1<<": "<<r+1<<endl;
    }
}

return 0;
}
