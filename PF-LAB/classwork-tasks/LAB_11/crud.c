#include <stdio.h>
#include <string.h>

// Define the structure for a Student
struct Student {
    int roll;
    int semester;
    char name[100];
    char department[100];
};

int main() {
    // Create an array of Student structures
    struct Student students[] = {
        {101, 2, "John Doe", "Computer Science"},
        {102, 2, "Alice Smith", "Electrical Engineering"},
        {103, 2, "Bob Brown",  "Mechanical Engineering"},
        {104, 2, "Bob Brown1", "Mechanical Engineering2"},
        {105, 2, "Bob Brown2", "Mechanical Engineering3"},
        {106, 2, "Bob Brown3", "Mechanical Engineering4"},
        {107, 2, "Bob Brown4", "Mechanical Engineering5"},
        {108, 2, "Bob Brown5", "Mechanical Engineering6"},
        {109, 2, "Bob Brown6", "Mechanical Engineering7"},
        {110, 2, "Bob Brown7", "Mechanical Engineering8"},
        {111, 2, "Bob Brown8", "Mechanical Engineering9"},
        {112, 2, "Bob Brown9", "Mechanical Engineering1"},
        {113, 2, "Bob Brown0", "Mechanical Engineering0"},
    };

    // Open a CSV file for writing (write mode)
    FILE *file = fopen("students.csv", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;  // Exit with error code
    }

    // Write the header line (column names) to the CSV file
    fprintf(file, "Roll,semester,Name,Department\n");

    // Write the student data to the CSV file
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
        // Write each student's data in CSV format (comma-separated)
        fprintf(file, "%d,%s,%s,%d\n", students[i].roll, students[i].semester,students[i].name, students[i].department);
    }

    // Close the file after writing
    fclose(file);

    printf("Data written to students.csv successfully.\n");

    return 0;
}
