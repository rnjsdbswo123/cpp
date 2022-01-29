#include <stdio.h>

int main(void){
    int rank, m;
    rank = 2;
    m = 0;
    switch (rank)
    {
        case 1:
            m = 300;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 0;
            break;
        default:
            m = 0;
            break;
            
    }
    printf("%d", m);
    return 0;
    
}
