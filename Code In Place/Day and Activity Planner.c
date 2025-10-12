//day and activity planner
#include <stdio.h>

int main() {
    int day;
    char time;

    printf("Enter the day of the week (1 = Monday, ..., 7 = Sunday): ");
    scanf("%d", &day);

    switch (day) {
        // Weekdays: Monday to Friday
        case 1: case 2: case 3: case 4: case 5:
            printf("Enter time (M for Morning, E for Evening): ");
            scanf(" %c", &time);

            switch (time) {
                case 'M': case 'm':
                    printf("Go to Class\n");
                    break;
                case 'E': case 'e':
                    printf("Do Homework\n");
                    break;
                default:
                    printf("Invalid time input.\n");
            }
            break;

        // Weekends: Saturday and Sunday
        case 6: case 7:
            printf("Enter time (M for Morning, E for Evening): ");
            scanf(" %c", &time);

            switch (time) {
                case 'M': case 'm':
                    printf("Play Sports\n");
                    break;
                case 'E': case 'e':
                    printf("Watch Movie\n");
                    break;
                default:
                    printf("Invalid time input.\n");
            }
            break;

        default:
            printf("Invalid day entered.\n");
    }

    return 0;
}
