class Solution {
public:
    ListNode * swap(ListNode * head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode * curr=head;
        ListNode * Next=head->next;
        
        head=head->next->next;
        Next->next=curr;
        curr->next=swap(head);
        return Next;
    }
    ListNode* swapPairs(ListNode* head) {
        return swap(head);
    }
};