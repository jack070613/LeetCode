//
//  main.cpp
//  Intersection_of_two_linked_lists
//
//  Created by JackLin on 2018/2/27.
//  Copyright © 2018年 JackLin. All rights reserved.
//

#include <iostream>

using namespace std;



struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
};

bool InsertTail(ListNode* head,int value){
    ListNode *NewNode= new ListNode(0);
    ListNode *p=head;
    if(NewNode==NULL) return false;
    NewNode->val=value;
    NewNode->next=p->next;
    p->next = NewNode;
    return true;
}

ListNode *getInsertNode(ListNode *headA,ListNode *headB){
    if(!headA || !headB) return NULL;
    ListNode *tailA=headA;
    ListNode *tailB=headB;
    int lenA=0,lenB=0;
    
    while(tailA->next){
        tailA = tailA->next;
        ++lenA;
    }
    while(tailB->next){
        tailB = tailB->next;
        ++lenB;
    }
    if(tailA!=tailB) return NULL;
    
    if(lenA>lenB){
        for(int i=0;i<lenA-lenB;++i){
            headA=headA->next;
        }
    }
    else{
        for(int i=0;i<lenB-lenA;++i){
            headB=headB->next;
        }
    }
    return headA;
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    ListNode *A=new ListNode(0);
    ListNode *B=new ListNode(0);
    ListNode *labelA = A;
    //ListNode *labelB = B;
    
        InsertTail(A,1);
        InsertTail(A,2);
        InsertTail(A,3);
    
        labelA=labelA->next;
        labelA=labelA->next;
    
        
    
        InsertTail(B,0);
        InsertTail(B,1);
        InsertTail(B,2);
        InsertTail(B,3);
    
    
        cout<<getInsertNode(A,B)->val<<endl;
    
    return 0;
    
}
