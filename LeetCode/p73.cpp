//Next greater node in linkedList

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        vector<int> ans;
        vector<int> v;

        ListNode *temp = head;

        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int n = v.size();

        for (int i = 0; i < n; i++)
        {
            int maxi = 0;
            bool check = true;
            for (int j = i; j < n; j++)
            {
                if (v[j] > v[i])
                {
                    ans.push_back(v[j]);
                    check = false;
                    break;
                }
            }
            if (check == true)
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};