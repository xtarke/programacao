#include <stdio.h>

union char_and_ascii
{
    char ch;
    unsigned short ascii_val;
};

int main (void)
{
    union char_and_ascii obj;
    obj.ascii_val = 0;

    obj.ch = 'A';

    printf("\n character = [%c], ascii_value = [%u]\n", obj.ch, obj.ascii_val);

    return 0;
}
 
