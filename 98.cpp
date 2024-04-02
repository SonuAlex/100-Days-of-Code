// Q98
// Given a singly linked list of N nodes.
// The task is to find the middle of the linked list.

// SOURCE CODE
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head){
        // Your code here
        Node *temp = head;
        int c=0;
        while(temp != NULL){
            c++;
            temp = temp->next;
        }
        int mid;
        temp = head;
        for(int i=0; i<c/2; i++){
            temp = temp->next;
        }
        mid = temp->data;
        return mid;
    }
};