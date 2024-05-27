#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	int data;
	node *left, *right;
	node (int x){
		data = x;
		left = right = NULL;
	}
};
void makeNode(node* root, int u, int v, char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}
void insert(node* root, int u, int v, char c){
	if(root == NULL) return;
	if(root->data == u) makeNode(root, u, v, c);
	else{
		insert(root->left, u, v, c);
		insert(root->right, u, v, c);
	}
}
bool check(node* root){
	queue<node*> q;
	q.push(root);
	int bac = 0;
	while(!q.empty()){
		int s = q.size();
		if(s != pow(2,bac)) return false;
		for(int i = 0; i < s; i++){
			node* u = q.front(); 
			q.pop();
			if(u->left) q.push(u->left);
			if(u->right) q.push(u->right);
		}
		cout << endl;
		bac++;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		node *root = NULL;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int u, v;char c; cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u);
				makeNode(root, u, v, c);
			}
			else insert(root, u, v, c);
		}
		if(check(root)) cout << "Yes\n";
		else cout <<"No\n";
	}
}