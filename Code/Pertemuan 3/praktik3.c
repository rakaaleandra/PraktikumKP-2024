#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, M;

    scanf("%d %d", &N, &M);

    printf("masing-masing %d\n", N / M);
    printf("bersisa %d\n", N % M);

    return 0;
}
