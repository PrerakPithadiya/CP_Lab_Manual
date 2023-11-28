#include <stdio.h>
int main()
{
    int counter=1;
    int n=20;
    START:
    printf("%d ",counter);
    counter++;
    if(counter<=n)
        goto START;
    return 0;
}

