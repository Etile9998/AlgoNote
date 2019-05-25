#include <bits/stdc++.h>
using namespace std;

int n;
char x, l, r;

struct {
   int l, r; 
}a[26];

void preorder(int x){  
    if (x == -1) return;
    cout << (char)(x + 'A');
    preorder(a[x].l);
    preorder(a[x].r);
}

void inorder(int x){
    if (x == -1) return;
    inorder(a[x].l);
    cout << (char)(x + 'A');
    inorder(a[x].r);
   
}

void postorder(int x){
    if (x == -1) return;
    postorder(a[x].l);
    postorder(a[x].r);
    cout << (char)(x + 'A');

}

int main(){
    cin >> n;
    for (int i = 0 ; i < n; i++){
        cin >> x >> l >> r;
        if (l == '.') l = 'A' - 1;
        if (r == '.') r = 'A' - 1;
        a[x - 'A'].l = l - 'A';
        a[x - 'A'].r = r - 'A';
    }
    preorder(0); cout << '\n';
    inorder(0); cout << '\n';
    postorder(0); cout << '\n';
    return 0;
}
