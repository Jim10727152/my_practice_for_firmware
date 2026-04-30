#include <stdio.h>
#include <stdint.h>

typedef union {
    uint32_t value;   // 4 bytes

    struct {
        uint32_t enable : 1;
        uint32_t mode   : 2;
        uint32_t status : 5;
        uint32_t reserved : 24;
    } bits;

} CTRL_REG;


int main(void) {
    CTRL_REG reg = {0};

    // 設定整個 register
    reg.value = 0x00000000;

    // 用欄位方式設定
    reg.bits.enable = 1;
    reg.bits.mode = 3;     // 2 bits 最大 0~3
    reg.bits.status = 17;  // 5 bits 最大 0~31
    reg.bits.reserved = 100;

    printf("reg value = 0x%08X\n", reg.value);

    printf("enable = %u\n", reg.bits.enable);
    printf("mode   = %u\n", reg.bits.mode);
    printf("status = %u\n", reg.bits.status);
    printf("reserved    = %u\n", reg.bits.reserved);

    return 0;
}
