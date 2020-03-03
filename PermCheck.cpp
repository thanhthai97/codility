#include<iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    
    int n = A.size();
    vector<int> check(n,0);
    
    int maxin=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>n) return 0;
        check[A[i]]++;
        if(check[A[i]] == 2) return 0;
        if(A[i]>maxin) maxin = A[i];
        
    }
    if(maxin==n) return 1;
    else return 0;
}


int main()
{
    vector<int> A = {1,1,4,3,2};
    cout<< solution(A);
}