#include<iostream>
#include<string>
using namespace std;
int main() {
	long int num;
	int re=0;
	cin >> num;
	for (int long i = 2; i <=num; i++) {
		if (num % i == 0) {
			re = 0;
			while (num % i == 0) {
				num = num / i;
				re++;
			}
			if (re == 1) {
				cout << i;
			}
			else if (re > 1) {
				cout << i << "^" << re;
			}
			if (num != 1) {
				cout << " * ";
			}
		}
	}
	return 0;
}
