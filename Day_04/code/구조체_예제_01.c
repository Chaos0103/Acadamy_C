#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};
int main()
{
	struct point pos;
	pos.xpos = 20;
	pos.ypos = 30;

	printf("xpos : %d\n", pos.xpos);
	printf("ypos : %d\n", pos.ypos);

	return 0;
}
