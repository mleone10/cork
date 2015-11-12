/*
*
*   Author: Mario Leone
*   File:   taskFile.c
*   Desc:   Method definitions for loading and saving task files
*
*/
#include <stdio.h>
#include <stdlib.h>

#include "constants.h"
#include "taskArray.h"
#include "task.h"

int load_tasks_from_file(char* filePath, taskArray* curArray) {
    char *listName = calloc(40, sizeof(char));
    char *idLabel = calloc(3, sizeof(char));
    char *idData = calloc(20, sizeof(char));
    char *descLabel = calloc(20, sizeof(char));
    char *descData = calloc(20, sizeof(char));

    FILE *inFile = fopen(filePath, "r");

    fscanf(inFile, HEAD_IN_TEMPLATE, listName);

    while (fscanf(inFile, TASK_IN_TEMPLATE, idLabel, idData, descLabel, descData) == 4) {
        task* newTask = init_task_with_args(atoi(idData), descData);
        add_task(curArray, newTask);        
    }

    fclose(inFile);

    return 0;
}

int save_tasks_to_file(char* filePath, taskArray* curArray) {
    FILE *outFile = fopen(filePath, "w");

    fputs(HEAD_OUT_TEMPLATE, outFile);
    for (int i = 0; i < get_num_tasks(curArray); i++) {
        fputs(get_json_by_index(curArray, i), outFile);
    }
    fputs(TAIL_OUT_TEMPLATE, outFile);

    fclose(outFile);

    return 0;
}