#include<iostream>
#include<vector>
using namespace std;
vector<string> getstair(int n)
{
    if(n==0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    if(n<1)
    {
        vector<string> base;
        return base;
    }
    vector<string> r1= getstair(n-1);
    vector<string> r2= getstair(n-2);
    vector<string> r3= getstair(n-3);
    
    vector<string> mres;
    
    for(string s: r1)
    {
        mres.push_back("1"+s);
    }
    for(string s: r2)
    {
        mres.push_back("2"+s);
    }
    for(string s: r3)
    {
        mres.push_back("3"+s);
    }
    return mres;
}
int main()
{
    int n,c=0;
    cin>>n;
    vector<string> ans=getstair(n);
    cout<<"[";
    for(string s: ans)
    {
    if(c!=ans.size()-1)
    {
        cout<<s<<", ";
    }
    else
    {
        cout<<s;
    }
    c++;
    }
    cout<<"]";
}
