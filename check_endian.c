#include <stdio.h>
#include <stdint.h>


int main()
{
    uint32_t num = 0x12345678;
    uint8_t *p = (uint8_t *)&num;
    
    printf("0x%02X\n", *p);
    
    if(*p == 0x12) 
        printf("Big endian\n");
    else 
        printf("little endian\n");
    
    return 0;
}
