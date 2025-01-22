
#include <stdio.h>
#include <stdlib.h>

struct StatAdv {
    int runAgainstSpin;
    int ballAgainstSpin;
    int runAgainstPace;
    int ballAgainstPace;
    float avgAgainstSpin;
    float avgAgainstPace;
    int runsInLong;
    int runsInOff;
};

void inputBatsmanData(struct StatAdv *batsman) {
    printf("\nEnter runs against spin: ");
    scanf("%d", &batsman->runAgainstSpin);
    printf("Enter balls faced against spin: ");
    scanf("%d", &batsman->ballAgainstSpin);
    printf("Enter runs against pace: ");
    scanf("%d", &batsman->runAgainstPace);
    printf("Enter balls faced against pace: ");
    scanf("%d", &batsman->ballAgainstPace);
    printf("Enter average against spin: ");
    scanf("%f", &batsman->avgAgainstSpin);
    printf("Enter average against pace: ");
    scanf("%f", &batsman->avgAgainstPace);
    printf("Enter runs scored on the long side: ");
    scanf("%d", &batsman->runsInLong);
    printf("Enter runs scored on the off side: ");
    scanf("%d", &batsman->runsInOff);
    printf("\nRecorded successfully!\n");
}

void displayBatsmanData(struct StatAdv *batsman, int index) {
    printf("\nDetails of Batsman %d:\n", index + 1);
    printf("Runs against spin: %d\n", batsman->runAgainstSpin);
    printf("Balls faced against spin: %d\n", batsman->ballAgainstSpin);
    printf("Runs against pace: %d\n", batsman->runAgainstPace);
    printf("Balls faced against pace: %d\n", batsman->ballAgainstPace);
    printf("Average against spin: %.2f\n", batsman->avgAgainstSpin);
    printf("Average against pace: %.2f\n", batsman->avgAgainstPace);
    printf("Runs scored on the long side: %d\n", batsman->runsInLong);
    printf("Runs scored on the off side: %d\n", batsman->runsInOff);

    float strikeRateSpin = (float)batsman->runAgainstSpin / batsman->ballAgainstSpin * 100;
    float strikeRatePace = (float)batsman->runAgainstPace / batsman->ballAgainstPace * 100;
    printf("Strike rate against spin: %.2f\n", strikeRateSpin);
    printf("Strike rate against pace: %.2f\n", strikeRatePace);

    // Suggestions based on performance
    if (strikeRateSpin < 100) {
        printf("Suggestion: Work on playing spin more aggressively. Try shots like the sweep or reverse sweep.\n");
    }
    if (strikeRatePace < 100) {
        printf("Suggestion: Work on playing pace more aggressively. Consider shots like the pull or hook.\n");
    }
    if (batsman->runsInLong < batsman->runsInOff) {
        printf("Suggestion: Try to score more runs on the long side. Shots like the cover drive or straight drive might be effective.\n");
    } else if (batsman->runsInLong > batsman->runsInOff) {
        printf("Suggestion: Utilize the off side more effectively. Shots like the cut or square drive could help.\n");
    } else {
        printf("Suggestion: Keep up the balanced approach in scoring runs. Practice shots like the flick or lofted shot for versatility.\n");
    }
}

int main() {
    int length = 1; // Number of batsmen
    struct StatAdv batsmen[length];

    for (int i = 0; i < length; i++) {
        printf("\nEntering details for Batsman %d:\n", i + 1);
        inputBatsmanData(&batsmen[i]);
    }

    printf("\nDetails and Suggestions:\n");
    for (int i = 0; i < length; i++) {
        displayBatsmanData(&batsmen[i], i);
    }

    return 0;
}
