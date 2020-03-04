#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int solution(vector<int> &A)
{
    if(A.empty()) return 0;
    int n = A.size();
    int count =1;
    sort(A.begin(),A.end());
    for(int i =1;i<n;i++)
    {
        if(A[i] != A[i-1]) count++;
    }
    return count;
    
}
int main()
{
    vector<int> A;
    cout << solution(A);
}