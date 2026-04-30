#include <stdio.h>
#include <stdint.h>


typedef struct{
    short s;
    int n;
    char c;
} sT1;

typedef struct{
    int n;
    short s;
    char c;
} sT2;

#pragma pack(1)

typedef struct{
    int n;
    short s;
    char c;
} sT3;

int main()
{
    sT1 newST_1;
    sT2 newST_2;
    sT3 newST_3;
    printf("size of newST_1 is %d\n", sizeof(newST_1));
    printf("size of newST_2 is %d\n", sizeof(newST_2));
    printf("size of newST_3 is %d\n", sizeof(newST_3));
}
