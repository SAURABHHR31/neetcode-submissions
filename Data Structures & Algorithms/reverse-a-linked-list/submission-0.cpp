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
   ListNode* reverseList(ListNode* head) {
    
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *temp = head->next;
    ListNode *prev = head;
    ListNode *fast = head->next->next;

    head->next = NULL;

    while (fast != NULL) {
        temp->next = prev;
        prev = temp;
        temp = fast;
        fast = fast->next;
    }

    temp->next = prev;

    head = temp;

    return head;
}
};
