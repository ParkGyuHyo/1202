#include<stdio.h>
#define SIZE 10

int main()
{
	int key, i
	int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);
	
	for (i=0; i<SIZE; i++)
		if(list[i] == key)
			break;
		
	if (i < SIZE)	
		printf("탑색 성공 배열에 %d가 있습니다.\n", list[i]);
	else
		printf("탑색 성공 배열에 %d가 없습니다.\n", key);

	return 0;
}
