//input: head = [1,2,3,4,5], n = 2
//output: [1,2,3,5]

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        stack<ListNode*> nodes;
        ListNode *node = head;
        
        while(true){
            nodes.push(node);
            
            if(node->next)
                node = node->next;
            else
                break;
        }
        
        for(int i = 0; i<(n-1); i++){
            nodes.pop();
        }
        
        ListNode *target = nodes.top();
        nodes.pop();
        
        if(target->next && !nodes.empty()){
            ListNode *prev = nodes.top();
            prev->next = target->next;
        }
        else if(!target->next && !nodes.empty()){
            ListNode *prev = nodes.top();
            prev->next = NULL;
        }
        else if(target->next){
            head = target->next;
        }
        else
            head = NULL;
        
        return head;
    }
};
