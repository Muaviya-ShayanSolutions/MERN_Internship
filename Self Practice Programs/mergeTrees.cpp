#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1) return root2;
        if (!root2) return root1;
        TreeNode* merged = new TreeNode(root1->val + root2->val);
        merged->left = mergeTrees(root1->left, root2->left);
        merged->right = mergeTrees(root1->right, root2->right);
        return merged;
    }
void printTree(TreeNode* root){
	cout << root->val << ",";
	if (root->left) {
        cout << root->left->val << ",";
    } else {
        cout << "null,";
    }
    if (root->right) {
        cout << root->right->val << ",";
    } else {
        cout << "null,";
    }
    if (root->left && root->left->left) {
        cout << root->left->left->val << ",";
    } else {
        cout << "null,";
    }
    if (root->left && root->left->right) {
        cout << root->left->right->val << ",";
    } else {
        cout << "null,";
    }
    if (root->right && root->right->right) {
        cout << root->right->right->val ;
    } else {
        cout << "null";
    }
}
int main() {
    // Example usage
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(3);
    root1->right = new TreeNode(2);
    root1->left->left = new TreeNode(5);
     cout << "1st Tree : " ;
	printTree(root1);
    TreeNode* root2 = new TreeNode(2);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(3);
    root2->left->right = new TreeNode(4);
    root2->right->right = new TreeNode(7);
    cout <<endl<< "2nd Tree : " ;
    printTree(root2);

    //Solution s;
    TreeNode* merged = mergeTrees(root1, root2);
    cout <<endl<< "Merged Tree : " ;
    printTree(merged);    

    return 0;
}
