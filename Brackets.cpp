#include<iostream>
#include<stack>
//#include<queue>
#include <string>

using namespace std;
int solution(string &S)
{
    int n = S.size();
    if (n % 2) 
    {
        return 0;
    }
    stack<char> nest;
    
    char c;
    for(int i=0; i<n;i++)
    {
        if (S[i] == '{'||S[i]=='['||S[i]=='(') nest.push(S[i]);
        else if (S[i] == '}')
        {
            if(nest.top()!='{') return 0;
            nest.pop();
        }
        else if (S[i] == ']')
        {
            if(nest.top()!='[') return 0;
            nest.pop();
        }
        else if (S[i] == ')')
        {
            if(nest.top()!='(') return 0;
            nest.pop();
        }
        
    }
    if(nest.size() > 0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    string S = "({[]})";
    cout << solution(S);
}