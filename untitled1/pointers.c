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
    int long long arr[] = {1, 2, 3, 4, 5, 6,88,8};
    int long long  *p = arr;

    int i = 0;
    int array_size = sizeof(arr)/ sizeof(arr[0]);

    printf("The size of arr: %d and it has %d elements!\n", sizeof(arr), sizeof(arr)/ sizeof(arr[0]));
    for (i; i < array_size; ++i) {
        printf("Index: %d; Value: %lld; Address: %p.\n", i, *(p + i), p + i);
    }
    return 0;
}