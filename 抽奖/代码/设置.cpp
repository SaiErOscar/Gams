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
	std::string lj1 = "�齱+��Ϸ:\n\t��ʼĿ¼��" + lj + "\\����\\CODE.exe", lj2 = "\t����Ŀ¼��" + lj + "\\�ļ���";
	cout << "���Ҽ���ݷ�ʽ��ѡ��\"����\"������������·�����޸Ĺ���Ŀ¼����ʼĿ¼��\n\n";
	cout << lj1 << endl << endl << lj2 << endl << endl << "\n\n\n\n\n\n\n";
	system ("pause"); 
	return 0;
}
