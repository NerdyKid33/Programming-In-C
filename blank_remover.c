#include <stdio.h>
#include <stdbool.h>
int main() {
    char userString[200];
    printf("Type the string you want to remove the blanks from: \n");
    fgets(userString, sizeof(userString), stdin);
    bool inChunk = false;
    printf("This is your string with the blanks removed: \n");
    for (int i = 0; userString[i]!='\0'; i++){
        if (userString[i]!=' '){
            inChunk = false;
        }
        if (inChunk==false){
            printf("%c", userString[i]);
            
        }
        if (userString[i]==' '){
            inChunk = true;
        }
    }

}
