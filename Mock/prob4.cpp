#include <iostream>
#include <vector>


using namespace std;

int doms[8] = {5000,1000,500,200,100,50,20,10};
int domsCount[8] = {0};
int value;
int dup = value;

void printSolution(int i){
	for(; i<8; i++){
		printf("%dx%d",domsCount[i],doms[i]);
		if(i<7)
			printf(", ");
	}
	printf("\n");
}
void calSolution(int value){
	int i = 0;
	while(value > 9){
		if(value >= doms[i]){
			domsCount[i] = value / doms[i];
			value -= domsCount[i]*doms[i];
		}
		i++;
	}
}

void solve(){
     cin >> value;
     calSolution(value);
     int i = 0;
     while(value < doms[i]) i++;
     printSolution(i);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin>>t;
	for(int i = 0; i<=t; i++){
		printf("Case #%d: ",i+1);
		solve();
		t--;
	}
}
