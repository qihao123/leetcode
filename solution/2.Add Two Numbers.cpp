/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int l1Len=0,l2Len=0;
    struct ListNode* tmpNode = l1;
    int carry = 0;//进位
    struct ListNode *head,*tail;
    struct ListNode *l1Tail,*l2Tail;
    int tmp;

    //calculate length of list
    while(tmpNode){
        l1Len++;
        l1Tail = tmpNode;
        tmpNode = tmpNode->next;
    }
    tmpNode = l2;
    while(tmpNode){
        l2Len++;
        l2Tail = tmpNode;
        tmpNode = tmpNode->next;
    }

    //keep l1 the longer list
    if(l1Len<l2Len)
    {
        tmpNode = l1;
        l1 = l2;
        l2 = tmpNode;
        tail = l2Tail;
    }else
        tail = l1Tail;

    head = l1;
    while(l1&&l2){
        tmp = l1->val+l2->val+carry;
        if(tmp>9)
            carry = 1;
        else
            carry = 0;

        l1->val = tmp%10;  
        l2 = l2->next;
        l1 = l1->next;
    }
    while(l1){
        tmp = l1->val+carry;
        if(tmp>9)
            carry = 1;
        else 
            carry = 0;

        l1->val = tmp%10;
        l1 = l1->next;
    }
    if(carry)
    {
        tmpNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmpNode->val = 1;
        tmpNode->next = NULL;
        tail->next = tmpNode;
    }
    return head;
}
/*  问题描述：
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8   */
