#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char word[50];
    int alpha = 0;

    printf("Word: ");
    fgets(word, sizeof(word), stdin);

    for(int i = 0; i < strlen(word); i++){
        if(isalpha(word[i]) == 0){
            // switch(word[i]){
            //     case 'a':
            //     word[i] = '6';
            //     break;

            if (word[i] == 'a'){
                word[i] = '6';
                }
            }

            alpha++;
    } 
    

    if (alpha == 0){
        printf("word");
    } else {
        printf("%s", word);
    }
}