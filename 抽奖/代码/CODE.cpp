#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void e()
{
	system("taskkill /F /IM PotPlayerMini64.exe");
	system("taskkill /F /IM EXCEL.exe");
	system("taskkill /F /IM WINWORD.EXE");
}
bool F_ni(int c, int d, int flag)
{
	int tim = rand() % c + d;
	for (int i = 1; i <= tim; i++)
		keybd_event(0x78, 0, 0, 0), keybd_event(0x78, 0, 2, 0), Sleep(1);
	keybd_event(0x78, 0, 2, 0);
	if (flag == 1)
		MessageBox(NULL, "������", "ѡ��", MB_OK);
	if (flag == 2)
	{
		Sleep(5000);
		if (MessageBox(NULL, "������", "ѡ��", MB_YESNO) == IDYES)
			return true;
	}
	if (flag == 3)
		while (1)
		{
			if (MessageBox(NULL, "������", "ѡ��", MB_YESNO) == IDYES)
			{
				int tim = rand() % c + d;
				for (int i = 1; i <= tim; i++)
					keybd_event(0x78, 0, 0, 0), keybd_event(0x78, 0, 2, 0), Sleep(1);
				keybd_event(0x78, 0, 2, 0);
			}
			else
			{
				e();
				break;
			}
		}
	return false;
}
void ZXH()
{
	MessageBox(NULL, "Have a good time!", "�ټ�", MB_OKCANCEL);
	system ("start ZhenXinHua.xlsx"), F_ni(100, 50, 1), system("taskkill /F /IM EXCEL.exe");
	if (MessageBox(NULL, "���ڿ�ʼ��ð�գ�", "ѡ��", MB_YESNO) == IDYES)
		MessageBox(NULL, "���ͣ�", "�ټ�", MB_OKCANCEL), system ("start DaMaoXian.xlsx"), F_ni(100, 50, 0);
	MessageBox(NULL, "�Ƿ������", "ѡ��", MB_OK), system("taskkill /F /IM EXCEL.exe");
	return; 
}
int main()
{
	if (MessageBox(NULL, "\t��ӭʹ�ý��ճ齱С����\n��ܰ��ʾ��������Ŀ��ѡ���񡱼����˳�����\n\n\t  �Ƿ�ͬ��", "��ӭ", MB_YESNO) != IDYES)
		MessageBox(NULL, "�ټ�", "�����˳�", MB_OK), e(), exit(0);
	if (MessageBox(NULL, "�Ƿ���Ҫ�ṩ������", "����", MB_YESNO) == IDYES)
		system ("start Help.docx");
	if (MessageBox(NULL, "��������ɣ�", "ѡ��", MB_YESNO) == IDYES)
		system ("start ShouQi.xlsx"), F_ni(300, 200, 3);
	while (1)
	{
		if (MessageBox(NULL, "�Ƿ��ţ�(5��)", "ѡ��", MB_YESNO) == IDYES)
		{
			system ("start BuHuo.PNG"), Sleep(1000) , system("start The_Magnificent_Seven.mp3"), Sleep(1500), system ("start BanJi.xlsx");
			while (1)
				if (!F_ni(300, 200, 2))
				{
					e();
					break;
				}
		}
		else
		{
			if (MessageBox(NULL, "�Ƿ�������Ļ���ð��?", "ѡ��", MB_YESNO) == IDYES)
				ZXH();
			else
			{
				if (MessageBox(NULL, "�Ƿ������������Ϸ?", "ѡ��", MB_YESNO) == IDYES)
					MessageBox(NULL, "Have a good time!", "�ټ�", MB_OKCANCEL), system ("start QiangShuZiYouXi.docx");
				else
					MessageBox(NULL, "�ټ�", "�����˳�", MB_OK), e(), exit(0);
			}
		}
	}
	return 0;
}
