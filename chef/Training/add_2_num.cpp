#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        struct ListNode *p;
        struct ListNode *head;
        int carry = 0;
        while (l1 != NULL || l2 != NULL)
        {
            int sum = 0;
            if (l1 != NULL)
            {
                sum += l1->val;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
            }
            if (sum > 9)
            {
                carry = 1;
                sum = sum % 10;
            }
            else
            {
                carry = 0;
            }
            struct ListNode *temp = (ListNode *)malloc(sizeof(struct ListNode));
            temp->val = sum;
            temp->next = NULL;
        }
    }
};
