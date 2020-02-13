#include <stdio.h>
#include <stdbool.h>

int main() 
{
    bool a = true, b = true;
    ((a == b) && printf("AND rvalue\n"));
    ((a == b) || printf("OR curto-circuito\n"));
    
    a = false;
    
    ((a == b) && printf("AND curto-circuito\n"));
    ((a == b) || printf("OR rvalue\n"));
    
    return 0;

}


