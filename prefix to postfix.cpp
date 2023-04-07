//A program that converts a prefix expression to a postfix expression.
#include <iostream>
#include <stack>
using namespace std;
//declaring the operands to use in the stack.
bool isOperator(char x)
 {
   switch (x) {
      case '+':
      case '-':
      case '/':
      case '*':
      return true;
   }
   return false;
}
string convertToPostfix(string prefix)
{
   stack<string> expression;
   int length = prefix.size();
   for (int i = length - 1; i >= 0; i--)
        {
          if (isOperator(prefix[i])) {
          string op1 = expression.top();
          expression.pop();
          string op2 = expression.top();
          expression.pop();
          string temp = op1 + op2 + prefix[i];
          expression.push(temp);
      }
      else
         expression.push(string(1, prefix[i]));
   }
   return expression.top();
}
int main()
 {
   string prefix;
   cout<<"Enter the Prefix expression :";
   cin>>prefix;
   cout<<"The Postfix expression is : "<<convertToPostfix(prefix)<<endl;
   return 0;
}
