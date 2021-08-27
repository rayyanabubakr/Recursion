#include<iostream>
#include<string.h>
#include<vector>

using namespace std;


void floodfill(int**arr,int i,int j,int n,int m,string ans) {

    if(i<0 || j<0 || i>n-1 || j>m-1 || arr[i][j]==1 || arr[i][j]==2)  return;
    if(i==n-1&&j==m-1) 
    {   
        cout<<ans<<endl;   
        return;
    }
    arr[i][j] = 2;  
    floodfill(arr,i-1,j,n,m,ans+'t');
    floodfill(arr,i,j-1,n,m,ans+'l');
    floodfill(arr,i+1,j,n,m,ans+'d');
    floodfill(arr,i,j+1,n,m,ans+'r');
    arr[i][j] = 0;  
}
int main() {
    int n, m,i,j;
    cin >> n >> m;
    int** arr=new int*[n];
    for(i=0;i<n;i++)
    {
        arr[i]=new int[m];
    }

    for ( i = 0; i < n; i++)
        for ( j = 0; j < m; j++)
            cin >> arr[i][j];

    floodfill(arr,0,0,n,m,"");
}
