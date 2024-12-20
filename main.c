#include <stdio.h>
#include "functions.c"
#include <stdlib.h>
#include <string.h>
#include "struct.h"



int main() {

    Medicine *medicineList = calloc(10, sizeof(Medicine));

    data(medicineList);
    



    int prevChoice[23] = {0};
    char diseases[100] = "None";
    int choice = 0;
    int found;
    int saveI = 0;

    // loop

    title();
    while ( choice != 101) {
        diseasePrint(diseases);
        symptoms(prevChoice);
        scanf("%d",&choice);

        if (choice == 101) { 
            if (strcmp(diseases, "Error: No disease found, Try removing/adding some symptoms") == 0 || strcmp(diseases, "None") == 0){ printf("No diseases Selected\n\n");
            } else break;
            choice = -404;

        } else if (choice == -1) { 
            // Remove a selected symptom
            printf("Which symptom would you like to remove: ");
            scanf("%d", &choice);
            if (choice > 0 && choice <= 23) {
                prevChoice[choice - 1] = 0;
            } else {
                printf("Invalid symptom number!\n");
            }

        } else if (choice > 0 && choice <= 23) {
            // Add a symptom
            prevChoice[choice - 1] = 1;
        } else {
            printf("Invalid input\n");
        }

            

        strcpy(diseases, "Error: No disease found, Try removing/adding some symptoms"); 
        for (int i = 0; i < 10; i++) { 
            found = 1; 
            int hasMatchingSymptom = 0; 


            for (int j = 0; j < 5; j++) { 
                int symptomID = medicineList[i].symptom[j];
                if (symptomID > 0) {
                    if (prevChoice[symptomID - 1] == 1) {
                        hasMatchingSymptom = 1;
 
                    }
                }
            }

            
            for (int k = 0; k < 23; k++) {
                if (prevChoice[k] == 1) {
                    int isSymptomInDisease = 0;
                    for (int j = 0; j < 5; j++) {
                        if (medicineList[i].symptom[j] == k + 1) {
                            isSymptomInDisease = 1;
                            break;
                        }
                    }
                    if (!isSymptomInDisease) {
                        found = 0; 
                        break;
                    }
                }
            }

            if (found && hasMatchingSymptom) {
                strcpy(diseases, medicineList[i].name);
                saveI = i;
                break;
            }
        }

    }
        

    printf("=================== MEDISCAN FINAL ADVICE ===================\n");
    printf("\t Your disease is %s\t\t\n", medicineList[saveI].name);
    printf("\t We suggest you take %s\t\t\n", medicineList[saveI].medicine);
    printf("\t Prescription required: %s\t\t\n", medicineList[saveI].prescription == 1 ? "Required " : "Not Required ");
    printf("\t Your medicine price range would be around %s\n\n", medicineList[saveI].price);
    printf("\t Take great care of yourself! \t\t\n");
    printf("====================== powered by Bapro ======================\n");
    



    free(medicineList);
    return 0;
    }







