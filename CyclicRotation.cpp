#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K)
{
    
    int n = A.size();
    vector<int> B(A);
    for (int i = 0;i<n;i++)
    {
        B[((i+K)%(n))] = A[i];
    }
    
    return B;
}

int main()
{
    vector<int> A = {3,8,9,7,6};
    vector<int> B = solution( A, 3);
    int l = A.size();
    for(int i =0;i<l;i++)
    {
        cout << B[i];
    }
}
