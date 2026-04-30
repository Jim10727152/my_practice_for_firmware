#include <stdio.h>
#include <stdint.h>

#define SET_BIT(val, n) ((val) |= 1U << (n))
#define CLR_BIT(val, n) ((val) &= ~(1U << (n)))
#define GET_BIT(val, n) ((val)>>(n) & 1U)


uint32_t modify_bits(uint32_t data, int start, int len, uint32_t new_val) {
    for(int i = 0; i < len; i++) {
        if(GET_BIT(new_val, i)) {
            SET_BIT(data, start+i);
        } // if
        else {
            CLR_BIT(data, start+i);
        } // else
    } // for
    return data;
}

int main()
{
    uint32_t val = 4;
    SET_BIT(val, 1);
    CLR_BIT(val, 2);
    printf("%d\n", val);
    printf("%d\n", GET_BIT(val,3));
    
    uint32_t data = 12;
    uint32_t new_val = 3;
    uint32_t test;
    test = modify_bits(data, 0, 2, new_val);
    printf("test is :%d", test);
    
    return 0;
}
