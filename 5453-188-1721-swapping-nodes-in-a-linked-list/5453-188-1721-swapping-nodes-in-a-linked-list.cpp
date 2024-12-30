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
    int getSize(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int n = getSize(head);
        if(head==NULL) return head;
        ListNode* temp = head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        ListNode* temp2=head;
        for(int i=1;i<=n-k;i++){
            temp2=temp2->next;
        }
        swap(temp->val,temp2->val);
        return head;     
    }
};