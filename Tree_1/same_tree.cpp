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

bool is_same_tree(Node* p, Node* q) 
{
	//Base Condition
	if(p == NULL || q == NULL)
		return p == q;

	bool left_same = is_same_tree(p->left, q->left);
	
	bool right_same = is_same_tree(p->right, q->right);

	return left_same && right_same && p->data == q->data;
}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1 , -1, 5, -1, -1};

	Node* root1 = buildTree(preorder);

	cout<<"root1 tree: "<<endl;
	preorder_traverse(root1);

	idx = -1;	

	Node* root2 = buildTree(preorder);

	cout<<"root2 tree: "<<endl;
	preorder_traverse(root2);

	if(is_same_tree(root1, root2)) {
		cout<<"Both trees are same"<<endl;
	} else {
		cout<<"Both trees are not same"<<endl;
		
	}

	return 0;
}
