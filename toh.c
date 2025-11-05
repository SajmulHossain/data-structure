#include<stdio.h>
int i = 1;

void toh(int n, char beg, char aux, char end) {
    if(n < 1) {
        return;
    }

    toh(n-1, beg, end, aux);
    printf("%d. Disc %d moved from %d to %d", i, n, beg, end);

    if(n == 1) {
        return;
    }

    toh(n-1, aux, beg, end);
}

int main() {
    int n;
    printf("Enter the number of disc");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');

    return 0;
}