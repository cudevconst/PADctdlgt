
#include <bits/stdc++.h>

using namespace std;

int pVal, val;
char side;

struct Node
{
    int inf;
    Node *left, *right;
};

Node *creNode(int val)
{
    Node *curr = new Node;
    curr->inf = val;
    curr->left = curr->right = NULL;
    return curr;
}

bool push(Node *where)
{
    if (where == NULL)
        return false;
    if (where->inf == pVal)
    {
        if (side == 'L')
            where->left = creNode(val);
        else
            where->right = creNode(val);
        return true;
        ;
    }
    if (push(where->left))
        return true;
    return push(where->right);
}
int findADepth(Node *node)
{
    int d = 0;
    while (node != NULL)
    {
        d++;
        node = node->left;
    }
    return d;
}
bool perRec(Node *root, int d, int lev = 0)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return (d == lev + 1);
    if (root->left == NULL || root->right == NULL)
        return false;
    return perRec(root->left, d, lev + 1) &&
           perRec(root->right, d, lev + 1);
}
bool isPerfect(Node *root)
{
    int d = findADepth(root);
    return perRec(root, d);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        Node *root1 = NULL;

        for (int i = 0; i < n; ++i)
        {
            cin >> pVal >> val >> side;
            if (i == 0)
                root1 = creNode(pVal);
            push(root1);
        }
        if (isPerfect(root1))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
