//3.Напишете програма, която изкарва колко пъти се среща всяка буква в низ

#include <iostream>

int main()
{
	char str[100];
	int count = 0;
	fgets(str, sizeof(str), stdin);

	int freq[26] = { 0 };
	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] == '\n' || str[i] == '\0')
		{
			break;
		}
		if (isalpha(str[i])) {
			int num = tolower(str[i]) - 'a';

			freq[num]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (freq[i] > 0) {
			printf("%c: %d", i + 'a', freq[i]);
			printf("\n");
		}
	}

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	if (str[i] == '\n' || str[i] == '\0')
	//	{
	//		break;
	//	}
	//	printf("%c:", str[i]);
	//	for (int j = 0; j < sizeof(str); j++)
	//	{
	//		if (str[i] == str[j])
	//		{
	//			count++;
	//		}
	//	}
	//	printf("%d", count);
	//	printf("\n");
	//	count = 0;
	//}
}