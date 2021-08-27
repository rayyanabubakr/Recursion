#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==0)
    return 1;
    
    int smlans=power(x,n-1); //x^(n-1)
    return x*smlans; 
}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}
