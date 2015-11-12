/*
*
*   Author: Mario Leone
*   File:   taskFile.h
*   Desc:   Method prototypes for loading and saving task files
*
*/
#ifndef TASKFILE_H
#define TASKFILE_H

#include "taskArray.h"

int load_tasks_from_file(char* filePath, taskArray* curArray);
int save_tasks_to_file(char* filePath, taskArray* curArray);

#endif