#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("File : %s\n",__FILE__);
    printf("Date : %s\n",__DATE__);
    printf("Time : %s\n",__TIME__);
    printf("Line : %d\n",__LINE__);
    printf("STDC : %d",__STDC__);
    return 0;
}
