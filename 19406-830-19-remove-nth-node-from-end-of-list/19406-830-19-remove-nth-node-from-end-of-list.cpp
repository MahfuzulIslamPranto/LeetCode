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
    ListNode* deleteAtHead(ListNode* &head,int n){
        if(head==NULL) return head;
        ListNode* deleteNode = head;
        head=head->next;
        delete deleteNode;
        return head;
    }
    ListNode* deleteNthPosition(ListNode* &head,int n){
        if(head==NULL) return head;
        ListNode* temp = head;
        for(int i=0;i<n-1;i++){
            if(temp->next==NULL) return head;
            temp=temp->next;
        }
        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        return head;
    }
    ListNode* deletetailPosition(ListNode* &head,ListNode* &tail,int n){
        if(head==NULL) return head;
        if(head->next==NULL) {
            delete head;
            head = NULL;
            return head;
        }
        ListNode* temp = head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        return head;
    }
    int getSize(ListNode* head){
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(getSize(head)==n) deleteAtHead(head,n);
        else if(n==1) deletetailPosition(head,head,n);
        else deleteNthPosition(head,getSize(head)-n);
        return head;
    }
};