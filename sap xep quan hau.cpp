#include <bits/stdc++.h>
using namespace std;
int res = 0;
int n;
bool board[11][11];
bool OK (int row, int col)
{
    for (int i=0; i<n; i++)
        if (board[row][i])
            return false;

    for (int i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return 0;

    for (int i=row, j=col; i<n && j>=0; i++, j--)
        if (board[i][j])
            return 0;
    return 1;
}

bool out ( int col)
{
    if (col >= n)
        res++;
    for (int i=0; i<n; i++){
        if (OK (i, col)){

            board[i][col] = 1;

            if (out(col+1))
                return 1;

            board[i][col] = 0;
        }
    }
    return 0;
}

int main()
{
    int t; cin>>t;
    while (t--){
        res = 0;
        cin>>n;
        memset (board, 0, sizeof(board));
        out (0);
        cout << res << endl;
    }
}
