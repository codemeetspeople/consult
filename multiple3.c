#include <stdio.h>

#define DIVISOR 5

int main() {
    int limit;

    scanf("%d", &limit);

    if ( limit % DIVISOR != 0 ) {
        limit -= limit % DIVISOR;
    }

    for ( int min = 0; min < limit; min += DIVISOR ) {
        printf("%d ", min);
    }
    printf("%d\n", limit);

    return 0;
}
