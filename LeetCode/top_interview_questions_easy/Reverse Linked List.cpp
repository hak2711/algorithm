//input: head = [1,2,3,4,5]
//output: [5,4,3,2,1]

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
    ListNode* reverseList(ListNode* head) {
        //when there is no node.
        if(!head)
            return head;
        
        ListNode *prev = head;
        ListNode *curr, *post;
        
        if(prev->next){
            curr = prev->next;
            //you have to make it null to prevent double link
            prev->next = NULL;
        }else{
            //when it is the only one node
            return prev;
        }
        
        while(true){
            if(curr->next){
                post = curr->next;
                curr->next = prev;
                prev = curr;
                curr = post;
            }else{
                //when it is the last node
                curr->next = prev;
                break;
            }
        }
        
        return curr;
    }
};
