#include <stdio.h>
#include "functions.h"
#include <stdbool.h>
#include "struct.h"



void data(Medicine *medicineList);

void title() {
    printf(" _  ___  ___         _ _ _____                   _ \n");
    printf("| | |  \\/  |        | (_)  ___|                 | |\n");
    printf("| | | .  . | ___  __| |_\\ `--.  ___ __ _ _ __   | |\n");
    printf("| | | |\\/| |/ _ \\/ _` | |`--. \\/ __/ _` | '_ \\  | |\n");
    printf("| | | |  | |  __/ (_| | /\\__/ / (_| (_| | | | | | |\n");
    printf("| | \\_|  |_/\\___|\\__,_|_\\____/ \\___\\__,_|_| |_| |_|\n");
    printf("| |                                             | |\n");
    printf("|_|                                             |_|\n\n\n\n\n\n");
}


void diseasePrint(char diseases[50]) {
    printf("______ _                                \n");
    printf("|  _  (_)                               \n");
    printf("| | | |_ ___  ___  __ _ ___  ___  ___   \n");
    printf("| | | | / __|/ _ \\/ _` / __|/ _ \\/ __|  \n");
    printf("| |/ /| \\__ \\  __/ (_| \\__ \\  __/\\__ \\  \n");
    printf("|___/ |_|___/\\___|\\__,_|___/\\___||___/  \n");
    printf("                                        \n");

    
    /* not Complete don't forget to check for multiple possibility of diseases in main code*/
    printf("Detected Disease: %s\n\n", diseases);
}

void symptoms(int prevChoice[23]) {
    printf(" _____                       _                       \n");
    printf("/  ___|                     | |                      \n");
    printf("\\ `--. _   _ _ __ ___  _ __ | |_ ___  _ __ ___  ___  \n");
    printf(" `--. \\ | | | '_ ` _ \\| '_ \\| __/ _ \\| '_ ` _ \\/ __| \n");
    printf("/\\__/ / |_| | | | | | | |_) | || (_) | | | | | \\__ \\ \n");
    printf("\\____/ \\__, |_| |_| |_| .__/ \\__\\___/|_| |_| |_|___/ \n");
    printf("        __/ |         | |                            \n");
    printf("       |___/          |_|                            \n");



    printf("\nSelect Symptoms:\n\n");


    printf("-1: Unselect Symptoms\n\n");

    for (int i = 0; i < 21; i++) {

        if (i % 2 == 0) {
 
            printf("%2d: %-25s", i + 1, getSymptomName(i + 1));

   
            if (prevChoice[i] == 1) {
                printf("X");
            }
            printf("\t");  
        }
  
        else {
            
            printf("%2d: %-25s", i + 1, getSymptomName(i + 1));

           
            if (prevChoice[i] == 1) {
                printf("X");
            }
            printf("\n");
        }
    }


    printf("\n101: To finish assessment\n");
    printf("Input: ");

}

const char* getSymptomName(int symptomNumber) {
    switch (symptomNumber) {
        case 1: return "Sneezing";
        case 2: return "Runny Nose";
        case 3: return "Fever (High Fever)";
        case 4: return "Fatigue";
        case 5: return "Frequent Urination";
        case 6: return "Increased Thirst";
        case 7: return "Headaches";
        case 8: return "Shortness of Breath";
        case 9: return "Stomach Pain";
        case 10: return "Nausea";
        case 11: return "Wheezing";
        case 12: return "Chest Tightness";
        case 13: return "Coughing (High Cough)";
        case 14: return "Chest Pain";
        case 15: return "Chills";
        case 16: return "Sweating (Night Sweats)";
        case 17: return "Joint Pain";
        case 18: return "Stiffness";
        case 19: return "Swelling";
        case 20: return "Reduced Range of Motion";
        case 21: return "Tenderness in Joints";
        default: return "";
    }
}

void data(Medicine *medicineList) {
    // #1 Common Cold
    strcpy(medicineList[0].name, "Common Cold");
    medicineList[0].symptom[0] = 1;
    medicineList[0].symptom[1] = 2;
    strcpy(medicineList[0].medicine, "Paracetamol");
    strcpy(medicineList[0].price, "$6-$15");
    medicineList[0].prescription = false;

    // #2 Influenza
    strcpy(medicineList[1].name, "Influenza");
    medicineList[1].symptom[0] = 3;
    medicineList[1].symptom[1] = 4;
    strcpy(medicineList[1].medicine, "Oseltamivir");
    strcpy(medicineList[1].price, "$50-$60 (10 capsules)");
    medicineList[1].prescription = true;

    // #3 Diabetes Type 2
    strcpy(medicineList[2].name, "Diabetes Type 2");
    medicineList[2].symptom[0] = 5;
    medicineList[2].symptom[1] = 6;
    strcpy(medicineList[2].medicine, "Metformin");
    strcpy(medicineList[2].price, "$10-$20 (30 tablets)");
    medicineList[2].prescription = true;

    // #4 Hypertension
    strcpy(medicineList[3].name, "Hypertension");
    medicineList[3].symptom[0] = 7;
    medicineList[3].symptom[1] = 8;
    strcpy(medicineList[3].medicine, "Lisinopril");
    strcpy(medicineList[3].price, "$10-$15 (30 tablets)");
    medicineList[3].prescription = true;

    // #5 Gastritis
    strcpy(medicineList[4].name, "Gastritis");
    medicineList[4].symptom[0] = 9;
    medicineList[4].symptom[1] = 10;
    strcpy(medicineList[4].medicine, "Omeprazole");
    strcpy(medicineList[4].price, "$15-$25 (14 capsules)");
    medicineList[4].prescription = false;

    // #6 Asthma
    strcpy(medicineList[5].name, "Asthma");
    medicineList[5].symptom[0] = 8;
    medicineList[5].symptom[1] = 11;
    strcpy(medicineList[5].medicine, "Salbutamol Inhaler");
    strcpy(medicineList[5].price, "$20-$50 (1 inhaler)");
    medicineList[5].prescription = true;

    // #7 Pneumonia
    strcpy(medicineList[6].name, "Pneumonia");
    medicineList[6].symptom[0] = 3;
    medicineList[6].symptom[1] = 4;
    strcpy(medicineList[6].medicine, "Antibiotics");
    strcpy(medicineList[6].price, "$5-$15 (20 tablets)");
    medicineList[6].prescription = true;

    // #8 Malaria
    strcpy(medicineList[7].name, "Malaria");
    medicineList[7].symptom[0] = 3;
    medicineList[7].symptom[1] = 7;
    strcpy(medicineList[7].medicine, "Chloroquine");
    strcpy(medicineList[7].price, "$8-$15 (30 tablets)");
    medicineList[7].prescription = true;

    // #9 Tuberculosis
    strcpy(medicineList[8].name, "Tuberculosis");
    medicineList[8].symptom[0] = 3;
    medicineList[8].symptom[1] = 4;
    strcpy(medicineList[8].medicine, "Rifampin");
    strcpy(medicineList[8].price, "$20-$50 (30 tablets)");
    medicineList[8].prescription = true;

    // #10 Arthritis
    strcpy(medicineList[9].name, "Arthritis");
    medicineList[9].symptom[0] = 17;
    medicineList[9].symptom[1] = 18;
    strcpy(medicineList[9].medicine, "Acetaminophen");
    strcpy(medicineList[9].price, "$3-$10 (30 tablets)");
    medicineList[9].prescription = true;
}