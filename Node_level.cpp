//https://www.codingninjas.com/studio/problems/node-level_920383

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode<int>*,int>> q;
    // q.push(make_pair(root,1));
    q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*,int> p=q.front();
        TreeNode<int>* node=p.first;
        int lvl=p.second;
        q.pop();

        if(node->val==searchedValue) return lvl;
        if(node->left) q.push({node->left,lvl+1});
        if(node->right) q.push({node->right,lvl+1});
    }
}