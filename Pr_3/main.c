#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


int word_model();
{
	wchar_t str1[200];
	wchar_t str2[200];
	int scores[] = { 4,1,6,8 };
	int score1 = 0;
	int score2 = 0;

	scanf_s("%ls\n", str1);
	scanf_s("%ls\n", str2);
	int h = 0;
	while (str1[h] != NULL) {
		score1 += scores[(int)str1[h] - 1072];
		h++;
	}

	h = 0;
	while (str2[h] != NULL) {
		score2 += scores[(int)str2[h] - 1072];
		h++;
	}
	printf("Score1 %d\n", score1);
	printf("Score1 %ls\n", str1);

	printf("Score2 %d\n", score2);
	printf("Score2 %ls\n", str2);

	return 0;
}
