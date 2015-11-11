/*
*
*   Author: Mario Leone
*   File:   task.h
*   Desc:   Struct definition and method declarations for task level manipulation
*
*/
#ifndef TASK_H
#define TASK_H

struct task_s {
    short id;
    char* desc;
};

typedef struct task_s task;

int init_task(task* curTask);
int task_out(task* curTask);
short get_id(task* curTask);
char* get_desc(task* curTask);
int set_id(task* curTask, short id);
int set_desc(task* curTask, char* desc);

#endif

