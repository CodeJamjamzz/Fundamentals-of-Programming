#include <stdio.h>
#include <string.h>

int main()
{
    char questions[][100] = {"1. Kanusa birthday nako?", "2. Asa ko ga puyo?", "3. Unsa ako zodiac?"};

    char options[][500] = {"A. June 27", "B. June 28", "C. June 19", "D. June 15",
                            "A. Toledo", "B. SA imong heart", "C. Sa heart niya", "D. sa heart nato tanan",
                            "A. Cancer", "B. Asthma", "C. Aries", "D. sagi"};

    char answer[3] = {'A','B','A'};

    char guess;
    int score, numberofquestions = sizeof(questions)/sizeof(questions[0]);

    for (int i = 0; i < numberofquestions; i++){
        printf("\n--------------------\n");
        printf("%s", questions[i]);
        printf("\n--------------------\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++){
            printf("%s\n", options[j]);
        }

    printf("Answer: ");
    scanf("%c%*c", &guess); // diri jud ang sayup ayy atay 

    if (guess == answer[i]){
        printf("Correct");
        score++;
    }
    else {
        printf("Wrong");
    }
    
    }
}