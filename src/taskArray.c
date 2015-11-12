/*
*
*   Author: Mario Leone
*   File:   taskArray.c
*   Desc:   Method definitions for task array level manipulation.
*
*/
#include <stdlib.h>
#include <stdio.h>

#include "constants.h"
#include "taskArray.h"


int init_task_array(taskArray* curArray) {
    curArray->taskList = calloc(TASK_ARRAY_SIZE, sizeof(task*));
    curArray->numTasks = 0;

    return 0;
}

int add_task(taskArray* curArray, task* curTask) {
    curArray->taskList[curArray->numTasks] = curTask;
    curArray->numTasks++;

    return 0;
}

task* get_task(taskArray* curArray, int index) {
    return curArray->taskList[index];
}

int get_num_tasks(taskArray* curArray) {
    return curArray->numTasks;
}

int print_task_array(taskArray* curArray) {
    task* bufTask;
    for (int i = 0; i < get_num_tasks(curArray); i++) {
        bufTask = get_task(curArray, i);
        printf("%s\n", to_string(bufTask));
    }

    return 0;
}

char* get_json_by_index(taskArray* curArray, int index) {
    task* curTask = curArray->taskList[index];

    char* jsonBuf = get_json(curTask);
    
    return jsonBuf;
}