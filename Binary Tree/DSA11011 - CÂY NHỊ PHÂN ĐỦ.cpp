#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = NULL, right = NULL;
	}
};
void makeNode(Node *root, int u, int v, char c){
	if(c == 'L') root->left = new Node(v);
	else root->right  = new Node(v);
}
void insert(Node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->data == u) makeNode(root, u, v, c);
	else{
		insert(root->left , u, v, c);
		insert(root->right , u, v, c);
	}
}
int check(Node *root){
	if(root->left == NULL && root->right == NULL) return 1;
	if(root->left == NULL && root-> right != NULL || root->left != NULL && root->right == NULL) return 0;
	
	return check(root->left) && check(root->right);
}
int main(){
	int t; cin >> t;
	while(t--){
		Node *root = NULL;
		int n; cin >> n;
		for(int i = 1; i <= n; i++){
			int u, v; char c; cin >> u >> v >> c;
			if(root == NULL){
				root = new Node(u);
				makeNode(root, u, v, c);
			}
			else insert(root, u, v, c);
		}
		cout << check(root) <<endl;
	}
}