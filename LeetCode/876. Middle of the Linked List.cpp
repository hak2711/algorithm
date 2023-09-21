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

//Input: head = [1,2,3,4,5]
//Output: [3,4,5]

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* start = head;
        int len = 0;
        
        while(start!=NULL){
            len++;
            start = start->next;
        }
        
        ListNode* findMid = head;
        
        for(int i = 0; i<(len/2); i++){
            findMid = findMid->next;
        }
        
        return findMid;
    }
};
