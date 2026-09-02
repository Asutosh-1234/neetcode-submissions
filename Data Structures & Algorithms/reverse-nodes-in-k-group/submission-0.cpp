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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp != nullptr) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1)
            return head;

        ListNode* temp = head;

        for (int i = 0; i < k; i++) {
            if (temp == nullptr)
                return head;

            temp = temp->next;
        }

        ListNode* nextGroup = temp;

        ListNode* prev = nullptr;
        temp = head;

        for (int i = 0; i < k; i++) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        
        head->next = reverseKGroup(nextGroup, k);

        // prev is the new head of this group
        return prev;
    }
};

