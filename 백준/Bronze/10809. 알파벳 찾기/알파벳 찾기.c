#include<stdio.h>
#pragma warning(disable: 6031)

int main(void)
{
	char word[101];
	scanf("%s", word);
	int ary[26];
	for (int n = 0; n < 26; n++)
	{
	    ary[n] = -1;
	}
	for (int i = 0; i < 101; i++)
	{
		if (word[i] == '\0')
		{
			break;
		}
		for (int k = 0; k < 26; k++)
		{
			if (ary[k] != -1)
			{
				continue;
			}
		    else if (word[i] == k+97)
			{
				ary[k] = i;
				break;
			}
		}

	}
	for (int result = 0; result < 26; result++)
	{
		printf("%d ", ary[result]);
	}
	return 0;
}