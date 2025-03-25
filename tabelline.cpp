#include <iostream>
using namespace std;

int n,mult;
int main(){
    cout<<"Ciao, dammi un numero tra 1 e 10:\n";
    do{cin>>n;}while(n<=0||n>=10);
    for(int i=10;i>0;i--){mult+=n;cout<<mult<<endl;}
}