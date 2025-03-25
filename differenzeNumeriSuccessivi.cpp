#include <iostream>
using namespace std;

int n;
float cur_input,old_input,delta,deltaConst,deltaMax;

int main(){
    while(n<=0){cout<<"Inserire quante ripetizioni (numero naturale):\n",cin>>n;}
    while(cur_input<=old_input){cout<<"Inserire un numero:\n";cin>>cur_input;}
    for(n=n-1;n>0;n--){
        old_input=cur_input;
        do{cout<<"Inserire un numero più grande:\n";cin>>cur_input;}while(cur_input<=old_input);
        delta=cur_input-old_input;
        if(delta==deltaConst){ cout<<"La differenza è di: "<<deltaConst<<endl;}
        else{if(delta>deltaMax){deltaMax=delta;}cout<<"La differenza massima è di: "<<deltaMax<<endl;}
        deltaConst=delta;
    }
    return 0;
}
