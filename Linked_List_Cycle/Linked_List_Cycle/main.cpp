//
//  main.cpp
//  Linked_List_Cycle
//
//  Created by JackLin on 2018/2/25.
//  Copyright © 2018年 JackLin. All rights reserved.
//

#include <iostream>
using namespace std;



struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
};


int InsertTail(ListNode* head,int value){
    ListNode *NewNode ,*p = head;
    NewNode = new ListNode(0);
    if(NewNode==NULL) return false;
    NewNode->val = value;
    NewNode->next = p->next;
    p->next = NewNode;
    return true;
}


bool hasCycle(ListNode *head){
    ListNode *first, *second;
    first=head;
    second=head->next;
    while(first==NULL && second==NULL){
        if(second==first) return true;
        first = first->next;
        second = second ->next;
        if(second==NULL) return false;
        second=second->next;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    ListNode *A = new ListNode(0);
    InsertTail(A,2);
    InsertTail(A,3);
    InsertTail(A,4);
    cout<<hasCycle(A)<<endl;
    return 0;
}
