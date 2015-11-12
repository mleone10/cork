/*
*
*   Author: Mario Leone
*   File:   main.c
*   Desc:   Cork program entry point.
*
*/
#include "constants.h"
#include "task.h"
#include "taskArray.h"
#include "taskFile.h"

int main() {
    // Initialize array of task structs
    taskArray tasks;
    taskArray newTasks;
    
    init_task_array(&tasks);
    init_task_array(&newTasks);

    load_tasks_from_file(INPUT_FILE, &tasks);
    print_task_array(&tasks);
    save_tasks_to_file(OUTPUT_FILE, &tasks);

    load_tasks_from_file(OUTPUT_FILE, &newTasks);
    print_task_array(&newTasks);

    return 0;
}