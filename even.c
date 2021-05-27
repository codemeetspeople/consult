#include <stdio.h>

// task even

int main() {
    int max;

    scanf("%d", &max);

    if ( max % 2 != 0 ) {
        max -= 1;
    }

    for ( int min = 0; min < max; min += 2 ) {
        printf("%d ", min);
    }
    printf("%d\n", max);

    return 0;
}
