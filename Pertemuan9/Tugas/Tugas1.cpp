#include <iostream>
using namespace std;

struct TreeNode {
	int value;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) : value(val), left(NULL), right(NULL) {}
};

void preOrder(TreeNode* node) {
	if (node == NULL)
		return;

	cout << node->value << " ";
	preOrder(node->left);
	preOrder(node->right);
}

void inOrder(TreeNode* node) {
	if (node == NULL)
		return;

	inOrder(node->left);
	cout << node->value << " ";
	inOrder(node->right);
}

void postOrder(TreeNode* node) {
	if (node == NULL)
		return;

	postOrder(node->left);
	postOrder(node->right);
	cout << node->value << " ";
}

int main() {

	TreeNode* root = new TreeNode(18);
	root->left = new TreeNode(30);
	root->right = new TreeNode(32);
	root->left->left = new TreeNode(29);
	root->left->right = new TreeNode(33);

	cout << "Pre-order traversal: ";
	preOrder(root);
	cout << endl;

	cout << "In-order traversal: ";
	inOrder(root);
	cout << endl;

	cout << "Post-order traversal: ";
	postOrder(root);
	cout << endl;

	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;

	return 0;
}

