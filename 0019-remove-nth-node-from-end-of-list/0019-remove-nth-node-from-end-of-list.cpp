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
        int end=0;
        ListNode* temp=head;
        while(temp) {end++;temp=temp->next;}
        if(end==n) return head->next;
        int del=end-n-1;
        temp=head;
        while(del>0){
            temp=temp->next;
            del--;
        }
        temp->next=temp->next->next;
        return head;
    }
};