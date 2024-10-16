// Node class design
#include <iostream>
using namespace std;
class Node{
    public:
        int elem;
        Node*next;
        Node(int elem,Node*next = nullptr){
            this->elem = elem;
            this->next = next;
        };
};
// creating a singly linked list
Node* createList(int arr[], int length){
    if(length == 0){
        return nullptr;
    }
    Node*head = new Node(arr[0],nullptr);
    Node*tail = head;
    for(int i=1; i<length; i++){
        Node* newNode = new Node(arr[i],nullptr);
        tail->next = newNode;
        tail = tail->next;
    }
    return head;
}
// printing linked list
void printList(Node*head){
    Node*temp = head;
    while(temp != nullptr){
        cout << temp->elem << "->";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    Node*list = createList(arr,length);
    printList(list);
    return 0;
}