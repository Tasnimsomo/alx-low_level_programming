#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c);

int main(void)
{
        int c;
        c = 'l';
        printf("%c is%s a digit \n", c, _isdigit(c) ? "" : " not");
        return (0);
}


int _isdigit(int c)
{
        if(c >= '0' && c <= '9')
        {
            return (1);
        }
        else
        {
            return (0);
        }
}
