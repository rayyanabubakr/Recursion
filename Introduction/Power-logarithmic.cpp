#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    if(n==0)
    return 1;
    
    int pxnb2=powerLogarithmic(x,n/2);
    
    if(n%2==0){
        return pxnb2*pxnb2;
    }
    else{
        return x*pxnb2*pxnb2;
    }
    
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}
