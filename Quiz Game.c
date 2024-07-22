#include <stdio.h>

int main() {
    int i;
    int point1, point2, point3, point4, point5;
    char ans1, ans2, ans3, ans4, ans5;
    
    printf("Welcome to the Game\n\n");
    printf("> press '7' to start the game\n\n");
    printf("> press '0' to quit the game\n\n");

    scanf("%d", &i);

    if (i == 7) {
        printf("The game has started...\n\n");
    } else if (i == 0) {
        printf("The game has ended..\n\n");
        return 0;
    } else {
        printf("Invalid\n\n");
        return 0;
    }

    if (i == 7) {
        printf("1) Which one is the First search engine in the internet\n");
        printf("A) Google\n");
        printf("B) Archie\n");
        printf("C) Wais\n");
        printf("D) Altavista\n");

        printf("Enter your answer (A/B/C/D or Q to quit): ");
        scanf(" %c", &ans1);

        if (ans1 == 'Q' || ans1 == 'q') {
            printf("You chose to quit the game.\n");
            return 0;
        }

        if (ans1 == 'B') {
            printf("Correct Answer\n");
            point1 = 5;
        } else {
            printf("Wrong Answer\n");
            point1 = 0;
        }
        printf("You have scored %d point\n", point1);

        printf("2) Which one is the First web browser invented in 1990\n");
        printf("A) Internet Explorer\n");
        printf("B) Mosaic\n");
        printf("C) Mozilla\n");
        printf("D) Nexus\n");

        printf("Enter your answer (A/B/C/D or Q to quit): ");
        scanf(" %c", &ans2);

        if (ans2 == 'Q' || ans2 == 'q') {
            printf("You chose to quit the game.\n");
            return 0;
        }

        if (ans2 == 'D') {
            printf("Correct Answer\n");
            point2 = point1 + 5;
        } else {
            printf("Wrong Answer\n");
            point2 = point1;
        }
        printf("You have scored %d point\n", point2);

        printf("3) Using which language the OS of IOS was built\n");
        printf("A) C\n");
        printf("B) C++\n");
        printf("C) Objective C\n");
        printf("D) Java\n");

        printf("Enter your answer (A/B/C/D or Q to quit): ");
        scanf(" %c", &ans3);

        if (ans3 == 'Q' || ans3 == 'q') {
            printf("You chose to quit the game.\n");
            return 0;
        }

        if (ans3 == 'C') {
            printf("Correct Answer\n");
            point3 = point2 + 5;
        } else {
            printf("Wrong Answer\n");
            point3 = point2;
        }
        printf("You have scored %d point\n", point3);

        printf("4) Using which language the OS of Linux was built\n");
        printf("A) C\n");
        printf("B) C++\n");
        printf("C) Objective C\n");
        printf("D) Java\n");

        printf("Enter your answer (A/B/C/D or Q to quit): ");
        scanf(" %c", &ans4);

        if (ans4 == 'Q' || ans4 == 'q') {
            printf("You chose to quit the game.\n");
            return 0;
        }

        if (ans4 == 'A') {
            printf("Correct Answer\n");
            point4 = point3 + 5;
        } else {
            printf("Wrong Answer\n");
            point4 = point3;
        }
        printf("You have scored %d point\n", point4);

        printf("5) Using which language the OS of Linux was built\n");
        printf("A) C\n");
        printf("B) C++\n");
        printf("C) Objective C\n");
        printf("D) Java\n");

        printf("Enter your answer (A/B/C/D or Q to quit): ");
        scanf(" %c", &ans5);

        if (ans5 == 'Q' || ans5 == 'q') {
            printf("You chose to quit the game.\n");
            return 0;
        }

        if (ans5 == 'A') {
            printf("Correct Answer\n");
            point5 = point4 + 5;
        } else {
            printf("Wrong Answer\n");
            point5 = point4;
        }
        printf("You have scored %d point\n", point5);
    }
    return 0;
}
