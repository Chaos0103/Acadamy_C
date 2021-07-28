#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;

}Point;
int main()
{
	Point pos1 = { 10,20 };
	Point pos2 = { 30,40 };

	printf("(%d, %d)\n", (pos1.xpos + pos2.xpos) / 2, (pos1.ypos + pos2.ypos) / 2);

	return 0;
}
