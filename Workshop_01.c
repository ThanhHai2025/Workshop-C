#include <stdio.h>

int main() {
    int num_students;
    int total_score = 0;
    int pass_count = 0;
    int fail_count = 0;
    printf("Enter the number of students (>=1): ");
    scanf("%d", &num_students);
    while (num_students < 1) {
        printf("Invalid number of students. Please try again.\n");
        printf("Enter the number of students (>=1): ");
        scanf("%d", &num_students);
    }
    int scores[num_students];
    for (int i = 0; i < num_students; i++) {
        printf("Enter the score for student %d (0-10): ", i + 1);
        scanf("%d", &scores[i]);
        while (scores[i] < 0 || scores[i] > 10) {
            printf("Invalid score. Please try again.\n");
            printf("Enter the score for student %d (0-10): ", i + 1);
            scanf("%d", &scores[i]);
        }
        total_score += scores[i];
        if (scores[i] >= 5) {
            pass_count++;
        } else {
            fail_count++;
        }
    }
    float average_score = (float)total_score / num_students;
    printf("\nStatistics:\n");
    printf("Total score of the class: %d\n", total_score);
    printf("Average score of the class: %.2f\n", average_score);
    printf("Number of students who passed (>= 5): %d\n", pass_count);
    printf("Number of students who failed (< 5): %d\n", fail_count);

    return 0;
}
