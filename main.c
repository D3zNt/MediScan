#include <stdio.h>
#include "functions.c"

void title();

int main() {

    int prevChoice[23] = {0};
    char diseases[50] = "None";
    int choice;

    // loop

    title();
    while ( choice != 101) {
        disease(diseases);
        symptoms(prevChoice);
        scanf("%d",&choice);
        if ( choice == 101 || choice == -1){

        } else if (choice > 0 && choice < 22) {
            prevChoice[choice -1] = 1;
            // wait for the diseases database //

            // if symptons dont show in any diseases then put error //
        } else printf("Invalid input\n");
    }

    /// Results 

    title();

    // wait for the database

}
