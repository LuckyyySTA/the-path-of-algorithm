#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    int length;
    char ch;
    string s;
    stack<char> st;
    cin >> length >> ch;
    getchar();
    getline(cin, s);
    if (length >= s.length())
    {
        length = length - s.length();
        for (int i = s.length() - 1; i >= 0; i--)
            st.push(s[i]);
        for (int j = 0; j < length; j++)
            st.push(ch);
    }
    else
    {
        for (int i = s.length() - 1; i >= s.length() - length; i--)
        {
            st.push(s[i]);
        }
    }
    length = st.size();
    for (int i = 0; i < length; i++)
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}