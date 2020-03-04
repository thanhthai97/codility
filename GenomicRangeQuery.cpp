#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> solution(string &S, vector<int> &P, vector<int> &Q)
{
    int n = P.size();
    int l = S.length();
    vector<int> positionA(l,-1);
    vector<int> positionC(l,-1);
    vector<int> positionG(l,-1);
    vector<int> positionT(l,-1);
    for (int i=0;i<l;i++)
    {
        if(i==0)
        {
            if(S[i]=='A') positionA[i] = i;
            if(S[i]=='C') positionC[i] = i;
            if(S[i]=='G') positionG[i] = i;
            if(S[i]=='T') positionT[i] = i;
        }
        if(i>0){
         if(S[i]=='A') {positionA[i] = i;
         positionC[i] = positionC[i-1];
         positionG[i] = positionG[i-1];
         positionT[i] = positionT[i-1];}
         if(S[i]=='C') {positionC[i] = i;
         positionA[i] = positionA[i-1];
         positionG[i] = positionG[i-1];
         positionT[i] = positionT[i-1];}
         if(S[i]=='G') {positionG[i] = i;
         positionC[i] = positionC[i-1];
         positionA[i] = positionA[i-1];
         positionT[i] = positionT[i-1];}
         if(S[i]=='T') {positionT[i] = i;
         positionC[i] = positionC[i-1];
         positionG[i] = positionG[i-1];
         positionA[i] = positionA[i-1];}
        }
    }
    //P[i]<=posionA<=Q[i] => R[i] = 1;
    vector<int> R;
    for(int i=0;i<n;i++)
    {
        if(positionA[Q[i]] >= P[i]) R.push_back(1);
        else if(positionC[Q[i]] >= P[i]) R.push_back(2);
        else if(positionG[Q[i]] >= P[i]) R.push_back(3);
        else if(positionT[Q[i]] >= P[i]) R.push_back(4);
    }

    return R;
}
int main()
{
    string S = "C";
    vector<int> P = {0}, Q={0};
    vector<int> R = solution(S,P,Q);
    int a = P.size();
    for(int i=0;i<a;i++)
    {
        cout << R[i];
    }
}