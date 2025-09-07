#include <bits/stdc++.h>
using namespace std;

class trieNode
{
    trieNode *left;
    trieNode *right;
};
void insert(int n, trieNode *head)
{
    trieNode *curr = head;
    for (int i = 31; i >= 0; i--)
    {
        int b = (n >> i) & 1;

        if (b == 0)
        {
            if (!curr->left)
            {
                curr->left = new trieNode();
            }
            curr = curr->left
        }
        else
        {
            if (!curr->right)
            {
                curr->right = new trieNode();
            }
            curr = curr->right;
        }
    }
}
// find max xor pair of array!!
int findMaxPair(trieNode *head, int *arr, int n)
{

    int max_xor = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        trieNode *curr = head;
        int curr_xor = 0;
        for (int j = 31; j >= 0; i--)
        {
            int b = (value >> j) & i;
            if (b == 0)
            {
                if (curr->right)
                {
                    curr_xor += pow(2, j);
                    curr = curr->right;
                }
                else
                {
                    curr = curr->left;
                }
            }
            else
            {
                if (curr->left)
                {
                    curr_xor += pow(2, j);
                    curr = curr->left;
                }
                else
                {
                    curr = curr->right
                }
            }
        }
    }
}

int main()
{

    return 0;
}