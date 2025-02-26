#include <iostream>
using namespace std;

float input,sommaInput;
int totInput=0;

int main(){
    while(sommaInput<100){
        cout<<"Dai un numero: \n";
        cin>>input;
        sommaInput+=input;
        totInput++;
    }
    cout<<"La somma totale è di: "<<sommaInput<<endl<<"La quantità di numeri inseriti è: "<<totInput<<endl;
}
