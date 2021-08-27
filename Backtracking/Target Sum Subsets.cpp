#include<iostream>
#include<string.h>
using namespace std;

void printTargetSumSubsets(int arr[], int idx, string set, int sos, int tar, int n)
{

  if (sos> tar)
  {
    return;

  }
  if (idx == n)
  {
    if (sos == tar)
    {
      cout << set << ".
";

    }
    return;
  }

  printTargetSumSubsets(arr, idx + 1, set+to_string(arr[idx])+", ", sos+arr[idx], tar, n);
  printTargetSumSubsets(arr, idx + 1, set, sos, tar, n);
 

}

int main()
{
  int n, i;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int tar;
  cin >> tar;
  printTargetSumSubsets(arr, 0, "", 0, tar, n);
}
