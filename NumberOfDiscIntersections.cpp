#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solution(vector<int> &A)
{
    unsigned int n = A.size();
    unsigned int counter = 0;
    
    //sort(A.begin(),A.end());
    for(unsigned int i=0 ;i<(n-1);i++)
    {
        for(unsigned int j=i+1;j<n;j++)
        {
            if((A[i]+A[j])>=(j-i)) counter++;
            
        }
        
    }
    if(counter>10000000) return -1;
    return counter;
    
}
int main()
{
    vector<int> A={1,2147483647,0};
    cout<<solution(A);
}