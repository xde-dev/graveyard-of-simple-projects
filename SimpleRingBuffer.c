#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

struct buffer     // note: code was designed to be actually used by hardware
{
    unsigned char tail;
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char head;
};
struct buffer mainr;
unsigned char input;
void push() {
    printf("type in the input");
    scanf("%hhu", &input);
    if (mainr.tail == 0){
        mainr.tail = input;
    }
    else if (mainr.byte1 == 0){       // some spagetti code
        mainr.byte1 = input;
    }
    else if (mainr.byte2 == 0){
        mainr.byte2 = input;
    }
    else if (mainr.byte3 == 0){
        mainr.byte3 = input;
    }
    else if (mainr.byte4 == 0){
        mainr.byte4 = input;
    }
    else if (mainr.byte5 == 0){
        mainr.byte5 = input;
    }
    else if (mainr.byte6 == 0){
        mainr.byte6 = input;
    }
    else if (mainr.head == 0){
        mainr.head = input;
    }
    else {
        mainr.head = mainr.tail;
        mainr.tail = input;
    }
}
int main(){
    push();
}