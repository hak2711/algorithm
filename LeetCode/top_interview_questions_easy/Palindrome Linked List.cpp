//input: head = [1,2,2,1]
//output: true

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
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        
        while(head){
            nums.push_back(head->val);
            head = head->next;
        }
        
        int len = nums.size();
        
        for(int i = 0; i<(len/2); i++){
            if(nums[i]!=nums[len-1-i])
                return false;
        }
        return true;
    }
};
