#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    // write your code here
    if(idx==n)
    {
        return;
    }
    else
    {
        display(arr,idx+1,n);
        cout<<arr[idx]<<"\n";
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}
