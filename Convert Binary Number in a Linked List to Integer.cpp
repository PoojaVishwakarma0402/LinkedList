Problem Link:https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {

        vector <int> ans;
        ListNode *p=head;
        while(p!=NULL){
            ans.push_back(p->val);
            p=p->next;
        }
        int num=0, j=0;
        for(int i=ans.size()-1;i>=0;i--){
            num+=(ans[i]*pow(2,j));
            j++;
        }     

        return num;
    }
};
