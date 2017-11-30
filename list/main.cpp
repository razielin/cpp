#include <iostream>

using namespace std;
/*
 * Simple list implementation
 * insertBegin - inserts elem to the begging (head) of the List* head (pointer to list's head)
 * insertEnd - inserts elem to the end (tail) of the List* tail (pointer to list's tail)
 */
struct List {
    int data;
    List* next;
    explicit List(int number, List* nextElement = nullptr) : data(number), next(nextElement) {}
};

List* insertBegin(List* head, List* elem) {
    List* newHead = elem;
    newHead->next = head;

    return newHead;
}

List* insertEnd(List* tail, List* elem) {
    tail->next = elem;
    return elem;
}

int main()
{
    List* first = nullptr;
    first = insertBegin(first, new List (9, nullptr));
    List* last = first;
    first = insertBegin(first, new List {18, nullptr});
    first = insertBegin(first, new List {27, nullptr});

    last = insertEnd(last, new List {55, nullptr});

    //first->next->next = new List {27, nullptr};

    for (List* curList = first; curList != nullptr ; curList = curList->next) {
        cout << curList->data << endl;
    }
    return 0;
}


