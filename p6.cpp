#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdlib.h>

using namespace std;


void solve(){
 	int r, c;
 	cin >> r >> c;
 	int p = r*c;
 	int q = ((p*p)/2) + (p/2);
 	printf("%d %d\n", p,q);    
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
