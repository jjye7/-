/* qsort 함수를 사용하여 정수 배열의 요소를 내림차순으로 정렬 */
#include <stdio.h> 
#include <stdlib.h> 

/*--- int 형 비교 함수(내림차순 정렬용) ---*/
int int_cmpr(const int * a, const int * b)
{
	if (*a < *b)
		return 1;
	else if (*a > * b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int i, nx;
	int * x; /* 배열의 첫 번째 요소에 대한 포인터 */

	printf("qsort에 의한 정렬\n");
	printf("요소수 :");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); /* 요소수 nx인 int 형 배열을 생성 */

	for (i = 0; i < nx; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}

	qsort(x,												/* 배열 */
	    nx,													/* 요소수 */
		sizeof(int),										/* 요소의 크기 */
		(int (*)(const void *, const void *)) int_cmpr		/* 비교 함수 */
	);

	puts("내림차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); /* 배열을 삭제 */

	return 0;
}