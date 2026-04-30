#include <stdio.h>
#include <stdint.h>

#define REG32(addr) (*(uint32_t *) addr)


int main()
{
    uint8_t fake_reg[4];
    REG32(fake_reg) = 0x12345678;
    
    printf("reg = 0x%08X\n", REG32(fake_reg));

    printf("fake_reg[0] = 0x%02X\n", fake_reg[0]);
    printf("fake_reg[1] = 0x%02X\n", fake_reg[1]);
    printf("fake_reg[2] = 0x%02X\n", fake_reg[2]);
    printf("fake_reg[3] = 0x%02X\n", fake_reg[3]);
    
    return 0;
}
