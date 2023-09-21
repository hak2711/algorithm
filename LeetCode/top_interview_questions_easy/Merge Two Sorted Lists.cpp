//input: list1 = [1,2,4], list2 = [1,3,4]
//output: [1,1,2,3,4,4]

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged = NULL;
        ListNode *head = NULL;
        bool startNode = true;
        
        //add first node
        if(list1 && list2){
            if(list1->val <= list2->val){
                merged = list1;
                list1 = list1->next;
            }else{
                merged = list2;
                list2 = list2->next;
            }
        }
        else if(list1){
            merged = list1;
            list1 = list1->next;
        }else if(list2){
            merged = list2;
            list2 = list2->next;
        }
        else{
            return merged;
        }
        
        head = merged;
        
        while(true){
            //when both are not empty
            if(list1 && list2){
                //compare the elements
                if(list1->val <= list2->val){
                    merged->next = list1;
                    list1 = list1->next;
                }else{
                    merged->next = list2;
                    list2 = list2->next;
                }
            }
            //when list2 is empty
            else if(list1){
                //put all the elements in list1
               while(list1){
                    merged->next = list1;
                    list1= list1->next;
                    merged = merged->next;
                }
            }
            //when list1 is empty, do the same
            else if(list2){
                while(list2){
                    merged->next = list2;
                    list2 = list2->next;
                    merged = merged->next;
                }
            }
            //when both are empty
            else{
                break;
            }
            merged = merged->next;
        }
        return head;
    }
};
