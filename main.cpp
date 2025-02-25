#include <iostream>
using namespace std;

int n;
float input,costante,deltaConst,deltaMax,delta;

int main(){
    while(n<=0){
        cout<<"Inserire quante ripetizioni (numero intero e positivo):\n",
        cin>>n;
    }

    cout<<"Inserire un numero:\n";
    cin>>costante;
    delta=costante;
    for(n=n;n>0;n--) {
        cout<<"Inserire un numero:\n";
        cin>>input;
        deltaConst=delta-input;
        cout<<"";
        if(deltaConst>deltaMax){
            deltaMax=deltaConst;
        }
    }

}