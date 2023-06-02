#include "List.h"

LinkedList::LinkedList() { //����������� ����� LinkedList, ���� ������� ������� ������. 
    head = NULL; //�������� ����� ������(head) ������������ ��������� NULL.
}

void LinkedList::addNode() { //��� ����� ���� ����� ����� �� ���� ������. ³� ������� ����� ����� � �������� ������������ ��������, � ���� ������ �������, �� ��� ����� ����� ��� �������� ������. ������, ����� ��������� �� ������ ������, ���� �� ������� ���������� �����, � ���� ����� ����� �� ���� ������.
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
        cout << current->data << " "; // ��� ����� �������� �� ������� � ��'������� ������ �� �����. ³� ��������� ����� ����� ����� � ������, �������� ��� � ������� �����.
        current = current->next;
    }
    cout << endl;
}

LinkedList LinkedList::operator+(char c) {
    LinkedList result;
    Node* newNode = new Node;
    newNode->data = c; //��� �������� ���� ������ �� ������� ������, ������� ����� ��'������ ������, ���� ������ ������, �� ��� �������. ��������, �� ������� ����� ����� � �������� ��������, � ���������� ��������� �� ���������� ����� ������. ���� �� ������� ����� ��'��� LinkedList, ���� ������ ���������� ����� ������ ������, � ������� ����.
    newNode->next = head;
    result.head = newNode;
    return result;
}

bool LinkedList::operator==(char c) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == c) {
            return true; // ��� �������� ��������, �� �������� ������ � ��'������� ������. ³� ��������� ����� ����� ����� � ������, ��������, �� ������� ��� � ��������� ����� ��������� �������. ���� ���, �� ����������� true, �� ������, �� ������ ����������� � ������. ���� ����� ������ �� ��������, ����������� false.
        }
        current = current->next;
    }
    return false;
}



