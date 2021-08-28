#include<iostream>
using namespace std;

bool isSafe(int** chess, int row, int col, int n)
{
  for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
    if (chess[i][j] == 1) {
      return false;
    }
  }

  for (int i = row - 1, j = col; i >= 0; i--) {
    if (chess[i][j] == 1) {
      return false;
    }
  }

  for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
    if (chess[i][j] == 1) {
      return false;
    }
  }

  for (int i = row, j = col - 1; j >= 0; j--) {
    if (chess[i][j] == 1) {
      return false;
    }
  }

  return true;
}

void printNQueens(int** chess, string qsf, int row, int n) {

  if (row == n)
  {
    cout << qsf + ".\n";
    return;
  }
  for (int col = 0; col < n; col++)
  {
    if (chess[row][col] == 0  && (isSafe(chess, row, col, n) == true))
    {
      chess[row][col] = 1;
      printNQueens(chess, qsf + to_string(row) + "-" + to_string(col) + ", ", row + 1, n);
      chess[row][col] = 0;
    }
  }
}
int main()
{
  int n;
  cin >> n;
  int** arr = new int* [n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[n];
  }
  for (int i = 0; i < n ; i++)
  {
    for (int j = 0; j < n ; j++)
    {
      arr[i][j] = 0;
    }
  }
  printNQueens(arr, "", 0, n);
  return 0;
}
