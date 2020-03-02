#include <iostream>
#include <vector>
//#include <cmath>
#include <limits>
using namespace std;


int solution(vector<int> &A)
{
    unsigned int n = A.size();
    long long diff,sum=0;
    vector <long long> sums;
    for(unsigned int i=0;i<n;i++)
    {
        sum += A[i];
        sums.push_back(sum);
    }
    long long mindiff = std::numeric_limits<long long>::max();
    for (unsigned int i =0 ; i<n-1;i++)
    {
        //for(unsigned int j = 0 ; j<i+1;j++)
        //{
        //    total = total+A[j];
        //}
        
        diff = abs(sum - 2*sums[i]);
        if(diff < mindiff) mindiff = diff;
    }
    return mindiff;
}
int main()
{
    vector<int> A = {3,1,2,4,3};
    cout << solution(A);
    return 0;
}