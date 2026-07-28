#include <iostream>
#include <vector>

using namespace std;

class Node {
public: 
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

static int idx = -1;

Node* buildTree(vector<int> preorder)
{
	idx++;

	//Base Condition
	if(preorder[idx] == -1) {
		return NULL;
	}

	//Created root node
	Node* root = new Node(preorder[idx]);

	//Create left sub tree
	root->left = buildTree(preorder);

	//Create right sub tree
	root->right = buildTree(preorder);

	return root;
}

void preorder_traverse(Node* root) {
	//Base condition
	if(root==NULL) {
		return;
	}

	//preoerder so print first
	cout<<root->data<<" ";

	preorder_traverse(root->left);
	
	preorder_traverse(root->right);

}

bool identical_tree(Node* root1, Node* root2)
{
	if(root1 == NULL || root2 == NULL) {
		return root1 == root2;
	}	

	return root1->data == root2->data && identical_tree(root1->left, root2->left)
		&& identical_tree(root1->right, root2->right);
}

bool sub_tree(Node* root1, Node* root2)
{
	if(root1 == NULL || root2 == NULL)
		return root1 == root2;

	if(root1->data == root2->data && identical_tree(root1, root2)) {
		return true;
	}

	return identical_tree(root1->left, root2)
                || identical_tree(root1->right, root2);
}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1 , -1, 5, -1, -1};
	vector<int> preorder_sub = {3, 4, -1 , -1, 5, -1, -1};

	Node* root1 = buildTree(preorder);
	idx = -1;
	Node* root2 = buildTree(preorder_sub);

	preorder_traverse(root1);
	preorder_traverse(root2);

	if(sub_tree(root1, root2))
		cout<<"Subtree"<<endl;
	else
		cout<<"Not a subtree"<<endl;

	return 0;
}
