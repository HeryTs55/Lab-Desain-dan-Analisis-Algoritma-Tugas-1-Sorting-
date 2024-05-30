#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class tree {
public:
    node* root;

    tree() {
        root = NULL;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    node* insert(node* root, int value) {
        if (root == NULL) {
            root = new node(value);
        } else if (value <= root->data) {
            root->left = insert(root->left, value);
        } else {
            root->right = insert(root->right, value);
        }
        return root;
    }

    void inorder() {
        inorder(root);
    }

    void inorder(node* root) {
        if (root == NULL) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
};

int main() {
    tree Tree;

    Tree.insert(10);
    Tree.insert(5);
    Tree.insert(15);

    Tree.inorder();

    return 0;
}
