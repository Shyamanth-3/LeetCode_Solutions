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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode *l3,*temp;
        l3=new ListNode();
        temp=l3;
        int v1,v2,carry=0;
        while(l1!=nullptr ||l2!=nullptr || carry!=0){
            if(l1!=nullptr) 
                v1=l1->val;
            else   
                v1=0;
            if(l2!=nullptr) 
                v2=l2->val;
            else 
                v2=0;
            l3->next=new ListNode((v1+v2+carry)%10);
            l3=l3->next;
            if((v1+v2+carry)>=10) 
                carry = 1;
            else 
                carry =0;
            if(l1!=nullptr) l1=l1->next;
            if(l2!=nullptr) l2=l2->next;
        }
        return temp->next;
    }
};