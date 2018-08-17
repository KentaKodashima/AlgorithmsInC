/* ************************************ */
/*                                      */
/* vc_atoi.c                            */
/*                                      */
/* By: Natsumi, Kenta, Juan             */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_atoi(char *str)
{
    int rint = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        rint = str[i] - '0';
    }
    return rint;
}

int main(int argc, char const *argv[])
{
    char arr[] = "Hello";
    char *p;
    p = arr;
    printf("%d\n", vc_atoi(p));
    /* code */
    return 0;
}
