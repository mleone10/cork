/*
*
*   Author: Mario Leone
*   File:   constants.h
*   Desc:   Program-wide constants.  May be replace in the future with some kind of hidden properties file.
*
*/
#ifndef CONSTANTS_H
#define CONSTANTS_H

#define INPUT_FILE "tasks.json"
#define OUTPUT_FILE "out.json"

#define TASK_ARRAY_SIZE 20
#define TASK_ID_SIZE 2
#define TASK_DESC_SIZE 256
#define TASK_JSON_ETC 10
#define TASK_ETC 1

#define TASK_STR_TEMPLATE "%d:%s"

#define HEAD_IN_TEMPLATE " { \"%[^\"]\" : [ "
#define TASK_IN_TEMPLATE " { \"%[^\"]\" : %[^,] , \"%[^\"]\" : \"%[^\"]\" } , "

#define HEAD_OUT_TEMPLATE "{\"tasks\":[\n"
#define TAIL_OUT_TEMPLATE "]}"
#define TASK_OUT_TEMPLATE "{\n\"id\":%d,\n\"desc\":\"%s\"\n},\n"

#endif