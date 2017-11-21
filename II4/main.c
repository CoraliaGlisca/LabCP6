#include <stdio.h>
#include <stdlib.h>

int i, n;
float *data;

main()
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    data = (float*) calloc(n, sizeof(float));

    if(data == NULL)
    {
        printf("Error!!! memory not allocated.");
    }

    printf("\n");

    for(i = 0; i < n; i++)
    {
       printf("Enter Number %d: ", i + 1);
       scanf("%f", data + i);
    }

    for(i = 1; i < n; i++)
    {
       if(*data < *(data + i))
           *data = *(data + i);
    }

    printf("Largest element = %.2f", *data);

    return 0;
}
