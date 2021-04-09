#include<iostream>
using namespace std;

int main(){
    int maxtrix[20][11], move[5][5];
    for(int i = 1; i <= 15; i++){
        for(int j = 1; j <= 10; j++){
            cin>>maxtrix[i][j];
        }
    }
    for(int i = 15; i <= 19; i++){
        for(int j = 1; j <= 10; j++)
            maxtrix[i][j] = 1;
    }
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            cin>>move[i][j];
        }
    }
    int begin;
    cin>>begin;
    bool stop = false;

    int line = 1;
    for (; line <= 16 && stop == false; line++){
        for (int i = line, rowb = 1; i < line + 4 && stop == false; i++, rowb++){
            if (rowb > 4)
                rowb = 1;
            //检查某一行中的所有列
            for (int j = begin,colb = 1; j < begin + 4 && stop == false; j++, colb++){
            if (maxtrix[i][j] == 1 && move[rowb][colb] == 1){
                stop = true;
            }
            }
    }


    }


    //已重叠到
    if (stop == true){
        line = line - 2;
    //在原图中叠加卡片，修改原图
        for (int i = line, rowb = 1; i < line + 4; i++, rowb++)
            for (int j = begin, colb = 1; j < begin + 4; j++, colb++){
                if (maxtrix[i][j] == 0 && move[rowb][colb] == 1)
                    maxtrix[i][j] = 1;
                }
    }


    for (int i = 1; i <= 15; i++){
        for (int j = 1; j <= 10; j++){
            cout << maxtrix[i][j] << " ";
        }
            cout << endl;
    }

    return 0;
}