#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A)
{
    unsigned long long int l = A.size();
    double msum = ((l+2)*(l+1))/2;
    unsigned long long int sum = 0;
    for (unsigned int i =0;i<l;i++)
    {
        sum = sum + A[i];
    }
    return msum - sum;
}
int main()
{
    vector<int> A = {2,3,1,5};
    cout << solution(A);
    return 0;
}