#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
	FILE* fp;
	fp = fopen("5 player.txt", "w");
	int i;
	struct player {
		char name[50];
		int level;
		int score;
	};
	player p[10];
	for (i = 0; i < 5; i++) {
		strcpy(p[i].name, "Anonymous");
		p[i].level = i;
		p[i].score = i * 100;
	}
	for (i = 0; i < 5; i++) {
		fprintf(fp,"name : %s\t", p[i].name);
		fprintf(fp,"level : %d\t", p[i].level);
		fprintf(fp,"score : %d\n", p[i].score);
	}
	fclose(fp);
	return 0;
}