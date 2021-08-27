#include<iostream>
using namespace std;


void pzz(int n){
    // write your code here
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<n<<" ";
        pzz(n-1);
        cout<<n<<" ";
        pzz(n-1);
        cout<<n<<" ";
    }
}



int main(){
    int n; cin>>n;
    pzz(n);
}
