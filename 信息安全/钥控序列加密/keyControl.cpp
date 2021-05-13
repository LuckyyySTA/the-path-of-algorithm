#include "iostream"
#include "fstream"
#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10000//加密文件的最大容量
#define GROUP_SIZE 4 //一组的大小

int main()
{
    char fileName[80] = "";
    cout << "请输入文件名" << endl;
    cin >> fileName;
    FILE* fileToRead = fopen(fileName, "r");
    if(fileToRead == NULL)
    {
        cout << "文件名错误！" << endl;
        return 0;
    }

    ifstream input_file;
    ofstream output_file;
    char ch;
    input_file.open(fileName);
    if(!input_file)return 1;
    output_file.open("text.txt");
    while(input_file.get(ch))
    {
        if(ch!=' '&&!ispunct(ch))
        output_file.put(ch);
    }
    input_file.close();
    output_file.close();
    fileToRead = fopen("text.txt", "r");
    string key = "HUANGLEI";//48173625
    string ans = "";
    cout << "加密秘钥为：" << endl;
    cout << key << endl;
    char content[MAX_SIZE] = {0};
    if(fgets(content, MAX_SIZE, fileToRead) != NULL);
    {
        fclose(fileToRead);

        string subline_1 = "";
        string subline_2 = "";
        string subline_3 = "";
        string subline_4 = "";
        string subline_5 = "";
        string subline_6 = "";
        string subline_7 = "";
        string subline_8 = "";
        int cur = 0;
        while(content[cur])
        {
            subline_1 += content[cur++];
            if(!content[cur]) break;
            subline_2 += content[cur++];
            if(!content[cur]) break;
            subline_3 += content[cur++];
            if(!content[cur]) break;
            subline_4 += content[cur++];
            if(!content[cur]) break;
            subline_5 += content[cur++];
            if(!content[cur]) break;
            subline_6 += content[cur++];
            if(!content[cur]) break;
            subline_7 += content[cur++];
            if(!content[cur]) break;
            subline_8 += content[cur++];
            if(!content[cur]) break;
        }
        ans += subline_3 + subline_7 + subline_5 + subline_1 + subline_8 + subline_6 + subline_4 + subline_2;
        int length = ans.size();
        for(int i = 0; i < length; i ++)
        {
            content[i] = ans[i];
        }
        content[length] = 0;
        cout << "加密完成" << endl;
        ofstream outFile;
        outFile.open("加密文件.txt", ios::trunc);
        if(!outFile.is_open()) { cout << "文件写入错误" << endl; return 0;}
        outFile << content;
        outFile.close();
        system("pause");
        return 0;

    }
    cout << "文件读写发生错误！" << endl;
    return 0;

}
