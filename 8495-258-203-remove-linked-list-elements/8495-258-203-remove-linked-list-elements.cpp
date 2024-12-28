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
    // void deleteNode_any_position(ListNode* &head,int val){
    //     if(head==NULL) return;
    //     ListNode* temp = head;
        
    // }
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val){
            ListNode* temp = head;
            head= head->next;
            delete temp;
        }
        ListNode* temp = head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->val==val){
                ListNode* temp2 = temp->next;
                temp->next=temp->next->next;
                delete temp2;
            }else{
                temp = temp->next;
            }
            
        }
        return head;
    }
};