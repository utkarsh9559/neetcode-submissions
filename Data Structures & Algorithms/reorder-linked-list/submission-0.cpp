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
    void reorderList(ListNode* head) {
        vector<int>ans;
        ListNode* temp1 = head;
        while(temp1 != NULL){
           ans.push_back(temp1->val);
           temp1 = temp1->next;
        }

        int i=0;
        int n = ans.size();
        int j=n-1;
        vector<int>res;
        while(i<=j){
          res.push_back(ans[i]);
          i++;

          res.push_back(ans[j]);
          j--;
        }

        if (n % 2 != 0) {
            res.pop_back();
        }
        
        for (int el : res) {
            head->val = el;
            head = head->next;
        }
       
    }
};
