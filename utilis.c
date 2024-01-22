#include "push_swap.h"

int ft_atoi(char *str)
{
    int i = 0;
    int r = 0;
    int s = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        s *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10;
        r = r + (str[i] - 48);
        i++;
    }
    return (r * s);
}