#include <stdio.h>

int main() {
    int choice, hours;
    int totalCollection = 0;   // total money earned in the day
    int charge;                // charge for one vehicle

    printf("==== PARKING LOT BILLING SYSTEM ====\n");
    printf("1. Bike  - ₹20/hour\n");
    printf("2. Car   - ₹50/hour\n");
    printf("3. Bus   - ₹100/hour\n");
    printf("4. Show Total Collection\n");
    printf("5. Exit\n");
    printf("====================================\n");

    // loop runs until user chooses 5 (Exit)
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter hours parked: ");
                scanf("%d", &hours);
                charge = 20 * hours;
                printf("Bike Parking Charge = ₹%d\n", charge);
                totalCollection += charge;   // add this bike charge to total
                break;

            case 2:
                printf("Enter hours parked: ");
                scanf("%d", &hours);
                charge = 50 * hours;
                printf("Car Parking Charge = ₹%d\n", charge);
                totalCollection += charge;   // add this car charge to total
                break;

            case 3:
                printf("Enter hours parked: ");
                scanf("%d", &hours);
                charge = 100 * hours;
                printf("Bus Parking Charge = ₹%d\n", charge);
                totalCollection += charge;   // add this bus charge to total
                break;

            case 4:
                printf("Total Collection So Far = ₹%d\n", totalCollection);
                break;

            case 5:
                printf("Exiting... Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please enter 1–5 only.\n");
        }

    } while (choice != 5);  // loop stops when user chooses Exit

    return 0;
}
