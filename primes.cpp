#include <math.h>
#include <vector>
#include <iostream>
#include <chrono>
using namespace std;

vector<int> checkNumber(int checkNum, vector<int> primeList) {
	bool prime=true;
	for (int i=0; i<primeList.size(); i++){
		if (checkNum % primeList[i] == 0){
			prime = false;
		}
	}
	if (prime != false){
		primeList.push_back(checkNum);
		cout << primeList.back() << " is prime" << endl;
	}
	return primeList;
}

int main() {
	
	auto start = chrono::steady_clock::now();

	cout << "1 is prime\n" << "2 is prime\n" << "3 is prime\n" << "5 is prime\n";
	int z=6;
	vector<int> primeList = {2, 3, 5};
	int b = primeList.size();

	while (b < 10000){
		primeList = checkNumber(z, primeList);
		z++;
		b = primeList.size();
	}
	auto end = chrono::steady_clock::now();

	cout << "Elapsed time to calculate " << b << " prime numbers: " 
		 << chrono::duration_cast<chrono::milliseconds>(end-start).count()
		 << " ms" << endl;
	return 0;
}
