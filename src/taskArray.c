/*
*
*   Author: Mario Leone
*   File:   taskArray.c
*   Desc:   Method definitions for task array level manipulation.
*
*/
#include <stdlib.h>
#include "taskArray.h"

int init_task_array(taskArray* curArray) {
    curArray->taskList = calloc(TASK_ARRAY_SIZE, sizeof(task));
    return 0;
}

task* get_task(taskArray* curArray, int index) {
    return &(curArray->taskList[index]);
}