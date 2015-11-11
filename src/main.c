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
    
    init_task_array(&tasks);
    load_tasks_from_file("tasks.json", &tasks);
    print_task_array(&tasks);

    return 0;
}