#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void){

    int Melti[5] = {};
    int WhatIsTheStartingNum = get_int("What do you want as your staring value : ");
    Melti[0] = WhatIsTheStartingNum;
    //printf("%i\n",Melti[0]);
    for (int I = 1; I < 6; I++){
        Melti[I] = WhatIsTheStartingNum;
        printf("%i\n",Melti[I]);
        WhatIsTheStartingNum = WhatIsTheStartingNum * 2;
    }

}
