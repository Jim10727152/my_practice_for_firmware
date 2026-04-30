#include <stdio.h>


#define SET_BIT(val, n) ((val) |= 1U << (n))
#define CLR_BIT(val, n) ((val) &= ~(1U << (n)))
#define GET_BIT(val, n) ((val)>>(n) & 1)



int main()
{
    int val = 4;
    SET_BIT(val, 1);
    CLR_BIT(val, 2);
    printf("%d\n", val);
    printf("%d", GET_BIT(val,3));
    return 0;
}
