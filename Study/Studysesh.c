#include <stdio.h>
#include <string.h>

int main ()
{
    char nationality[50], filipino[50] = "Filipino", sex[10], sex1[10] = "Male", sex2[10] = "Female";
    int yrlvl, sf = 200, total,answer, sexf, sexm, final;
    
    printf("Enter Nationality: ");  
    fgets(nationality, 50, stdin);
    nationality[strlen(nationality)-1] = 0;

    printf("Enter Sex: ");  
    fgets(sex, 10, stdin);
    sex[strlen(sex)-1] = 0;

    printf("Enter Year level: ");
    scanf("%d", &yrlvl);

    answer = strcmp(nationality,filipino);

    if (answer == 0){
        total = sf + 0;
    }else {
        total = sf + 200;
    }

    if(strcmp(sex, sex1) == 0 && yrlvl == 4){
        printf("Total: %d", final, final = total + 100);
    } else if (strcmp(sex, sex2) == 0 && yrlvl == 2){
        printf("Total: %d", final, final = total + 75);
    } else {
        printf("Total: %d", total);
    }

    return 0;
}
