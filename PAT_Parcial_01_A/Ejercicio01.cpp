#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head, char target_value) {
    Node<char>* dummy = new Node<char>(0);  // Nodo dummy previo al head
    dummy->next = head;
    Node<char>* current = dummy;

    while (current && current->next) {
        if (current->next->value == target_value) {
            Node<char>* toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
        }
        else {
            current = current->next;
        }
    }

    Node<char>* newHead = dummy->next;
    delete dummy;
    return newHead;
}
