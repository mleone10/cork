/*
*
*   Author: Mario Leone
*   File:   taskArray.h
*   Desc:   Struct definition and method prototypes for task array manipulation.
*
*/
#ifndef TASKARRAY_H
#define TASKARRAY_H

#include "constants.h"
#include "task.h"

struct taskArray_s {
    task** taskList;
    int numTasks;
};

typedef struct taskArray_s taskArray;

int init_task_array(taskArray* curArray);
int add_task(taskArray* curArray, task* curTask);
task* get_task(taskArray* curArray, int index);
int get_num_tasks(taskArray* curArray);
int print_task_array(taskArray* curArray);

#endif