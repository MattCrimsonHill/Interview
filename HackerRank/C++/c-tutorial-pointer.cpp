#include <stdio.h>
void update(int *a,int *b) {
    int sum = *a + *b; int difference = *a - *b > 0? difference = *a - *b: -(*a - *b); *a = sum; *b = difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b; scanf("%d %d", &a, &b); update(pa, pb); printf("%d\n%d", a, b); return 0;
}


