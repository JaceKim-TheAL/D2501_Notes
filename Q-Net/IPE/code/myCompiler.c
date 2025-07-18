// https://www.mycompiler.io/ko/new/c
// myCompiler.c

#include <stdio.h>

struct p {
	int* x;
	int* y;
};

int main() {
    printf("C Practice \n");
    printf("===========\n");
    
    int a = 5;
    int b = 4;
    struct p p1;
    p1.x = &a;
    p1.y = &b;
    
    printf("%d %d\n", a, b);
    printf("%d %d\n", *p1.x, *p1.y);

    
    // printf("===========\n");
    // int a = 10, b = 20, c = 30;
    // int* p[3] = {&a,&b,&c};
    // printf("%d\n", *p[0]);
    // printf("%d\n", *p[1]);
    // printf("%d\n", *p[2]);
    // printf("%d\n", **(p+0));
    // printf("%d\n", **(p+1));
    // printf("%d\n", **(p+2));

    
    // printf("===========\n");
    // int a = 10;
    // double b = 3.14;
    // char c = 'A';
    
    // printf("int a의 크기: %zu 바이트\n", sizeof(a));
    // printf("double b의 크기: %zu 바이트\n", sizeof(b));
    // printf("char c의 크기: %zu 바이트\n", sizeof(c));
    // printf("int 자료형의 크기: %zu 바이트\n", sizeof(int));
    // printf("수식 (a + b)의 크기: %zu 바이트\n", sizeof(a + b));  // double로 형변환됨
    
    
    // int array[2][3] = { 10,20,30,40,50,60 };
    
    // for (int i = 0; i < 2; i++) {         // 행 반복
    //     for (int j = 0; j < 3; j++) {     // 열 반복
    //         printf("array[%d][%d] = %d\n", i, j, array[i][j]);
    //     }
    // }
    
    // printf("%zu\n", sizeof(array));
    // printf("%zu\n", sizeof(array[0]+0));
    // printf("%zu\n", sizeof(*(array + 0)));
    // printf("%zu\n", sizeof( & array[0][0])); 
 
	// printf("%d\n", sizeof(array));
	// printf("%d\n", sizeof(array[0]+0));
	// printf("%d\n", sizeof(*(array + 0)));
	// printf("%d\n", sizeof( & array[0][0])); 
    
}

