#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class List { //объекта нет. есть указатель на кучу данных

    struct Item {
        int value;
        int index;
        Item *child = nullptr;
    };

    class LinkedList {
        void append(int value, int index) {
            if ((index-1)==0) {

            } else {

            }
        }
    };
};

#endif // LINKEDLIST_H
