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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *current1 = list1;
        ListNode *current2 = list2;
        ListNode *saveresult;

        if (current1 == nullptr && current2 == nullptr)
        {
            return nullptr;
        }
        else if (current1 == nullptr)
        {
            saveresult = current2;
            current2 = current2->next;
        }
        else if (current2 == nullptr)
        {
            saveresult = current1;
            current1 = current1->next;
        }
        else if (current1->val <= current2->val)
        {
            saveresult = current1;
            current1 = current1->next;
        }
        else if (current2->val < current1->val)
        {
            saveresult = current2;
            current2 = current2->next;
        }

        ListNode *result = saveresult;

        while ((current1 != nullptr) || (current2 != nullptr))
        {
            if (current1 == nullptr)
            {
                result->next = current2;
                result = result->next;
                current2 = current2->next;
            }
            else if (current2 == nullptr)
            {
                result->next = current1;
                result = result->next;
                current1 = current1->next;
            }

            else if (current1->val <= current2->val)
            {
                result->next = current1;
                result = result->next;
                current1 = current1->next;
            }
            else
            {
                result->next = current2;
                result = result->next;
                current2 = current2->next;
            }
        }
        return saveresult;
    }
};
