#include<iostream>
using namespace std;
int main(){
int ah,bm,ch,dm,eh=0,fm=0;
cin>>ah>>bm>>ch>>dm;
eh=ch-ah;
if(eh<0){
    eh=24+(ch-ah);
}
fm=dm-bm;
if(fm<0){
    fm=60+(dm-bm);
    if(eh==0){
        eh=23;
    }
    else{
        eh--;
    }

}
if(ah==ch&&bm==dm){
    cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
}
else{
    cout<<"O JOGO DUROU "<<eh<<" HORA(S) E "<<fm<<" MINUTO(S)"<<endl;
}


return 0;
}
