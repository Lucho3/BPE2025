//2.Напишете програма, която намира броя на думите в низ


#include <iostream>

int main()
{
	char str[100];
	int count = 0;
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}

	}
	if (str[0] == ' ')
	{
		count = count - 1;
	}
	if (str[strlen(str) - 2] == ' ')
	{
		count = count - 1;
	}
	printf("%d", count + 1);

}
