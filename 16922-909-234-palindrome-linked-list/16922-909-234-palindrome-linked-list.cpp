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
    void insert_at_tail(ListNode* &head,ListNode* &tail,int val){
        ListNode* newNode = new ListNode(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void reverse(ListNode* &head,ListNode* temp){
        if(temp->next==NULL){
            head=temp;
            return;
        }
        reverse(head,temp->next);
        temp->next->next=temp;
        temp->next=NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* head2 = NULL;
        ListNode* tail2 = NULL;
        ListNode* temp = head;
        while(temp!=NULL){
            insert_at_tail(head2,tail2,temp->val);
            temp = temp->next;
        }
        reverse(head2,head2);
        temp=head;
        ListNode* temp2 = head2;
        while(temp!=NULL){
            if(temp->val!=temp2->val){
                return false;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};