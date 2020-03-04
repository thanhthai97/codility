#include <iostream>

using namespace std;
int solution(int A, int B, int K)
{
    int c=0;
    
    int boisoA = A/K;
    int boisoB = B/K;
    int modA = A%K;
    int modB = B%K;
    if(modA==0)
    {
        c = (boisoB-boisoA) +1;
    }
    else
    {
        c= boisoB-boisoA;
    }
    
    
    
    return c;
    
}
int main()
{
    cout<< solution(6,12,2);
    return 0;
}