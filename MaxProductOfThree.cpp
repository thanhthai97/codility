#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int solution(vector<int> &A)
{
    int n = A.size();
    sort(A.begin(),A.end());
    if(A[n-1]>0)
    {
    if(abs(A[0])>=abs(A[n-1]) && ((A[0]*A[1])>0) || (A[0]*A[1])>(A[n-2]*A[n-3])) return A[0]*A[1]*A[n-1];}
    else if(A[n-1]==0) return 0;
    
    return A[n-1]*A[n-2]*A[n-3];
}
int main()
{
    vector<int> A = {2,100,3,-1000};
    cout<<solution(A);
}