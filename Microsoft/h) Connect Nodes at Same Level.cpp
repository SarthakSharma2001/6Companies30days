// Connect Nodes at Same Level
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
        if(!root)
            return;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            int k = q.size();
            for(int i = 0 ; i < k ; i++){
                Node* temp = q.front();
                q.pop();
                if(i == k - 1)
                    temp -> nextRight = NULL;
                else
                    temp -> nextRight = q.front();
                if(temp -> left)
                    q.push(temp -> left);
                if(temp -> right)
                    q.push(temp -> right);
            }
        }
    }    
      
};