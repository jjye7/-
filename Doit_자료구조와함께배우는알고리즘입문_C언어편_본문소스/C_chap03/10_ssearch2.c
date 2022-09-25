/* 선형 검색 */
#include <stdio.h> 
#include <stdlib.h> 

/*--- 요솟수 n인 배열 a에서 key와 같은 요소를 선형 검색 (버전 2: for문) ---*/
int search(const int a[], int n, int key)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == key)
			return i;	/* 검색 성공 */

	return -1;			/* 검색 실패 */
}

int main(void)
{
	int i, nx, ky, idx;
	int *x; /* 배열의 첫 번째 요소에 대한 포인터 */

	puts("선형 검색");
	printf("요솟수 :");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); /* 요솟수 nx인 int형 배열을 생성 */

	for (i = 0; i < nx; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	printf("검색값 :");
	scanf("%d", &ky);

	idx = search(x, nx, ky);	/* 배열 x의 값이 ky 인 요소를 선형 검색 */

	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는 x[%d]에 있습니다.\n", ky, idx);

	free(x);					/* 배열을 삭제 */

	return 0;
}