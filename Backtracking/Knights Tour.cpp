#include<iostream>
using namespace std;

void printKnightsTour(int** chess, int r, int c, int upcomingMove, int n)
{
  if (r < 0 || r > n - 1 || c < 0 || c > n - 1 || chess[r][c] != 0)
  {
    return;
  }
  if (upcomingMove == 25)
  {
    chess[r][c] = 25;
    for (int i = 0; i < n ; i++)
    {
      for (int j = 0; j < n ; j++)
      {
        cout << chess[i][j] << " ";
      }
      cout << "\n";
    }
    chess[r][c] = 0;
    cout << "\n";
    return;
  }
  chess[r][c] = upcomingMove;
  printKnightsTour(chess, r - 2, c + 1, upcomingMove + 1, n);
  printKnightsTour(chess, r - 1, c + 2, upcomingMove + 1, n);
  printKnightsTour(chess, r + 1, c + 2, upcomingMove + 1, n);
  printKnightsTour(chess, r + 2, c + 1, upcomingMove + 1, n);
  printKnightsTour(chess, r + 2, c - 1, upcomingMove + 1, n);
  printKnightsTour(chess, r + 1, c - 2, upcomingMove + 1, n);
  printKnightsTour(chess, r - 1, c - 2, upcomingMove + 1, n);
  printKnightsTour(chess, r - 2, c - 1, upcomingMove + 1, n);
  chess[r][c] = 0;
}
int main()
{
  int n, row, col;

  cin >> n >> row >> col;

  int** chess = new int* [n];

  for (int i = 0; i < n ; i++)
  {
    chess[i] = new int[n];
  }

  for (int i = 0; i < n ; i++)
  {
    for (int j = 0 ; j < n ; j++)
    {
      chess[i][j] = 0;
    }
  }

  printKnightsTour(chess, row, col, 1, n);
  return 0;

}
