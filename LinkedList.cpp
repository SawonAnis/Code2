#include <iostream>
using namespace std;


class Node
{
public:
    int value;
    Node *next;
};

int main(){

    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    Node *four = NULL;
    Node *five = NULL;

    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    five = new Node();

    one->value = 10;
    two->value = 20;
    three->value = 30;
    four->value = 40;
    five->value = 50;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    head = one;
    while(head !=NULL){
        cout << head->value;
        head = head->next;
    }
}
