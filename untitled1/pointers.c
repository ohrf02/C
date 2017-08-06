//
// Created by ohrf02 on 8/3/2017.
//
#include <stdio.h>

int main(int argc, char *argv[]) {

    int i;
    for (i = 0; i < argc ; ++i) {
        printf("%s\n", argv[i]);
    }

    return 0;

}
