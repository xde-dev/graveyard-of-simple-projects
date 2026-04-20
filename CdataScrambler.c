#include <stdio.h>
int main(){
    char PressToExitVariable[5];
    printf("Choose operation\n 1. encrypt number\n 2. decrypt number\n\nChoose...>");
    int MenuChoise=0;
    scanf("%d", &MenuChoise);
    if (MenuChoise==1){
        int NumberInput=0;
        printf("Enter the number...>");
        scanf("%d", &NumberInput);
        NumberInput=NumberInput<<3; //shift bytes to scramble data, it wont work on large numbers
        printf("Done! encrypted data: %d\n Type and enter any text to exit", NumberInput);
        scanf("%s", &PressToExitVariable);
    }
    if (MenuChoise==2){
        int NumberInput=0;
        printf("Enter the number to decrypt...>");
        scanf("%d", &NumberInput);
        NumberInput=NumberInput>>3;// shift bits back to original number
        printf("Done! decrypted data: %d\n Type and enter any text to exit", NumberInput);
        scanf("%s", PressToExitVariable);
    }
    return 0;
}
