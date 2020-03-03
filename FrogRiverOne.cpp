#include <iostream>
#include <vector>
#include <set>
using namespace std;

int solution(int X, vector<int> &A)
{
    set<int> s;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        s.insert(A[i]);
        if(s.size() == X) return i;
    }
    return -1;
}
int main()
{
    vector<int> A = {1,3,1,4,2,3,5,4,7,6};
    cout << solution(5,A);
    return 0;
}