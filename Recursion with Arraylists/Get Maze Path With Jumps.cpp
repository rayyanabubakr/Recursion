#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
vector<string> getMaze(int sr, int sc, int dr, int dc)
{
//   if (sr > dr || sc > dc) {
//     vector<string> base;
//     return base;
//   }
  if (sr == dr && sc == dc)
  {
    vector<string> base;
    base.push_back("");
    return base;
  }
  vector<string> ans;
  for (int i = 1; i <= dc - sc; i++)
  {
    vector<string> H = getMaze(sr, sc + i, dr, dc);
    for (string s : H)
    {
      ans.push_back("h" + to_string(i) + s);
    }

  }
  for (int i = 1; i <= dr - sr; i++)
  {
    vector<string> V = getMaze(sr + i, sc, dr, dc);
    for (string s : V)
    {
      ans.push_back("v" + to_string(i) + s);
    }

  }
  for (int i = 1; i <= dc - sc && i <= dr - sr; i++)
  {
    vector<string> D = getMaze(sr + i, sc + i, dr, dc);
    for (string s : D)
    {
      ans.push_back("d" + to_string(i) + s);
    }

  }
  return ans;
}
void display(vector<string>& arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) cout << ", ";
  }

  cout << "]" << endl;
}


int main() {
  int n, m;
  cin >> n >> m;
  vector<string> ans = getMaze(0, 0, n - 1, m - 1);
  display(ans);

  return 0;
}
