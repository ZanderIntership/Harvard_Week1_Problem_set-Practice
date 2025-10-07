
#include <stdio.h>
#include <cs50.h>

int main(void){

    string Name = get_string("What is your name? ");
    int Age = get_int("What is your age? ");
    string Number = get_string("What is your phone number? ");
    printf("\n\nName :  %s\nAge : %i\nPhone Number : %s\n",Name,Age,Number);

}
