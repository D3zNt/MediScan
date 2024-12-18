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
    printf("=========== MEDISCAN FINAL ADVICE ===========")
    printf("\t\t\t Your disease is %c\t\t\t\n", disease);
    printf("\t\t\t We suggest you take %c\t\t\t\n", medicine[1]);
    printf("
    printf("\t\t\t Prescription required: ");
        if (prescription == yesprescription){
        printf("Yes\t\t\t\n")
        } else if {
        printf("Not required\t\t\t\n");
        }
    printf("Your medicine price range would be around %c\n\n", medprice[1]);
    printf("\t\t\t Take a great care of your self! \t\t\t");
    printf("============== powered by Bapro ==============")
    title();

    // wait for the database

}
