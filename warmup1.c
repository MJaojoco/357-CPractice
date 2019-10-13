#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>
#define two(a) (a * x)


int main(){
    int x = 6;
    int A = 2;
    int B = -1;
    char *cp = "abcdefg";
    int grade[5] = {4, 3, 2, 1, 0 };

    printf(" 3 / 6 = %d\n", 3/6);
    printf(" A + B = %d\n", A + B);
    printf(" +A++ + ++B = %d\n", +A++ + ++B);
    printf(" grade[2] = %d\n ", grade[2] );
    printf(" *(cp + 4) = %d\n  ", *(cp + 4) );
    printf(" &grade[4] - &grade[0] = %d\n ", &grade[4] - &grade[0]);
    printf(" (int)&grade[4] - (int)&grade[2] = %d\n ", (int)&grade[4] - (int)&grade[0]);
    printf(" (A!=A)?A:B = %d\n ", (A!=A)?A:B);
    printf(" strlen(cp) = %d\n ", strlen(cp));
    printf(" sizeof(grade) = %d\n ", sizeof(grade));
    printf(" strlen((char*)(&grade[3])) = %d\n)", strlen((char*)(&grade[3])));

    printf(" Problem 9: two(2 + 2) = %d\n", two(2 + 2));
    printf(" Problem 9 (another way) two( (2+2)) = %d\n", two((2+2)));



    return 0;

}
