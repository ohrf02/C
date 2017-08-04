//
// Created by ohrf02 on 8/3/2017.
//
#include <stdio.h>

struct point{
    char* name;
    int x;
    int y;
};

int main(){

    struct point point1 = {"point1", 4, 4};
    point1.name = "or";
    printf("%s, %d %d\n", point1.name, point1.x, point1.y);
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *p = arr;

    int i = 0;
    for (i; i < 6; ++i) {
        printf("Index: %d; Value: %d.\n", i, *(p + i));
    }
    return 0;
}