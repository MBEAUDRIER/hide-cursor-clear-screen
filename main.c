#include <stdio.h>

int main()
{
    hidecursor();
    return 0;
}

void hidecursor(void)
{
    printf("\e[?25l");
    fflush(stdout);
    return 0;
}
