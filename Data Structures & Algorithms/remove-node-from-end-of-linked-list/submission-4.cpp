class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return head;

        ListNode *fast = head, *slow = head, *prev = NULL;

        while(n--) {
            fast = fast->next;
        }

        // n is equal to length
        if(fast == NULL) {
            ListNode* next = head->next;
            delete head;
            return next;
        }

        while(fast != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }

        prev->next = slow->next;
        delete slow;

        return head;
    }
};