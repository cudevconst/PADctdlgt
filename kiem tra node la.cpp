#include <bits/stdc++.h>
using namespace std;

int pVal, val;
char side;

struct Node
{
    int inf;
    Node* left, * right;
};

Node* creNode(int val)
{
    Node* curr = new Node;
    curr->inf = val;
    curr->left = curr->right = NULL;
    return curr;
}

bool push(Node* where)
{
    if (where == NULL)
        return false;
    if (where->inf == pVal)
    {
        if (side == 'L')
            where->left = creNode(val);
        else
            where->right = creNode(val);
        return true;;
    }
    if (push(where->left))
        return true;
    return push(where->right);
}
bool checkUtil(Node *root, int level, int *leafLevel)
{

    if (root == NULL)  return true;

    if (root->left == NULL && root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level;
            return true;
        }
        return (level == *leafLevel);
    }
    return checkUtil(root->left, level+1, leafLevel) &&
           checkUtil(root->right, level+1, leafLevel);
}
bool check(Node *root)
{
   int level = 0, leafLevel = 0;
   return checkUtil(root, level, &leafLevel);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int nodes;
        cin >> nodes;
        Node* root1 = NULL;

        for (int i = 0; i < nodes; ++i)
        {
            cin >> pVal >> val >> side;
            if (i == 0)
                root1 = creNode(pVal);
            push(root1);
        }

        cout<<check(root1)<<endl;
    }
    return 0;
}
