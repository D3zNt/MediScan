#include <stdio.h>
#include "functions.h"

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


void disease(char diseases[50]) {
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
void disease(diseaseName) {
    diseaseName CommonCold = {
            "Common Cold"
            symptonNumber(1)
            symptonNumber(2)
            "Paracetamol"
            "$6-$15"
            prescription != yesprescription
    diseaseName Influenza = {
            "Influenza (Flu)"
            symptonNumber(3)
            symptonNumber(4)
            "Oseltamivir"
            "$50–$60 (10 capsules)"
            prescription != yesprescription
    }
    diseaseName Diabetes = {
            "Diabetes Type 2"
            symptonNumber(5)
            symptonNumber(6)
            "Metformin"
            "$10–$20 (30 tablets)"
            prescription == yesprescription
    }
    diseaseName C Hypertension = {
            "Hypertension (High Blood Pressure)"
            symptonNumber(7)
            symptonNumber(8)
            "Metformin"
            "$10–$15 (0 tablets)"
            prescription == yesprescription
    }
    diseaseName Gastritis = {
            "Gastritis"
            symptonNumber(9)
            symptonNumber(10)
            "Omeprazole"
            "$15–$25 (14 capsules)"
            prescription != yesprescription
    }
    diseaseName Asthma = {
            "Common Cold"
            symptonNumber(8)
            symptonNumber(11)
            symptonNumber(12)
            symptonNumber(13) 
            "Paracetamol"
            "$20–$50 (30 tablets)"
            prescription == yesprescription
    }
    diseaseName Pneumonia = {
            "Common Cold"
            symptonNumber(3)
            symptonNumber(4)
            symptonNumber(8)
            symptonNumber(13)
            symptonNumber(14)

            "Antibiotics"
            "$5–$15 (20 tablets)
            prescription == yesprescription
    }
    diseaseName Malaria = {
            "Malaria"
            symptonNumber(3)
            symptonNumber(7)
            symptonNumber(10)
            symptonNumber(15)
            symptonNumber(16)
            "Chloroquine"
            "$8–$15 (30 tablets)"
            prescription == yesprescription
    }
    diseaseName Tuberculosis = {
            "Tuberculosis (TB)"
            symptonNumber(3)
            symptonNumber(4)
            symptonNumber(13)
            symptonNumber(14)
            symptonNumber(16)
            "Rifampin"
            "$20–$50 (30 tablets)
            prescription == yesprescription
    }
    diseaseName Arthritis = {
            "Arthritis"
            symptonNumber(17)
            symptonNumber(18)
            symptonNumber(19)
            symptonNumber(20)
            symptonNumber(21)
            "Acetaminophen"
            "$3–$10 (30 tablets)"
            prescription == yesprescription
    }
}

