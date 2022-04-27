#include <stdio.h>
#define SIZE 5

void print_image(int image[SIZE][SIZE]) // 픽셀 값 출력
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%-3d ",image[i][j]);
		}
		printf("\n");
	}
}
void brighten_image(int image[SIZE][SIZE]) // 픽셀 밝기 10 증가, 포인터로 2차원 배열 접근
{
	int* p = &image[0][0];
	for (int i = 0; i < SIZE*SIZE; i++)
	{
			*(p+i) += 10;
	}
}
 


int main()
{
	int image[SIZE][SIZE] = {
		{10,20,30,40,50},
		{60,70,80,90,100},
		{110,120,130,140,150},
		{160,170,180,190,200},
		{210,220,230,240,250} };

	printf("원본 픽셀 값===========\n");
	print_image(image);
	brighten_image(image);
	printf("수정 후 픽셀 값=========\n");
	print_image(image);
	return 0;
}
