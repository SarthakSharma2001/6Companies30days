// Serialize and Deserialize a Binary Tree 
class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> v;
    vector<int> serialize(Node *root) 
    {
        //Your code here
        if(root == NULL)
        {
            v.push_back(-1);
            return v;
        }
        v.push_back(root->data);
        serialize(root->left);
        serialize(root->right);
        return v;
        
    }
    
    //Function to deserialize a list and construct the tree.
    int ind = 0;
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(ind == A.size()||A[ind] == -1)
       {
           ind += 1;
           return NULL;
       }
       Node * root = new Node(A[ind]);
       ind += 1;
       root->left = deSerialize(A);
       root->right = deSerialize(A);
       return root;
    }

};