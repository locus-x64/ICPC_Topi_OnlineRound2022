#include <iostream>
#include <vector>


using namespace std;

vector<int> st;
int t, s, maxP;

void solve(int t){
	int in;
	cin>>s>>maxP;
	for (int i = 0; i < s; ++i){
		cin >> in;
		st.push_back(in);
	}
	sort(st.begin(),st.end());
	cout << "Case #" << t << ": ";
	for (int i = 0; i < s; ++i){
		cout << st[i] << ' ';
	}
	cout << '\n';
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>t;
	while(t--)
		solve(t);
}
