/** @file module.h
 * 
 * @brief A description of the module’s purpose. 
 *
 * @par       
 * COPYRIGHT NOTICE: (c) 2018 Barr Group.  All rights reserved.
 */ 

#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

static char* intArray[MAX];
static int front = 0;
static int rear = -1;
static int itemCount = 0;

static char* peek() {
   return intArray[front];
}

static bool isEmpty() {
   return itemCount == 0;
}

static bool isFull() {
   return itemCount == MAX;
}

static int size() {
   return itemCount;
}  

static void insert(char* data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

static char* removeData() {
   char* data = intArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

#endif /* MODULE_H */

/*** end of file ***/

