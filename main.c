/*Project Test*/
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"
int main ()
{
    /*Define Variables*/
    int this_is_a_number;
    int age;
    int favoritenumber;
    int basicmath;
    char firstname[20];
    char lastname[20];

    /*quick prints*/
    printf (YELLOW "This is an example of a line break! \n" COLOR_RESET); /*New Line Break*/
    sleep(1);
    printf (YELLOW "These line breaks are great! \n" COLOR_RESET); /*New Line break*/
    sleep(1);
    printf (YELLOW "Ok, let's try a few things... \n" COLOR_RESET); /*New Line Break*/
    sleep(1);

    /*test number input and output*/
    printf(BLUE "Please enter a number: " COLOR_RESET);
    scanf( "%d", &this_is_a_number );
    printf(YELLOW "You entered %d \n", this_is_a_number, COLOR_RESET );

    /*test if, else if, and else based on numerical input*/
    printf(BLUE "How old are you?: " COLOR_RESET);
    scanf( "%d", &age );
    if ( age < 100 ) {
        printf (YELLOW "You're not as old as you could be!\n" COLOR_RESET);
    }
    else if ( age == 100 ) {
        printf(YELLOW "You are getting up there... \n" COLOR_RESET);
    }
    else {
        printf(RED "Y..You sure you're alive?\n" COLOR_RESET);
    }

    /*now we ask for a favorite number, multiply by age, and give a lucky number*/
    printf(BLUE "Please enter your favorite number: " COLOR_RESET);
    scanf("%d", &favoritenumber);
    if (favoritenumber > 500) {
        printf(YELLOW "You picked a pretty large number.\n" COLOR_RESET);
    }
    else if (favoritenumber == 500) {
        printf(YELLOW "You picked the best number!\n" COLOR_RESET);
    }
    else {
        printf(YELLOW "You picked a pretty low number...\n" COLOR_RESET);
    }
    sleep(1);
    printf(YELLOW "Time to calculate your lucky number...\n" COLOR_RESET);
    sleep(1);
    printf(CYAN "Calculating.\n");
    sleep(1);
    printf("Calculating..\n");
    sleep(1);
    printf("Calculating...\n");
    sleep(1);
    printf("Am I really Calculating!?...\n" COLOR_RESET);
    sleep(1);
    printf(RED "Nope. Not at all...\n");
    sleep(1);
    printf("Just wasting time...\n" COLOR_RESET);
    sleep(1);
    printf(YELLOW "Success!\n" COLOR_RESET);
    sleep(2);

    /*This variable gets defined here because it relies on variables that must exist before it becomes defined*/
    int luckynumber = favoritenumber * age;
    printf(GREEN "Guess what? Your lucky number is: %d\n", luckynumber, COLOR_RESET);
    sleep(1);

    /*Ask a simple multiplication problem*/
    printf(YELLOW "Tell me... What's 7 x 2? \n" COLOR_RESET);
    scanf("%d", &basicmath);
    if (basicmath == 14) {
        printf(GREEN "Great Job!\n" COLOR_RESET);
        sleep(1);
    }
    else {
    printf(RED "Failure! You said %d... but the correct answer was 14!\n", basicmath, COLOR_RESET);
    sleep(1);
    }

    printf(MAGENTA "Let's try something else!\n" COLOR_RESET);
    sleep(1);

    /*test out working with text and scanf workaround*/
    printf(BLUE "What's your first name? \n" COLOR_RESET);
    scanf("%s", firstname);
    printf(YELLOW "Hello, %s. Nice to meet you.\n", firstname, COLOR_RESET);
    sleep(1);
    printf(BLUE "And what is your last name? \n" COLOR_RESET);
    scanf("%s", lastname);
    printf(YELLOW "Great! Your first name is %s, ", firstname);
    printf("and your last name is %s.\n", lastname, COLOR_RESET);
    sleep(1);
    printf(CYAN "Hm... %s ", firstname);
    printf("%s...\n", lastname, COLOR_RESET);
    sleep(2);

    /*homework*/

    int value1 = 25, value2 = 50;
    int sum = value1 + value2;

    printf("Practice simple addition using 2 values, the sum of their parts being: %i!\n", sum);
    sleep(1);

    /*Ask for any number other than a certain number*/
    printf(YELLOW "Please provide any number other than 25: \n" COLOR_RESET);
    scanf("%d", &basicmath);
    if (basicmath != 25) {
        printf(GREEN "Great Job!\n" COLOR_RESET);
        sleep(1);
    }
    else {
    printf(RED "Failure! You said 25, which is the opposite of what we wanted!\n", basicmath, COLOR_RESET);
    sleep(1);
    }

    /*Ask for a number based on two requirements*/
    int numbergame;
    printf(YELLOW "Another number game. Give a number larger than 25 but less than 49: \n", COLOR_RESET);
    scanf("%d", &numbergame);
    if (numbergame < 26) {
        printf(RED "Terrible! Follow instructions. \n", COLOR_RESET);
        sleep(1);
    }
    else if (numbergame > 48) {
        printf(RED "Terrible! Follow instructions. \n", COLOR_RESET);
        sleep(1);
    }
    else {
        printf(GREEN "Great! \n", COLOR_RESET);
    }
    sleep(1);

    /*force entry of the required number*/
    int anothernumbergame;
    do {printf(YELLOW "Enter a number larger than 1 but less than 3: \n", COLOR_RESET);
    scanf ("%d", &anothernumbergame);}
    while (anothernumbergame != 2);

    sleep(1);

    /*Ask for 2 words for the next game*/
    char wordtest[20];
    printf ("Enter a word: \n");
    scanf ("%s", wordtest);
    printf ("You entered %s! \n", wordtest);

    sleep(1);

    char wordtest2[20];
    printf ("Enter another word: \n");
    scanf ("%s", wordtest2);
    printf ("You entered %s! \n", wordtest2);

    sleep(1);

    printf ("Time to compare the words.... \n");
    sleep(1);

    /*compare strings based on input*/
    if (strcmp(wordtest, wordtest2) == 0)
        printf("Both of your words %s and %s are the same word... \n", wordtest, wordtest2);
    else
        printf("Both of your words %s and %s are completely different... \n", wordtest, wordtest2);

    sleep(1);

    /*compare strings in a forced loop*/
    char awordgame[20];
    char awordgameanswer[20] = "HELLO";
    do {printf(YELLOW "Now you need to enter the word HELLO letter for letter. \n", COLOR_RESET);
    scanf ("%s", awordgame);}
    while (strcmp(awordgame, awordgameanswer) != 0);

    /*exit the program and say goodbye.*/
    printf(RED "Time to exit the program now, %s!\n", firstname);
    sleep(1);
    printf("There's not a whole lot more to show at this point.\n" COLOR_RESET);
    sleep(1);
    printf(YELLOW "See ya!\n" COLOR_RESET);
    sleep(2);

    getchar();
    return 0;
}
