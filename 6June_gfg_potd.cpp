class Solution
{
    public:
    void findPreSuc(Node* head, Node*& pre, Node*& suc, int key)
    {
        //predecessor
        Node* temp = head;
        while(temp)
        {
           if(temp -> key < key){
               if(!pre || pre -> key < temp -> key)
               pre = temp;
               temp = temp -> right;
           } 
           else{
               temp = temp -> left;
           }
        }

        //successor
        temp = head;
        while(temp)
        {
            if(temp -> key > key){
                if(!suc || suc -> key > temp -> key)
                suc = temp;
                temp = temp -> left;
            }
            else{
                temp = temp -> right;
            }
        }
    }
};
