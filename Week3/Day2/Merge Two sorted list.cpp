class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *List1, ListNode *List2)
    {
        if (List1 == NULL)
            return List2;
        if (List2 == NULL)
            return List1;
        if (List1->val < List2->val)
        {
            List1->next = mergeTwoLists(List1->next, List2);
            return List1;
        }
        else
        {
            List2->next = mergeTwoLists(List1, List2->next);
            return List2;
        }
    }
};