#include <stdio.h>
#include <stdlib.h>

// Device statuses
int light = 0;
int fan = 0;
int securitySystem = 0;

void showMenu() {
    printf("\n---- Smart Home Automation Menu ----\n");
    printf("1. Turn ON the Light\n");
    printf("2. Turn OFF the Light\n");
    printf("3. Turn ON the Fan\n");
    printf("4. Turn OFF the Fan\n");
    printf("5. Activate Security System\n");
    printf("6. Deactivate Security System\n");
    printf("7. Show Current Status\n");
    printf("8. Exit\n");
    printf("------------------------------------\n");
    printf("Enter your choice: ");
}

void showStatus() {
    printf("\n---- Current Device Status ----\n");
    printf("Light: %s\n", light ? "ON" : "OFF");
    printf("Fan: %s\n", fan ? "ON" : "OFF");
    printf("Security System: %s\n", securitySystem ? "Activated" : "Deactivated");
    printf("--------------------------------\n");
}

int main() {
    int choice;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                light = 1;
                printf("Light turned ON.\n");
                break;
            case 2:
                light = 0;
                printf("Light turned OFF.\n");
                break;
            case 3:
                fan = 1;
                printf("Fan turned ON.\n");
                break;
            case 4:
                fan = 0;
                printf("Fan turned OFF.\n");
                break;
            case 5:
                securitySystem = 1;
                printf("Security system ACTIVATED.\n");
                break;
            case 6:
                securitySystem = 0;
                printf("Security system DEACTIVATED.\n");
                break;
            case 7:
                showStatus();
                break;
            case 8:
                printf("Exiting Smart Home Simulation. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

