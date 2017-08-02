#include <stdio.h>
#include <string.h>

enum Days{
    sun,
    mun,
    tus
};

int main()
{
    enum Days day = tus;
    printf("%d", day);
    return 0;
}