#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m, n;
queue<int> q1;
bool findNum = false;
int main(){
    cin >> m >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        if(q1.empty()){
            q1.push(num);
            cnt++;
        }else{
            queue<int> q2, temp;
            for(int i = 0; i <= q1.size(); i++){
                int search = q1.front();
                if(num == search){// 如果队列中找到了
                    findNum = true;
                }
                q2.push(q1.front());
                q1.pop();
            }
            temp = q2;
            q2 = q1;
            q1 = temp;
            if(q1.size() < 3 && findNum == false){
                q1.push(num);
                cnt++;
            }else if(q1.size() == 3 && findNum == false){
                q1.pop();
                q1.push(num);
                cnt++;
            }
            findNum = false;
        }
        cout<<q1.size()<<" "<<q1.front()<<" "<<q1.back()<<endl;
    }
    cout<<cnt;
    return 0;
}// 1 2