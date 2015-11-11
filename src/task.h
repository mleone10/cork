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

task* init_task();
task* init_task_with_args(short id, char* desc);
int task_out(task* curTask);
short get_id(task* curTask);
char* get_desc(task* curTask);
int set_id(task* curTask, short id);
int set_desc(task* curTask, char* desc);

#endif

