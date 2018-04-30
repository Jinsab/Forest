#include <stdio.h>

/*
union student 
{
	int id;
	int no;
} s1;

int main(void)
{
	scanf("%d", &s1.id);
	printf("%d %d\n", s1.id, s1.no);
	scanf("%d", &s1.no);
	printf("%d %d\n", s1.id, s1.no);
	
	return 0;
}*/

union ip_addr 
{
	unsigned int addr;
	unsigned char saddr[4];	
} ip;
int main(void)
{
	printf("0x");
	scanf("%x", &ip.addr);
	printf("%d.%d.%d.%d\n", ip.saddr[3], ip.saddr[2], ip.saddr[1], ip.saddr[0]);
	
	return 0;
}
