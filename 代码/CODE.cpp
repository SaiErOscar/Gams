#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void e()
{
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
		MessageBox(NULL, "继续？", "选择", MB_OK);
	if (flag == 2)
	{
		Sleep(5000);
		if (MessageBox(NULL, "继续？", "选择", MB_YESNO) == IDYES)
			return true;
	}
	if (flag == 3)
		while (1)
		{
			if (MessageBox(NULL, "继续？", "选择", MB_YESNO) == IDYES)
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
	MessageBox(NULL, "Have a good time!", "再见", MB_OKCANCEL);
	system ("start ZhenXinHua.xlsx"), F_ni(100, 50, 1), system("taskkill /F /IM EXCEL.exe");
	if (MessageBox(NULL, "现在开始大冒险？", "选择", MB_YESNO) == IDYES)
		MessageBox(NULL, "加油！", "再见", MB_OKCANCEL), system ("start DaMaoXian.xlsx"), F_ni(100, 50, 0);
	MessageBox(NULL, "是否继续？", "选择", MB_OK), system("taskkill /F /IM EXCEL.exe");
	return; 
}
int main()
{
	if (MessageBox(NULL, "\t欢迎使用节日抽奖小程序！\n温馨提示：所有项目均选“否”即可退出程序\n\n\t  是否同意", "欢迎", MB_YESNO) != IDYES)
		MessageBox(NULL, "再见", "正在退出", MB_OK), e(), exit(0);
	if (MessageBox(NULL, "是否需要提供帮助？", "帮助", MB_YESNO) == IDYES)
		system ("start Help.docx");
	if (MessageBox(NULL, "测测手气吧！", "选择", MB_YESNO) == IDYES)
		system ("start ShouQi.xlsx"), F_ni(300, 200, 3);
	while (1)
	{
		if (MessageBox(NULL, "是否抽号？(5次)", "选择", MB_YESNO) == IDYES)
		{
			system ("start BuHuo.PNG"), Sleep(1000) , system ("start BanJi.xlsx");
			while (1)
				if (!F_ni(300, 200, 2))
				{
					e();
					break;
				}
		}
		else
		{
			if (MessageBox(NULL, "是否进行真心话大冒险?", "选择", MB_YESNO) == IDYES)
				ZXH();
			else
			{
				if (MessageBox(NULL, "是否进行抢数字游戏?", "选择", MB_YESNO) == IDYES)
					MessageBox(NULL, "Have a good time!", "再见", MB_OKCANCEL), system ("start QiangShuZiYouXi.docx");
				else
					MessageBox(NULL, "再见", "正在退出", MB_OK), e(), exit(0);
			}
		}
	}
	return 0;
}
