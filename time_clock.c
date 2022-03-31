#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d = 1000; // we add delay of 1000 millisecond (1 sec) and we will use it in sleep function.
    printf("enter the time\n");
    printf("hour: ");
    scanf("%d", &h);
    printf("minute: ");
    scanf("%d", &m);
    printf("second: ");
    scanf("%d", &s);

    if (h > 12 || m > 59 || s > 59)
    {
        printf("ERROR !");
        exit(0); // this function ends the program at this line.       (funtion)
    }

    while (1)
    { // this is infinite while loop
        s++;

        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }

        printf("\n Clock ");
        printf("\n %02d:%02d:%02d", h, m, s); // this writes our time in the format 00:00:00

        Sleep(d);      // the function sleep slows down the infinite while loop and make it more like a real clock.  or simply Sleep(1000);     (function)
        system("cls"); // this clears the screen whichh means clears the previous time which was printed inside this loop.      (function)
    }

    return 0;
}