#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hang.h"

char secretword[WORD_SIZE];
char guesses[26];
int guessesmade = 0;


int letterExists(char letter) {

    for(int j = 0; j < strlen(secretword); j++) {
        if(letter == secretword[j]) {
            return 1;
        }
    }

    return 0;
}

int wrongguesses() {
    int mistakes = 0;

    for(int i = 0; i < guessesmade; i++) {

        if(!letterExists(guesses[i])) {
            mistakes++;
        }
    }

    return mistakes;
}

int isHanged() {
    return wrongguesses() >= 5;
}

int hasWon() {
    for(int i = 0; i < strlen(secretword); i++) {
        if(!alreadyGuessed(secretword[i])) {
            return 0;
        }
    }

    return 1;
}


void opening() {
    printf("/****************/\n");
    printf("/ Hanging Game  */\n");
    printf("/****************/\n\n");
}

void makeGuess() {
    char guess;
    printf("Guess a letter: ");
    scanf(" %c", &guess);

    if(letterExists(guess)) {
        printf("Correct! The word contains the letter %c\n\n", guess);
    } else {
        printf("\nWrong! The word doesn't contain the letter %c\n\n", guess);
    }

    guesses[guessesmade] = guess;
    guessesmade++;
}

int alreadyGuessed(char letter) {
    int correctGuesses = 0;
    for(int j = 0; j < guessesmade; j++) {
        if(guesses[j] == letter) {
            correctGuesses = 1;
            break;
        }
    }

    return correctGuesses;
}

void drawHangman() {

    int mistakes = wrongguesses();

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (mistakes>=1?'(':' '), (mistakes>=1?'_':' '), (mistakes>=1?')':' '));
    printf(" |      %c%c%c  \n", (mistakes>=3?'\\':' '), (mistakes>=2?'|':' '), (mistakes>=3?'/': ' '));
    printf(" |       %c     \n", (mistakes>=2?'|':' '));
    printf(" |      %c %c   \n", (mistakes>=4?'/':' '), (mistakes>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    for(int i = 0; i < strlen(secretword); i++) {

        if(alreadyGuessed(secretword[i])) {
            printf("%c ", secretword[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");

}

void selectWord() {
    FILE* f;

    f = fopen("words.txt", "r");
    if(f == 0) {
        printf("Words database not available.\n\n");
        exit(1);
    }

    int wordCount;
    fscanf(f, "%d", &wordCount);

    srand(time(0));
    int random = rand() % wordCount;

    for(int i = 0; i <= random; i++) {
        fscanf(f, "%s", secretword);
    }

    fclose(f);
}


void insertWord() {
    char wants;

    printf("Do you want to add a new word to the game (Y/N)?");
    scanf(" %c", &wants);

    if(wants == 'Y') {
        char newWord[WORD_SIZE];

        printf("Enter the new word in uppercase letters: ");
        scanf("%s", newWord);

        FILE* f;

        f = fopen("words.txt", "r+");
        if(f == 0) {
            printf("Words database not available.\n\n");
            exit(1);
        }

        int quantity;
        fscanf(f, "%d", &quantity);
        quantity++;
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", quantity);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", newWord);

        fclose(f);

    }

}

int main() {

    opening();
    selectWord();

    do {

        drawHangman();
        makeGuess();

    } while (!hasWon() && !isHanged());

    if(hasWon()) {
        printf("\nCongrats, you won!!\n\n");

        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");

    } else {
        printf("\nOh no, you got hanged!\n");
        printf("The word was **%s**\n\n", secretword);

        printf("    _______________         \n");
        printf("   /               \\       \n"); 
        printf("  /                 \\      \n");
        printf("//                   \\/\\  \n");
        printf("\\|   XXXX     XXXX   | /   \n");
        printf(" |   XXXX     XXXX   |/     \n");
        printf(" |   XXX       XXX   |      \n");
        printf(" |                   |      \n");
        printf(" \\__      XXX      __/     \n");
        printf("   |\\     XXX     /|       \n");
        printf("   | |           |  |       \n");
        printf("   | I I I I I I I  |       \n");
        printf("   |  I I I I I I   |       \n");
        printf("   \\_             _/       \n");
        printf("     \\_         _/         \n");
        printf("       \\_______/           \n");
    }

    insertWord();
}
