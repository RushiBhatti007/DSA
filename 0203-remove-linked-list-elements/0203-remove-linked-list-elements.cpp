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
    ListNode* removeElements(ListNode* head, int val) {
        
        if (head == nullptr) return nullptr;
        

        if(head->next == nullptr && head->val == val) return nullptr;

        while(head != nullptr && head->val == val){
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        ListNode* temp=head;
        ListNode* back=head;

        while(temp != nullptr){

            if(temp->val == val){
                back->next=temp->next;
                ListNode* del=temp;
                temp=temp->next;
                delete del;
                continue;
            }
            back=temp;
            temp=temp->next;
        }
        return head;
    }
};