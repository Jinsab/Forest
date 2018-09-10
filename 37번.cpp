#include <stdio.h>

int main()
{
	int ch, cnt=0;
	FILE *fp_a = fopen("C:\\Users\\DSM2018\\Documents\\a.txt", "r");
	FILE *fp_b = fopen("C:\\Users\\DSM2018\\\Documents\\b.txt", "w");
	
	if(fp_a == NULL || fp_b == NULL)
	{
		printf("파일 오픈에 실패하였습니다.\n");
		return -1;
	}
	
	while( (ch = fgetc(fp_a)) != EOF)
	{
		if(ch>= 'a' && ch<= 'z')
		{
			ch += 'A'-'a';
		}
			
		if(ch == 'H')
		{
			cnt++;
		}
		fputc(ch, fp_b);
	}
	
	fprintf(fp_b, " cnt = %d", cnt);
	
	fclose(fp_a);
	fclose(fp_b);
	
	return 0;
}
