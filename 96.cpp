// Q96
// Given a singly linked list consisting of N nodes. 
// The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
// Note: Try not to use extra space. The nodes are arranged in a sorted way.

// SOURCE CODE
Node *removeDuplicates(Node *head){
    // your code goes here
    if(head == NULL)
        return head;
    
    struct Node *temp = head;
    struct Node *curr = head;
    int t = temp->data;
    temp = temp->next;
    while(temp != NULL && curr->next != NULL){
        if(temp->data == t){
            curr->next = curr->next->next;
            temp = temp->next;
        } else {
            t = temp->data;
            temp = temp->next;
            curr = curr->next;
        }
    }
    return head;
}