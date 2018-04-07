#include <iostream>
#include<windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

using namespace std;

int main()
{
	PlaySound(TEXT("C:\\Users\\acurt\\OneDrive\\source\\DDR\\rick.wav"), NULL, SND_FILENAME | SND_ASYNC);
	system("pause");
	return 0;
}