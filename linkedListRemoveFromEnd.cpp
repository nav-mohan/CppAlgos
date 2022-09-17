#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(!head) return head;
    ListNode* curNode = head;
    int listSize = 1;
    while(curNode->next){
        listSize++;
        curNode = curNode->next;
    }
    std::cout << listSize << "\n";
    curNode=head;
    for (int i = 0; i < listSize-n-1; i++)
        curNode=curNode->next;
    curNode->next = curNode->next->next;
    return head;
}

int main(){
    ListNode L1 = ListNode(1);
    ListNode L2 = ListNode(2);
    ListNode L3 = ListNode(3);
    ListNode L4 = ListNode(4);
    ListNode L5 = ListNode(5);
    L1.next = &L2;
    L2.next = &L3;
    L3.next = &L4;
    L4.next = &L5;

    ListNode* head = removeNthFromEnd(&L1,2);
    while(head->next){
        std::cout << head->val << "\n";
        head = head->next;
    }
    std::cout << head->val << "\n";

    return 0;
}