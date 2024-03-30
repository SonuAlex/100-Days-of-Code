// Q95
// Given a linked list of N nodes. The task is to reverse this list.

// SOURCE CODE
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node *rev= NULL;
        struct Node *temp = head;
        struct Node *newNode;
        
        while(temp != NULL){
            newNode = new Node(temp->data);
            newNode->data = temp->data;
            newNode->next = rev;
            rev = newNode;
            temp = temp->next;
        }
        return rev;
    }
    
};