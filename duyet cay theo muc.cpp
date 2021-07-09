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
void out(Node *root)
{
    if (root == NULL)  return;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->inf << " ";
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int nodes;
        cin >> nodes;
        Node *root1 = NULL;

        for (int i = 0; i < nodes; ++i)
        {
            cin >> pVal >> val >> side;
            if (i == 0)
                root1 = creNode(pVal);
            push(root1);
        }
        out(root1);
        cout<<endl;
    }
    return 0;
}
