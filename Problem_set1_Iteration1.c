#include <stdio.h>
#include <cs50.h>
void Triangle(void);

int main(void){

    Triangle();

}

void Triangle(void)
{
    string symbole= "#";
    int Counter = 1;
    for ( int I = 0; I < 5;I++){
        for (int J = 0; J < Counter;J++){
          printf("%s",symbole);
        }
        printf("\n");
        Counter++;
    }
}
