#include <stdio.h>
#define SIZE 5

int main()
{
    int panNumbers[SIZE] = {12345, 23456, 34567, 45678, 56789};
    int aadharNumbers[SIZE] = {11111, 22222, 33333, 44444, 55555};
    int apaarIds[SIZE] = {10101, 20202, 30303, 40404, 50505};
    int drivingLicenses[SIZE] = {98765, 87654, 76543, 65432, 54321};
    int passportNumbers[SIZE] = {11223, 22334, 33445, 44556, 55667};

    int choice, id, i, found = 0;

    printf("KYC Verification System\n");
    printf("Select ID type:\n");
    printf("1. PAN Number\n");
    printf("2. AADHAR Number\n");
    printf("3. APAAR ID\n");
    printf("4. Driving License\n");
    printf("5. Passport\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice<1||choice>5)
    {
        printf("Invalid choice. Exiting.\n");
        return 0;
    }

    printf("Enter your ID number: ");
    scanf("%d", &id);
    switch (choice)
    {
    case 1:
        for (i = 0; i < SIZE; i++)
        {
            if (panNumbers[i] == id)
            {
                printf("Status: VERIFIED\n");
                found = 1;
                break;
            }
        }
        break;

    case 2:
        for (i = 0; i < SIZE; i++)
        {
            if (aadharNumbers[i] == id)
            {
                printf("Status: VERIFIED\n");
                found = 1;
                break;
            }
        }
        break;

    case 3:
        for (i = 0; i < SIZE; i++)
        {
            if (apaarIds[i] == id)
            {
                printf("Status: VERIFIED\n");
                found = 1;
                break;
            }
        }
        break;

    case 4:
        for (i = 0; i < SIZE; i++)
        {
            if (apaarIds[i] == id)
            {
                printf("Status: VERIFIED\n");
                found = 1;
                break;
            }
        }
        break;

    case 5:
        for (i = 0; i < SIZE; i++)
        {
            if (apaarIds[i] == id)
            {
                printf("Status: VERIFIED\n");
                found = 1;
                break;
            }
        }
        break;
    }
    if(!found){
    printf("not found");
    }

    return 0;
}