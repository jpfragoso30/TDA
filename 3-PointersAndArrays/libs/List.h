/**
*@author Juan Fragoso
*@date 09/02/2021
*@name List
**/

#ifndef List_h
#define List_h

#define LIST struct list

//Concept/DataStructure
LIST
{
    float *list;
    size_t elements;
};
//Interface
typedef LIST List;

//Generator/Constructor
List *InitList(size_t elements);

List *SetListSize(List *myList, size_t newElements);

void printList(List *myList);

#endif //List_h