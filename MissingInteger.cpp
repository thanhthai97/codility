#include <vector>
#include<iostream>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    const int N = 1000000;
    int n = A.size();
	vector<bool> integers(N, false);

	
	for (int i=0; i<n; i++) {
		if (A[i] > 0) {
			integers[A[i]] = true;
		}
	}

	for (int i=1; i<N; i++) {
		if (!integers[i]) {
			return i;
		}
	}

	return 0;
}
int main()
{
    vector<int> A = {1,3,6,4,1,2};
    cout << solution(A);
}