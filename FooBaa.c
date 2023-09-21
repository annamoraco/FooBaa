#include <stdio.h>

int ismultipleof3(int i){
    return i%3 == 0;
}

int ismultipleof5(int i){
    return i%5 == 0;
}

int main()
{
    int i=1;

    while (i<=100)
    {
        if(ismultipleof3(i) && ismultipleof5(i))
        printf("\nFooBaa");

        else if(ismultipleof3(i))
        printf("\nFoo");

        else if(ismultipleof5(i))
        printf("\nBaa");

        else
        printf("\n%d",i);

        i++;
    }
}
