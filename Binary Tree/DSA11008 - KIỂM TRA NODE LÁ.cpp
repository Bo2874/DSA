#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	int val;
	node *left;
	node *right;
	node(int x){
		val = x; // gán giá trị cho node
		left = right = NULL; // mỗi lần tạo node mới thì sẽ gán luôn left, right của node = NULL
	}	
};
void makeRoot(node *root, int u, int v, char c){
	if(c == 'L') root->left = new node(v); // đưa vào giá trị của node 
	else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return; // đi đến lá cuối cùng r mà kh thấy val = u thì dừng chạy ở lá này
	if(root->val == u){
		makeRoot(root, u, v, c); // tìm thấy thì tạo node
	}
	else{// đệ quy đến khi nào tìm được val = u hoặc bằng NULL thì dừng
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}
int pre = 0, ok = 1;
void check(node *root, int cnt){
	if(root->left == NULL && root->right == NULL){
		if(pre == cnt || pre == 0){
			pre = cnt;
		}
		else {
			ok = 0;
			return;
		}
	}
	else{
		if(root->left != NULL) check(root->left, cnt+1);
		if(root->right != NULL) check(root->right, cnt+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		pre = 0, ok = 1;
		node *root = NULL;
		int n; cin >> n;
		for(int i = 0; i < n; i++){ // tạo cây
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u); // tạo gốc
				makeRoot(root, u, v, c);
			}
			else insertNode(root, u, v, c);
		}
		check(root,0);
		cout << ok << endl;
	}
}