#include <iostream>
using namespace std;

int n,compresi;
float h,k,input;

int main(){
    cout<<"Inserire ripetizione:\n";
    cin>>n;
    cout<<"Inserire un numero:\n";
    cin>>h;
    while(k<=0){
        cout<<"Inserire un numero più grande:\n";
        cin>>k;
    }
    for(;n>0;n--){
        cout<<"Inserire un numero:\n";
        cin>>input;
        if((input>=h)&&(input<=k)){
            compresi++;
        }
    }
    cout<<"I numeri inseriti compresi tra i primi due numeri scelti sono stati: "<<compresi<<endl;
}