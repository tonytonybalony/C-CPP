#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 50
#define MAX_LENGTH 100

typedef struct {
    char description[MAX_LENGTH];
    int completed;
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;

void add_task() {
    if (task_count >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }
    
    printf("Enter task description: ");
    getchar(); // consume newline
    fgets(tasks[task_count].description, MAX_LENGTH, stdin);
    tasks[task_count].description[strcspn(tasks[task_count].description, "\n")] = 0;
    tasks[task_count].completed = 0;
    task_count++;
    
    printf("Task added successfully!\n");
}

void list_tasks() {
    if (task_count == 0) {
        printf("No tasks in the list.\n");
        return;
    }
    
    printf("\n=== Task List ===\n");
    for (int i = 0; i < task_count; i++) {
        printf("%d. [%c] %s\n", i + 1, 
               tasks[i].completed ? 'X' : ' ', 
               tasks[i].description);
    }
    printf("\n");
}

void complete_task() {
    if (task_count == 0) {
        printf("No tasks to complete.\n");
        return;
    }
    
    list_tasks();
    printf("Enter task number to complete: ");
    int task_num;
    scanf("%d", &task_num);
    
    if (task_num >= 1 && task_num <= task_count) {
        tasks[task_num - 1].completed = 1;
        printf("Task completed!\n");
    } else {
        printf("Invalid task number.\n");
    }
}

int main() {
    int choice;
    
    printf("=== Simple Task Manager ===\n");
    
    while (1) {
        printf("\n1. Add Task\n");
        printf("2. List Tasks\n");
        printf("3. Complete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_task();
                break;
            case 2:
                list_tasks();
                break;
            case 3:
                complete_task();
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
