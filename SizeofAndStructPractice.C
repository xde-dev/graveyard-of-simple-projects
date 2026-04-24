#include <stdio.h>
#include <stdbool.h>
int main(){
    struct Variable{
        char letter;
        int number;
        bool Bool;
        double Number;
        float numbers;
        size_t sizeofletter;
        size_t sizeofnumber;
        size_t sizeofBool;
        size_t sizeofNumber;
        size_t sizeofnumbers;
    };
        struct Variable Vaules;
        Vaules.letter='a';
        Vaules.number=1234;
        Vaules.Bool=true;
        Vaules.Number=1.0;
        Vaules.numbers=1.234;
        Vaules.sizeofletter=sizeof(Vaules.letter);
        Vaules.sizeofnumber=sizeof(Vaules.number);
        Vaules.sizeofBool=sizeof(Vaules.Bool);
        Vaules.sizeofNumber=sizeof(Vaules.Number);
        Vaules.sizeofnumbers=sizeof(Vaules.numbers);
        printf("The char is %c        The size of it is %zu bytes\nThe int is %d        The size of it is %zu bytes\nThe bool is %d          Size of it is %zu bytes\nThe Double is %f       The size of it is %zu bytes bytes\nThe float is %f         The size of it is %zu bytes\n\n Input anything to exit...>",Vaules.letter, Vaules.sizeofletter, Vaules.number, Vaules.sizeofnumber,Vaules.Bool,Vaules.sizeofBool, Vaules.Number,Vaules.sizeofNumber, Vaules.numbers, Vaules.sizeofnumbers);
        getchar();
        return 0;
    }       