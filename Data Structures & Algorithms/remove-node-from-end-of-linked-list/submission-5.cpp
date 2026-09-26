class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        for (ListNode* cur = head; cur != nullptr; cur = cur->next) {
            size++;
        }

        int index = size - n;
        if (index == 0) {
            ListNode* newHead = head->next;
            return newHead;
        }

        ListNode* prev = head;
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
        }

        ListNode* target = prev->next;
        prev->next = target->next;

        return head;
    }
};