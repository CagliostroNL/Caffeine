#include <Windows.h>
#include <stdio.h>
#pragma comment(lib, "kernel32.lib")

int main(int argc, char const *argv[])
{
	char str[] = "System is on caffeine";
	SetThreadExecutionState(ES_CONTINUOUS | ES_DISPLAY_REQUIRED);
	printf("%s", str);
	for(;;){
		Sleep(30000);
	};

	return 0;
}