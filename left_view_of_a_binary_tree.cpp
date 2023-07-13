//https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    bool frq[3005]={false};
    queue<pair<TreeNode<int>*,int>> q;
    if(root) q.push({root,1});
    vector<int> v;
    while(!q.empty()){
        pair<TreeNode<int>*,int> p=q.front();
        q.pop();
        TreeNode<int>* node = p.first;
        int lvl = p.second;

        if(frq[lvl]==false){
            v.push_back(node->data);
            frq[lvl]=true;
        }

        if(node->left) q.push({node->left,lvl+1});
        if(node->right) q.push({node->right,lvl+1});
    }
    return v;
}