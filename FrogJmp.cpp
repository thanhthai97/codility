#include <iostream>

using namespace std;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int len = Y-X;
    if (len%D==0) return len/D;
    else return (len/D)+1;
}

int main()
{
    cout << solution(10,85,30) << endl;
    return 0;
}