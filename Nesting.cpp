#include <iostream>
#include <string>
#include <stack>
//#include <queue>
using namespace std;

/*public class Stack {
    private static class Node {
        private int data;
        private Node next;
        private Node(int data) {
            this.data = data;
        }
    }
    private Node top;

    public boolean isEmpty() {
        return top == null;
    }

    public int peek(){
        return top.data;
    }
    public void push (int data){
        Node node = new Node(data);
        node.next = top;
        top = node;
    }
    public int pop(){
        int data = top.data;
        top = top.next;
        return data;
    }
}*/

int solution (string &S)
{
    
    int n = S.size();
    if (n & 1)
    {
        return 0;
    }
    stack<char> nest;
    //char c;
    for(int i=0; i< n;i++)
    {
        if(S[i] == '(')
        {
            nest.push(S[i]);
        }
        else if(S[i] == ')')
        {
            //c = nest.top();
            
            if(nest.top() != '(')
            {
                return 0;
            }
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
    string S = "(()(())())";
    cout << solution(S);
}