#include <iostream>
#include <string.h>
using namespace std;
char temp[] = "X1t`E1toc`Em3H^\"N@gSPFeaHA^I";
bool checkPass(char s[])
{
	for (int i = 0; i < 16; i++)
	{
		if (i % 2 == 0)
		{
			temp[i] = temp[i] + 1;
		}
		else
		{
			temp[i] = temp[i] - 1;
		}
	}

	temp[16] = '_';
	temp[16 + 2] = 'x';
	temp[16 + 1] = '0';

	for (int i = 19; i < strlen(temp); i++)
	{
		if (temp[i] <= 0x49 && temp[i] >= 0x40)
		{
			temp[i] -= 0x10;
		}
		else temp[i] += 17;
	}

	if (strcmp(s, temp) == 0)
	{
		return true;
	}
	else return false;
}
int main()
{
	printf("The room is locked with password.");
	int n = strlen(temp) + 1;
	char s[100];
	printf("\nEnter password: ");
	fgets(s, n, stdin);

	if (checkPass(s))
	{
		printf("\ncongratulations!\nThe room was open, Flag is: ChristCTF{");
		for (int i = 0; i < n - 1; i++)
		{
			printf("%c", s[i]);
		}
		printf("}\n");
	}
	else
		printf("\nWrong! Retry!\n");

	system("pause");
}
