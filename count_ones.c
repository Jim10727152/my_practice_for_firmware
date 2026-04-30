#include <stdio.h>
#include <stdint.h>

int count_ones(uint32_t n) {
    int count = 0;
    while (n > 0) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main() {
    uint32_t x = 15;
    printf("The number of one in x is %d", count_ones(x));
}
