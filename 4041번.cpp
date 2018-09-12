#include <stdio.h>
#define SIZE 10

int write_data(char *in, int *d);
int read_data(char *out);

int main()
{
	char fname[30];
	int h, data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("Enter filename: ");
	scanf("%s", fname);
	
	write_data(fname, data);
	read_data(fname);
	
	return 0;
}

int write_data(char *in, int *d)
{
	int h;
	FILE *fp = fopen(in, "w");
	
	if(fp == NULL)
	{
		puts("파일 오픈에 실패하였습니다.");
		return -1;
	}

	for(h=0; h<SIZE; ++h)
	{
		fprintf(fp, "%d ", d[h]);
	}
	
	fclose(fp);
}

int read_data(char *out)
{
	char fd[] = {};
	FILE *fp = fopen(out, "r");
	if(fp==NULL)
	{
		puts("파일 오픈에 실패하였습니다.");
		return -1;
	}
	fscanf(fp, "%d[^\n]", fd);
	
	printf("%s", fd);
}
