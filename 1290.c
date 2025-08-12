#include <stdio.h>
#include <math.h>
int getDecimalValue(struct ListNode* head) {
    struct ListNode* temp;
    int res=0,ll=0,i;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        ll+=1;
    }
    while(head!=NULL){
        res+= pow(2,ll-1) * head->val;
        ll-=1;
        head=head->next;
    }
    return res;

}