/*
*
*   Author: Mario Leone
*   File:   task.c
*   Desc:   Method definitions for task level manipulation.
*
*/
#include <stdlib.h>
#include <stdio.h>
#include "task.h"
#include "constants.h"

int init_task(task* curTask) {
    curTask = calloc(1, sizeof(task));
    curTask->id = 0;
    curTask->desc = calloc(TASK_DESC_SIZE, sizeof(char));

    return 0;
}

int task_out(task* curTask) {
    printf("%d: %s\n", curTask->id, curTask->desc);
    return 0;
}

short get_id(task* curTask) {
    return curTask->id;
}

char* get_desc(task* curTask) {
    return curTask->desc;
}

int set_id(task* curTask, short id) {
    curTask->id = id;
    return 0;
}

int set_desc(task* curTask, char* desc) {
    curTask->desc = desc;
    return 0;
}