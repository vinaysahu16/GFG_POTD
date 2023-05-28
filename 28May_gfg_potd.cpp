class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {       Node *temp;
           int N = 0 ;
           temp = head;
           while(temp!=NULL) {
               N++;
               temp = temp->next;
           }
           n = N-n;
           temp = head;
           while(n-- && temp!=NULL) {
               temp = temp->next;
           }
           if(temp==NULL) return -1 ;
            return temp->data;
    }
};
