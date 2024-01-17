#include <iostream>

using namespace std;

struct Node {
    string name; // имя элемента узла
    int data; // поле данных элемента узла
    Node* next; // следующий узел
};

int main()
{
    Node* pointer = new Node;
    pointer->name = "Roman";
    pointer->data = 24;
    pointer->next = pointer + 1;
    cout << pointer->next << endl; 
    return 0;
}
