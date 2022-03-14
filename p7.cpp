#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdlib.h>




using namespace std;


vector<int> getCountOfAlphabets(string str, int n){
	vector<int> count(26,0);
	
	for(int i = 0; i<n; i++){
		char ch = str[i];
		if(ch == ' ') continue;
		count[ch-'a']++;
	}
	return count;
}
bool solve(){
	string str1, str2;
	cin.clear();
	cin.getline(str1,1000);
	// getline(cin,str1);
	cin.ignore();
	cin.getline(str2,1000);
	// getline(cin,str2);
	cout<<str1.size();
	cout<<str2.size();

	int n1 = str1.size(), n2 = str2.size();
	vector<int> count1(26);
	count1 = getCountOfAlphabets(str1,n1);
	vector<int> count2(26);
	count2 = getCountOfAlphabets(str2,n2);
	for(int i = 0; i<26; i++){
		cout<<"count1[i]"<<count1[i]<<endl;
		cout<<"count2[i]"<<count2[i]<<endl;
		if(count1[i] < count2[i])
			return false;
	}
	return true;
}

int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int t; cin>>t;
	cin.ignore();
	for(int i = 0; i<=t; i++){
		if(solve())
			cout << "Possible\n";
		else
			cout << "Not Possible\n";
		t--;
	}
	return 0;
}