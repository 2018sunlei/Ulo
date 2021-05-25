#include <stdio.h>
#include <time.h>

long long GetTickCount(void)
{
    long long time_count;

    time_count = time((time_t *)NULL);
    return time_count;
}


