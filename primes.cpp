#include <math.h>
#include <vector>
#include <iostream>
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
	
	cout << "1 is prime\n" << "2 is prime\n" << "3 is prime\n" << "5 is prime\n";
	int z=6;
	vector<int> primeList = {2, 3, 5};
	int b = primeList.size();

	while (b < 50){
		primeList = checkNumber(z, primeList);
		z++;
		b = primeList.size();
	}
	return 0;
}
