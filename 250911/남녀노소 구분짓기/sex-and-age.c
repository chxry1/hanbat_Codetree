#include <stdio.h>

int main() {
    // Please write your code here.
    int age, sex;
    scanf("%d", &sex);
    scanf("%d", &age);
    if ( age >= 19 ) { //성인
        if ( sex == 0 ) { printf("MAN"); }
        else { printf("WOMAN");}
    }
    else {
        if ( sex == 0 ) { printf("BOY");}
        else { printf("GIRL");}
    }
    return 0;
}