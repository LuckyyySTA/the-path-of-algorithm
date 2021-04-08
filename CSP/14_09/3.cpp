/* CCF201409-3 字符串匹配 */
 
#include <iostream>
#include <cstring>
 
using namespace std;
const int MAXN = 100;
int next[MAXN+1];
char s[MAXN+1], s2[MAXN+1], t[MAXN+1];
// KMP算法：函数getnext()和kmp()
void getnext(int next[], char t[])
{
    int i=0, j=-1;
    next[0] = -1;
    while(t[i]!='\0')
        if(j == -1 || t[i] == t[j])
            next[++i] = ++j;
        else
            j = next[j];
}
 
int kmp(int next[], char s[], char t[])
{
    int i=0, j=0, len1=strlen(s), len2=strlen(t);
 
    while(i < len1 && j < len2)
    {
        if(j == -1 || s[i] == t[j])
            ++i, ++j;
        else
            j = next[j];
    }
 
    if(j>=len2)
        return i-len2+1;
    else
        return -1;
}
 

 
 
int main()
{
    int option, m;
    int next[101];
    cin >> t >> option;
 
    if(option == 0)
        for(int i=0; t[i]; i++)
            t[i] = tolower(t[i]);
 
    getnext(next, t);
 
    cin >> m;
    while(m--) {
        cin >> s;
        strcpy(s2, s);
 
        if(option == 0)
            for(int i=0; s2[i]; i++)
                s2[i] = tolower(s2[i]);
 
        if(kmp(next, s2, t) != -1)
            cout << s << endl;
    }
 
    return 0;
}