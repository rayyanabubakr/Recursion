#include <iostream>
using namespace std;
int max(int arr[], int idx, int n){
    int m;
    if(idx==n-1)
    {
        return arr[idx];
    }
    else
    {
        m=max(arr,idx+1,n);
        if(m>arr[idx])
        {
            return m;
        }
        else
        {
         return arr[idx];   
        }
    }
    
    }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
