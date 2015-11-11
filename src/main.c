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

int main() {
    // Initialize array of task structs
    taskArray tasks;
    task* bufTask;
    init_task_array(&tasks);

    for (int i = 0; i < TASK_ARRAY_SIZE; i++) {
        bufTask = get_task(&tasks, i);
        init_task(bufTask);
        set_id(bufTask, i);
        set_desc(bufTask, "Description");
    }

    for (int i = 0; i < TASK_ARRAY_SIZE; i++) {
        bufTask = get_task(&tasks, i);
        task_out(bufTask);
    }

    return 0;
}