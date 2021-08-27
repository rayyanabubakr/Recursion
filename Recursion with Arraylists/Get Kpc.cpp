#include<iostream>
#include <vector>
using namespace std;
string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
vector<string> getKpc(string s)
{
    if(s=="")
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch=s[0];
    string ros= s.substr(1);
 
    vector<string> rres= getKpc(ros);

    vector<string> mres;
    ch=(int)ch-48;
    string code =codes[ch];
    for(int i=0;i<code.length();i++)
    {
        char chcode= code[i];
      
        for(int j=0;j<rres.size();j++)
        {
            mres.push_back(chcode+rres[j]);
        }
    }
    return mres;
}
int main()
{
    
  vector<string> ans;
  int cnt = 0;
  string s;
  cin >> s;
  ans = getKpc(s);
  cout << "[";
  for (int i=0;i<ans.size();i++)
  {
    if (cnt != ans.size() - 1)
      cout << ans[i] << ", ";
    else
      cout << ans[i];
    cnt++;
  }
  cout << ']';
}

