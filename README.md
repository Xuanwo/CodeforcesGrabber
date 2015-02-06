# CodeforcesGrabber

## 介绍
这是一个Codeforces题库的抓取工具，可以抓取每一道题的题面并生成对应的PDF，一个PDF对应一个contest。

## 环境
- pdftk
- wkhtmltopdf
- gcc

## 使用方法
打开程序后，分别输入自己想要获取的开始以及结束的contest编号（网址中的`http://codeforces.com/problemset/problem/`后面的数字编号，而非Codeforces Round的编号），然后程序会自动运行，并且在当前文件夹内创建`finished`文件夹，生成好的pdf文件都在`finished`文件夹下。

## 错误提示
*Hosted not found*
当前题目没有找到，一般情况下无大碍，若连续出现，请检查网络连接。

## 关于跨平台运行
程序没有调用系统相关的头文件，但是其中调用的命令行因系统不同会有所区别，所以需要根据系统选择对应的文件进行编译。
本程序只在Win8.1 x64， Mingw gcc 4.8.1下编译并运行成功，如果出现BUG请提交至issues区。

# Todo
- [ ] 支持Linux
- [ ] 支持Mac OS
- [ ] 自动识别操作系统
- [ ] 更加人性化的提示
- [ ] 绿色化环境集成，减少人工配置的麻烦


# 感谢
pdftk开发者
wkhtmltopdf开发者
