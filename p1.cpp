#include <bits/stdc++.h>

using namespace std;
// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;

// function to check if brackets are balanced
bool isRegular(string expr)
{
	stack<char> s;
	char x;

	// Traversing the Expression
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(')
		{
			// Push the element in the stack
			s.push(expr[i]);
			continue;
		}
		if (s.empty())
			return false;

		if(expr[i]==')')

			// Store the top element in a

			s.pop();



	}

	// Check Empty Stack
	return (s.empty());
}




void subString(string s, int n)
{

    int max=0;
    string str;
    int count=1;
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
           {
                str=s.substr(i, len);
                bool reg=isRegular(str);
                if (max<str.length()&& reg)
                {count=1;max=str.length();}
                else if(max==str.length()&& reg)
                count++;
           }
    cout<< max <<' '<<count<<endl;
}



int main()
{
    int t;
    cin>>t;
    string s;
    int n;
    while(t--)
    {
        cin>>s;
        subString(s,s.length());

    }
    return 0;
}