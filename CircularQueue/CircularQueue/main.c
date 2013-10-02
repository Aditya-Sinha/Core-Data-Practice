//
//  main.c
//  CircularQueue
//
//  Created by Aditya Sinha on 30/09/13.
//  Copyright (c) 2013 Aditya Sinha. All rights reserved.
//
#include<stdio.h>
#define SIZE 5
void insert();
void delet();
void display();
int queue[SIZE], rear=0, front=0, item, count=0;
int main(int argc, const char * argv[])
{
    int ch;
    do
    {
        printf("\n\n1.\tInsert\n2.\tDelete\n3.\tDisplay\n4.\tExit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delet();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default: 
                printf("\n\nInvalid choice. Pleasr try again...\n");
        }
    } while(1);
    return 0;
}

void insert()
{
    if(count == SIZE)
        printf("\n\nQueue is full.");
    else
    {
        printf("\n\nEnter ITEM: ");
        scanf("%d", &item);
        queue[rear]=item;
        rear = (rear+1)%SIZE;
        printf("\n\nItem inserted: %d\n", item);
        count++;
    }
}
void delet()
{
    if(count == 0)
        printf("\n\nQueue is empty.\n");
    else
    {
        item = queue[front];
        front= (front+1)%SIZE;
        printf("\n\nITEM deleted: %d", item);
        count--;
    } 
}

void display()
{
    int i=front,temp=0;
    temp=count;
    if(count == 0)
        printf("\n\nQueue is empty.\n");
    while (temp!=0) {
        printf("\t %d",queue[i]);
        temp--;
        i=(i+1)%SIZE;
    }
    
    
}