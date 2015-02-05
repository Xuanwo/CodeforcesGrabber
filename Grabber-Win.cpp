//For Windwos
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	//国内建议挂代理连接Codeforces，默认采用的是Shadowsocks做代理，如不同请自行修改端口
    char order[] = "wkhtmltopdf -p 127.0.0.1:1080 http://codeforces.com/problemset/problem/";
    //国外请使用下面这条命令
    //char order[] = "wkhtmltopdf http://codeforces.com/problemset/problem/";
    char tmporder[1000];
    char move[] = "move ";
    char tmpmove[1000];
    char pdftk[] = "pdftk *.pdf cat output ";
    char tmppdftk[1000];
    char del[] = "del ";
    char tmpdel[1000];
    char contest[1000];
    //指定最小比赛数
    int MinContest;
    //指定最大比赛数
    int MaxContest;
    char problemID[][2] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T"};
    system("md finished");
    cout<<"Please input the MinContest:";
    cin>>MinContest;
    cout<<"Please input the MaxContest:";
    cin>>MaxContest;
    for (int i = MinContest; i <= MaxContest; i++)
    {
        itoa(i, contest, 10);
        //清除之前的缓存
        system("del *.pdf");
        for (int j = 0; j < 14; j++)
        {
            //构造PDF生成命令
            strcpy(tmporder, order);
            strcat(tmporder, contest);
            strcat(tmporder, "/");
            strcat(tmporder, problemID[j]);
            strcat(tmporder, " ");
            strcat(tmporder, problemID[j]);
            strcat(tmporder, ".pdf");
            //检测是否存在，如不存在break并删除错误的题目文件
            if (system(tmporder) == 1)
            {
                strcpy(tmpdel, del);
                strcat(tmpdel, problemID[j]);
                strcat(tmpdel, ".pdf");
                system(tmpdel);
                break;
            }
            cout << tmporder << endl;
        }
        //构造PDF合成命令
        strcpy(tmppdftk, pdftk);
        strcat(tmppdftk, contest);
        strcat(tmppdftk, ".pdf");
        cout << tmppdftk << endl;
        system(tmppdftk);
        cout << tmppdftk << endl;
        //构造PDF移动命令
        strcpy(tmpmove, move);
        strcat(tmpmove, contest);
        strcat(tmpmove, ".pdf ");
        strcat(tmpmove, "finished");
        system(tmpmove);
        cout << tmpmove << endl;
    }
    return 0;
}

/**
wkhtmltopdf -p 127.0.0.1:1080 http:xxxx xxx.pdf
md xxx
cd xxx
cd..
*/

/*
pdftk *.pdf cat output combined.pdf
**/

/*
wkhtmltopdf -p 127.0.0.1:1080 http://codeforces.com/problemset/problem/1/F F.pdf
**/