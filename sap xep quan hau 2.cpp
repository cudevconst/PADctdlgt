#include <bits/stdc++.h>
using namespace std;
bool board[8][8];
int score[8][8];
int res;

bool OK (int row, int col)
{
    for (int i=0; i<8; i++)
        if (board[row][i])
            return 0;
    for (int i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return 0;
    for (int i=row, j=col; i<8 && j>=0; i++, j--)
        if (board[i][j])
            return 0;
    return 1;
}

void cntS()
{
    int sum = 0;
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            if (board[i][j])
                sum += score[i][j];
    res = max (res, sum);
}

bool out (int col)
{
    if (col >= 8)
        cntS ();

    for (int i=0; i<8; i++){
        if (OK(i,col)){
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
        for (int i=0; i<8; i++)
            for (int j=0; j<8; j++)
                cin >> score[i][j];
        res = 0;
        memset (board, 0, sizeof(board));
        out (0);
        cout << res << endl;
    }
}
