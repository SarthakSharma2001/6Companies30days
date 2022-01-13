// Count Number of SubTrees having given Sum
int helper(Node* root, int X, int& counter)
{
    if (!root)
        return 0;
    int sum_left = helper(root -> left , X , counter);
    int sum_right = helper(root -> right , X , counter);
    int my_sum = sum_left + sum_right + root -> data;
    if (my_sum == X)
        counter++;
    return my_sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int counter = 0;
	helper(root , X , counter);
	return counter;
}
