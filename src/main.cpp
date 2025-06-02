#include "LinkedList.h"
int main() {
    LinkedList l1;
    l1.print_list();
    l1.insert_at_front(3);
    l1.print_list();
    l1.insert_at_end(5);
    l1.print_list();
    l1.insert_at_front(9);
    l1.print_list();
    l1.insert_at_end(4);
    l1.print_list();
    l1.insert_at_front(2);
    l1.print_list();
    l1.insert_at_end(7);
    l1.print_list();
    l1.insert_at_front(1);
    l1.print_list();

    return 0;
}