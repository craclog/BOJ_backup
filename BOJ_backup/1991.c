#include <stdio.h>

typedef struct _node {
	char Llink;
	char Rlink;
	int exist;
}node;
node tree[27] = { 0, };
void inorder(char v);
void preorder(char v);
void postorder(char v);


int main(){
	int n, i, j;
	char tmp, tmp1, tmp2;
	scanf("%d", &n);
	getchar();
	
	for (i = 0; i < n; i++) {
		scanf("%c %c %c", &tmp,&tmp1,&tmp2);
		getchar();
		//printf("%c %c %c\n", tmp, tmp1, tmp2);
		tree[tmp - 'A'].exist = 1;
		if( tmp1 != '.')
			tree[tmp - 'A'].Llink = tmp1;
		if( tmp2 != '.')
			tree[tmp - 'A'].Rlink = tmp2;
	}

	preorder('A');
	puts(" ");
	inorder('A');
	puts(" ");
	postorder('A');
	puts(" ");
	
	return 0;
}
void inorder(char v) {
	if (tree[v - 'A'].exist != 1) {
		return ;
	}
	inorder(tree[v - 'A'].Llink);
	printf("%c", v);
	inorder(tree[v - 'A'].Rlink);
}
void preorder(char v) {
	if (tree[v - 'A'].exist != 1) {
		return;
	}
	printf("%c", v);
	preorder(tree[v - 'A'].Llink);
	preorder(tree[v - 'A'].Rlink);
}
void postorder(char v) {
	if (tree[v - 'A'].exist != 1) {
		return;
	}
	postorder(tree[v - 'A'].Llink);
	postorder(tree[v - 'A'].Rlink);
	printf("%c", v);
}