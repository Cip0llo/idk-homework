#include <iostream>
using namespace std;

int n,m,somma;
int main(){
    cout<<"Ciao, dammi un numero tra 1 e 20:\n";
    do{cin>>n;}while(n<=0||n>=10);
    if(n%%2==0){for(int i=10;i>0;i--){
        m++;somma=n*m+somma;n*=m;
        cout<<n<<endl;
    }}
    else{for(int i=10;i>0;i--){
        n++;somma+=n;
        cout<<n<<endl;
    }}
    cout<<"la somma finale e:"<<somma;
}