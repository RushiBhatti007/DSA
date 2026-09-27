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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode * tail = head;

        int size=0;

        while(tail->next != NULL){
            size++;
            tail=tail->next;
        }

        size++;

        k%=size;

        if(k==0) return head;
        k=size-k-1;
        ListNode * temp = head;

        while(k--){
            temp=temp->next;
        }

        ListNode * newhead = temp->next;
        temp->next=NULL;
        tail->next = head;
        
        return newhead;
    }
};