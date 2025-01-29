#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../ostep-code/intro/common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string> \n");
        exit(1);
    }

    int *p;
    p = malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) addr pointed to by p: %p \n", (int) getpid(), p);
    *p = atoi(argv[1]); // assign value to addr stored in p

    while (1) {
        Spin(1);
        *p = *p + 1;
        printf("(%d) value of p: %d \n", (int) getpid(), *p);
    }

    return 0;
}
