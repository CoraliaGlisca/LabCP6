#include <stdio.h>
#include <string.h>

int totalSec,hour,minute,second;

int split_time(long int total_sec, int *hr, int *min, int *sec);

int main()
{
    printf("Enter total sec=");
    scanf("%d", &totalSec);

    split_time(totalSec,&hour,&minute,&second);

    printf("H: %d, min: %d, sec: %d ", hour, minute, second);
    return 0;
}

int split_time(long int total_sec, int *hr, int *min, int *sec)
{
    int t;
    *hr = total_sec/3600;
    t = total_sec%3600;
    *min = t/60;
    *sec = t%60;
}
