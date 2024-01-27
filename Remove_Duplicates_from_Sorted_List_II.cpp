Intuition
The problem involves deleting duplicates from a sorted linked list. My initial thoughts are to use a two-pointer approach to traverse the list and remove duplicate nodes as we encounter them.

Approach
We use two pointers, t1 and t2, to traverse the list.
While t2 is not null, we compare the values of t1 and t2.
If the values are equal, we move t2 to the next distinct value.
If the values are not equal, we update the pointers to remove the duplicates.
We use a dummyNode to simplify handling the head of the list.
We free the memory of duplicate nodes as we encounter them.

Complexity
Time complexity:
Time complexity: O(n), where n is the number of nodes in the linked list. We traverse the list once.

Space complexity:
Space complexity: O(1), as we use a constant amount of extra space for pointers and variables.

Code
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode* currNode = dummyNode;

        while (currNode->next) {
            ListNode* t1 = currNode->next;
            ListNode* t2 = t1->next;

            // Skip duplicates
            while (t2 && t1->val == t2->val) {
                t2 = t2->next;
            }

            // No duplicates found
            if (t1->next == t2) {
                currNode = currNode->next;
            } else {
                // Remove duplicates
                currNode->next = t2;
                while (t1 != t2) {
                    ListNode* temp = t1;
                    t1 = t1->next;
                    delete temp;  // Free memory
                }
            }
        }

        ListNode* result = dummyNode->next;
        delete dummyNode;  // Free memory
        return result;
    }
};
