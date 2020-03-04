#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A)
{
    int n = A.size();
    int num0=0,couter=0;
    for(int i=0;i<n;i++)
    {
        if(!A[i]) num0++;
        else couter += num0;
    }
    if(abs(couter) > 1000000000) return -1;
    return couter;
}
int main()
{
    vector<int> A ={0,1,0,1,1};
    cout << solution(A);
}