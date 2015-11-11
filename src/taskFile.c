/*
*
*   Author: Mario Leone
*   File:   taskFile.c
*   Desc:   Method definitions for loading and saving task files
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "taskArray.h"
#include "task.h"

#define HEAD_TEMPLATE " { \"%[^\"]\" : [ "
#define TASK_TEMPLATE " { \"%[^\"]\" : %[^,] , \"%[^\"]\" : \"%[^\"]\" } , "

int load_tasks_from_file(char* filePath, taskArray* curArray) {
    char *listName = calloc(40, sizeof(char));
    char *idLabel = calloc(3, sizeof(char));
    char *idData = calloc(20, sizeof(char));
    char *descLabel = calloc(20, sizeof(char));
    char *descData = calloc(20, sizeof(char));

    FILE *inFile = fopen(filePath, "r");

    fscanf(inFile, HEAD_TEMPLATE, listName);

    while (fscanf(inFile, TASK_TEMPLATE, idLabel, idData, descLabel, descData) == 4) {
        task* newTask = init_task_with_args(atoi(idData), descData);
        add_task(curArray, newTask);        
    }

    return 0;
}