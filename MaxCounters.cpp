#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(int N, vector<int> &A)
{
    int n = A.size();
    vector<int> B(N,0);
    int maxcouter =0, mincouter =0;
    for(int i =0;i<n;i++)
    {
        if(A[i]<=N)
        {
            B[A[i]-1] = max(B[A[i]-1],mincouter)+1;
            if (B[A[i]-1] > maxcouter) maxcouter = B[A[i]-1];

        }
        else mincouter = maxcouter;
        
        
    }
    for(int i=0;i<N;i++)
    {
        B[i]=max(mincouter,B[i]);
    }
    return B;
}
int main()
{
    vector<int> A = {3,4,4,6,1,4,4};
    vector<int> D;
    D = solution(5,A);
    for(int i =0;i<5;i++)
    {
        cout << D[i];
    }
}