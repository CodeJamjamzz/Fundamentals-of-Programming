#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main (){

    char v1[100] = "Palad ay basang-basa", 
    v2[100] = "Ang dagitab ay damang-dama",
    v3[100] = "Sa 'king kalamnang punong-puno",
    v4[100] = "Ng pananabik at ng kaba",
    v7[100] = "Naglakad ka....";

    for(int i = 0; i < 100; i++){
        printf("%c", v1[i]);
         usleep(50000);
    }
    printf("\n");
    for(int i = 0; i < 100; i++){
        printf("%c", v2[i]); 
        usleep(50000);
    }
    
    
  

}