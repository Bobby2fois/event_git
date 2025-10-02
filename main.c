#include "unistd.h"

int main()
{
    write(2, "test\n", 5);
    return 0;
}