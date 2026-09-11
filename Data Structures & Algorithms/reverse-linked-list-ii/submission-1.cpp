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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*temp = head;
        int count1=1;
        while(count1 != left){
            temp = temp->next;
            count1++;
        }
            ListNode* curr = temp; 
            ListNode* prev = head;
            if(left==1){
                prev = NULL;
            }
            else{
                while(prev->next != temp){
                    prev = prev->next;
                }
            }
            ListNode* before = prev;
           
            while(curr != NULL && count1 <= right){
                   ListNode* next = curr->next;
                   curr->next = prev;
                   prev = curr;
                   curr = next;
                   count1++;
            }
            temp->next = curr;
            if(left==1){
                 head = prev;
            }
            else{
                before->next = prev;
            }
           

            return head;
    }
};