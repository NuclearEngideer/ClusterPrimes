#include <math.h>
#include <vector>
#include <iostream>
using namespace std;

int checkNumber(int checkNum) {
	vector<int> primes = {2, 3, 5};
	for (int i=0; i<primes.size(); i++)
		if (checkNum % primes[i] == 0) {
			bool flag = false;
			return flag;
			break;
		}
		return flag;	
	if (flag != false)
		primes.push_back(checkNum);
		cout << primes.back() << " is prime" << endl;
	
}

int main() {
/*	vector<float> nums;
	for (int i=1; i<11; i++)
		nums.push_back(i);
	cout << "The vec elems are: ";
	for (int i=0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << "\n";
*/	
	int z=6;
	while (z < 20)
		checkNumber(z);
		z++;
	return 0;
}
