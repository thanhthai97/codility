#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solution(vector<int> &A)
{
    int n = A.size();
    sort(A.begin(),A.end());
    if (n <3) return 0;
    for(int i =0; i<n-2;i++)
    {
        int a = A[i];
        int b = A[i+1];
        int c = A[i+2];
        if(((a+b)>c)&&((a+c)>b)&&((c+b)>a)) return 1;
    }
    return 0;
}
int main()
{
    vector<int> A = {10,2,5,1,8,20};
    cout<<solution(A);
}