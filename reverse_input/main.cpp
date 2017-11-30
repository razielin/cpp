#include <iostream>

//template<typename T> struct List {
//    struct list {
//        T data;
//        List* next;
//    };
//    list head;
//    list tail;
//
//
//    explicit List(T value) : head(value, NULL) {}
//};


struct List {
    std::string data;
    List* next;
    explicit List(std::string& number, List* nextElement = NULL) : data(number), next(nextElement) {}
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


int main() {
    using namespace std;
    std::string line;
    List* head = NULL;
    while (std::getline(std::cin, line))
    {
//        std::cout << line << std::endl;
        head = insertBegin(head, new List(line));
    }
    for (List* curList = head; curList != NULL ; curList = curList->next) {
        cout << curList->data << endl;
    }
    return 0;
}