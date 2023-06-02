#include "List.h"

LinkedList::LinkedList() { //Конструктор класу LinkedList, який створює порожній список. 
    head = NULL; //Головний вузол списку(head) ініціалізується значенням NULL.
}

void LinkedList::addNode() { //Цей метод додає новий вузол до кінця списку. Він створює новий вузол з введеним користувачем символом, і якщо список порожній, то цей новий вузол стає головним вузлом. Інакше, метод проходить по всьому списку, поки не досягне останнього вузла, і додає новий вузол до кінця списку.
    char val;
    Node* newNode = new Node;
    cout << "Enter char: ";
    cin >> val;
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::display() {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " "; // Цей метод виводить всі символи в зв'язаному списку на екран. Він пройшовши через кожен вузол у списку, виводить дані з кожного вузла.
        current = current->next;
    }
    cout << endl;
}

LinkedList LinkedList::operator+(char c) {
    LinkedList result;
    Node* newNode = new Node;
    newNode->data = c; //Цей оператор додає символ до початку списку, створює новий зв'язаний список, який містить символ, що був доданий. Спочатку, він створює новий вузол з введеним символом, і встановлює посилання на початковий вузол списку. Потім він створює новий об'єкт LinkedList, який містить початковий вузол нового списку, і повертає його.
    newNode->next = head;
    result.head = newNode;
    return result;
}

bool LinkedList::operator==(char c) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == c) {
            return true; // Цей оператор перевіряє, чи міститься символ в зв'язаному списку. Він пройшовши через кожен вузол у списку, перевіряє, чи дорівнює дані з поточного вузла введеному символу. Якщо так, то повертається true, що означає, що символ знаходиться у списку. Якщо такий символ не знайдено, повертається false.
        }
        current = current->next;
    }
    return false;
}



