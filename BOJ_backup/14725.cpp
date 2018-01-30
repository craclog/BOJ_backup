#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int n;

struct Trie {
	map<string, Trie*> m;
};

Trie* root;
void print_trie(Trie* t, int indent) {
	for (auto p : t->m) {
		for (int i = 0; i<indent; i++)putchar('-');
		printf("%s\n", p.first.c_str());
		print_trie(p.second, indent + 2);
	}
}
int main() {
	root = new Trie;
	scanf("%d", &n);
	for (int i = 0; i<n; i++) {
		int x;
		scanf("%d", &x);
		Trie* curr = root;
		for (int j = 0; j<x; j++) {
			string s(20, ' ');
			scanf("%s", &s[0]);
			if (curr->m.count(s) == 0) {
				auto t = new Trie;
				curr->m[s] = t;
			}
			curr = curr->m[s];
		}
	}
	print_trie(root, 0);
}
