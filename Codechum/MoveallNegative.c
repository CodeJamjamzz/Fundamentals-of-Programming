#include <stdio.h>

int main (){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, a = 1, temp = 0, b = 0;

    for(int i = 0; i < 10; i++){
        if(i == 8){
            temp = array[i];
            //array[i] *= 0;

                for(int j = i; j >= a; j--){
                    array[j] = array[j-1];
                    
                    //array[a] = array[a-1];
    
                }
            array[a] = temp;
            a++;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
}