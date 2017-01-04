#include <stdio.h>

int main()
{
    int tst, h, m, time;
    scanf("%d",&tst);
    while (tst--)
    {
        scanf("%d:%d",&h,&m);
        time = h*60 + m;
        if (time>720) time-=720;
        time = 720-time;

        h = (time/60);
        m = time%60;

        if (!h) h = 12;

        if (h<10)
            printf("0%d:",h);
        else
            printf("%d:",h);
        if (m<10)
            printf("0%d\n",m);
        else
            printf("%d\n",m);
    }
    return 0;
}
