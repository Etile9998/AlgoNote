#include <bits/stdc++.h>
using namespace std;

/*
   1 o
   2 i
   3 s
   4 z
   5 t
 */

int n, m;
char a[14][14];
bool check[14][14];
int ans[5];

int main(){
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for (int i = 0 ; i < n ; i++){
		for (int j = 0 ; j < m ; j++){
			if (a[i][j] != '.' && !check[i][j]){
				if (a[i][j] == a[i+1][j] && a[i][j] == a[i][j+1] && a[i][j] == a[i+1][j+1]){
					ans[0]++;
					check[i][j] = check[i+1][j] = check[i][j+1] = check[i+1][j+1] = 1;
				}
				else if (a[i][j] == a[i+1][j] && a[i][j] == a[i+2][j] && a[i][j] == a[i+3][j]){
					ans[1]++;
					check[i][j] = check[i+1][j] = check[i+2][j] = check[i+3][j] = 1;
				}
				else if (a[i][j] == a[i][j+1] && a[i][j] == a[i][j+2] && a[i][j] == a[i][j+3]){
					ans[1]++;
					check[i][j] = check[i][j+1] = check[i][j+2] = check[i][j+3] = 1;
				}
				else if (a[i][j] == a[i+1][j] && a[i][j] == a[i+1][j+1] && a[i][j] == a[i+2][j+1]){
					ans[2]++;
					check[i][j] = check[i+1][j] = check[i+1][j+1] = check[i+2][j+1] = 1;
				}
				else if (a[i][j] == a[i][j+1] && a[i][j] == a[i+1][j+1] && a[i][j] == a[i+1][j+2]){
					ans[3]++;
					check[i][j] = check[i][j+1] = check[i+1][j+1] = check[i+1][j+2] = 1;
				}								
				else if (a[i][j] == a[i+1][j] && a[i][j] == a[i+1][j+1] && a[i][j] == a[i+2][j]){
					ans[4]++;
					check[i][j] = check[i+1][j] = check[i+1][j+1] = check[i+2][j] = 1;
				}								
				else if (a[i][j] == a[i][j+1] && a[i][j] == a[i+1][j+1] && a[i][j] == a[i][j+2]){
					ans[4]++;
					check[i][j] = check[i][j+1] = check[i+1][j+1] = check[i][j+2] = 1;
				}
				else if (a[i][j] == a[i+1][j] && a[i][j] == a[i][j+1] && a[i][j] == a[i+1][j-1]){
					ans[2]++;
					check[i][j] = check[i+1][j] = check[i][j+1] = check[i+1][j-1] = 1;
				}
				else if (a[i][j] == a[i+1][j] && a[i][j] == a[i+1][j-1] && a[i][j] == a[i+2][j-1]){
					ans[3]++;
					check[i][j] = check[i+1][j] = check[i+1][j-1] = check[i+2][j-1] = 1;
				}								
				else if (a[i][j] == a[i+1][j-1] && a[i][j] == a[i+1][j] && a[i][j] == a[i+2][j]){
					ans[4]++;
					check[i][j] = check[i+1][j-1] = check[i+1][j] = check[i+2][j] = 1;
				}								
				else if (a[i][j] == a[i+1][j-1] && a[i][j] == a[i+1][j] && a[i][j] == a[i+1][j+1]){
					ans[4]++;
					check[i][j] = check[i+1][j-1] = check[i+1][j] = check[i+1][j+1] = 1;
				}
			}
		}
	}
	for (int i = 0 ; i < 5 ; i++){
		cout << ans[i] << '\n';
	}
	return 0;
}
