#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

string teGet()
{
	char sz[MAX_PATH + 1] = {0};
	GetModuleFileNameA(NULL, sz, MAX_PATH);
	(strrchr(sz, '\\'))[0] = 0;
	string path = sz;
	return path;
}

int main()
{
	std::string lj = teGet();
	std::string lj1 = "抽奖+游戏:\n\t起始目录：" + lj + "\\代码\\CODE.exe", lj2 = "\t工作目录：" + lj + "\\文件库";
	cout << "请右键快捷方式，选择\"属性\"，并复制以下路径，修改工作目录与起始目录：\n\n";
	cout << lj1 << endl << endl << lj2 << endl << endl << "\n\n\n\n\n\n\n";
	system ("pause"); 
	return 0;
}
