/***************************************************
*打印不同类型的数据所占用的内存大小
***************************************************/
#include"stdio.h"

int main(void)
{
    char c = 0;
    short s = 0;
    int i = 0;

    printf("%d, %d\n",sizeof(char),sizeof(c));
    printf("%d, %d\n",sizeof(short),sizeof(s));
    printf("%d, %d\n",sizeof(int),sizeof(i));
    exit(0);
}
