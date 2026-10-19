#include <stdio.h>
int main(void)
{
    int a = 10;
    float b = 3.14;
    double c = 2.71828;
    char ch = 'A';

    printf("a=%d\n",a);
    printf("b=%f\n",b);
    printf("c=%lf\n",c);
    printf("ch=%c\n",ch);
    //打印各类型占用字节
    printf("int:%ld byte\n",sizeof(int));
    printf("float:%ld byte\n",sizeof(float));
    printf("double:%ld byte\n",sizeof(double));
    printf("char:%ld byte\n",sizeof(char));
    return 0;
}