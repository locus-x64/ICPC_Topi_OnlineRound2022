#include <iostream>
#include <vector>


using namespace std;

bool isPrime(int num) {
   bool pno[num+1];
   memset(pno, true, sizeof(pno));
   for (int i = 2; i*i <= num; i++) {
      if (pno[i] == true) {
         for (int j = i*2; j <= num; j += i)
         pno[j] = false;
      }
   }
   return pno[num];
}

void solve(int t){
	int result;
	int num1, num2; cin >> num1 >> num2;
	bool bothPrimes = isPrime(num1) and isPrime(num2);
	if(bothPrimes)
		result = num1 + num2;
	else if(!bothPrimes)
		result = 0;
	else
		result = num1 * num2;
	cout << result << '\n';
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin>>t;
	while(t){
		printf("Case #%d: ",t);
		solve(t);
		t--;
	}
}
