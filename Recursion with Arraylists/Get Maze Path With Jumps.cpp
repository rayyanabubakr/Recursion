#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
vector<string> getMaze(int sr, int sc, int dr, int dc)
{
    if(sr==dr && sc==dc)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> ans;
    if(sc+1<=dc)
    {
        int c=1,d=1;
        vector<string> H= getMaze(sr,sc+1,dr,dc);
        for(string s: H)
        {
            cout<<s<<"#"<<"\n";
            if(s=="h")
            {
                c++;
            }
            if(s=="v")
            {
                d++;
            }
        }
        ans.push_back("h"+to_string(c)+"v"+to_string(d));
    }
    if(sr+1<=dr)
    {
        int c=1,d=1;
        vector<string> V= getMaze(sr+1,sc,dr,dc);
        for(string s: V)
        {
            if(s=="v")
            {
                c++;
            }
            if(s=="h")
            {
                d++;
            }
        }
        ans.push_back("v"+to_string(c)+"h"+to_string(d));

    }
    if(sc+1<=dc && sr+1<=dr)
    {
        int c=1,d=1;
        vector<string> D= getMaze(sr+1,sc+1,dr,dc);
        for(string s: D)
        {
            c++;
        }
        ans.push_back("d"+to_string(c));
    }
    return ans;
}
void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMaze(0,0,n-1,m-1);
    display(ans);

    return 0;
}
