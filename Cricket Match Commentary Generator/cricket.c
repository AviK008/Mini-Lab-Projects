#include <stdio.h>
int main(){
    int runs[11];
    int i;
    int total = 0;

    printf("Enter The Runs Scored By 11 Players:\n");

    for(i = 0; i < 11; i++){      // Input runs for each player
        scanf("%d", &runs[i]);
    }

    for(i = 0; i < 11; i++){      // Generate commentary
        total += runs[i];

        if(runs[i] == 0){
            printf("Player %d: OUT FOR A DUCK!\n", i + 1);
        }
        else if(runs[i] > 0 && runs[i] < 30){
            printf("Player %d: Scored %d runs - a decent contribution.\n", i + 1, runs[i]);
        }
        else if(runs[i] >= 30 && runs[i] < 50){
            printf("Player %d: Solid knock of %d runs!\n", i + 1, runs[i]);
        }
        else if(runs[i] >= 50 && runs[i] < 100){
            printf("Player %d: HALF-CENTURY! %d runs\n", i + 1, runs[i]);
        }
        else if(runs[i] >= 100){
            printf("Player %d: CENTURY!! What an innings - %d runs!\n", i + 1, runs[i]);
        }
    }

    printf("\n===== MATCH SUMMARY =====\n");    // Match summary
    printf("Total Team Score: %d\n", total);
    return 0;
}

    