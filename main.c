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
    printf("=================== MEDISCAN FINAL ADVICE ===================\n");
    printf("\t Your disease is %c\t\t\n", disease);
    printf("\t We suggest you take %s\t\t\n", medicine);
    printf("\t Prescription required: ");
    if (prescription == yesprescription) {
        printf("Yes\t\t\n");
    } else {
        printf("Not required\t\t\n");
    }
    printf("\t Your medicine price range would be around %s\n\n", medprice);
    printf("\t Take great care of yourself! \t\t\n");
    printf("====================== powered by Bapro ======================\n");

    title();

    // wait for the database

}
