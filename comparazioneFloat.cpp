#include <iostream>
using namespace std;

float k,comparazione;
int n,maggiore,minore,uguale;

int main(){
    cout<<"Inserire valore di comparazione:\n";
    cin>>k;
    while(n<=0){
        cout<<"Inserire quante ripetizioni (numero intero e positivo):\n",
        cin>>n;
    }
    for(n=n; n>0; n--) {
        cout<<"Inserire un numero da comparare:\n";
        cin>>comparazione;
        if(comparazione>k){
            maggiore++;
            cout<<"Il valore comparato è maggiore\n";
        }else if(comparazione<k){
            minore++;
            cout<<"Il valore comparato è minore\n";
        }else{
            uguale++;
            cout<<"Il valore comparato è uguale\n";
        }
    }
    cout<<"Fine!\n";
    cout<<"Valori comparati maggiori: "<<maggiore<<endl;
    cout<<"Valori comparati minori: "<<minore<<endl;
    cout<<"Valori comparati uguali: "<<uguale<<endl;
    return 0;
}
