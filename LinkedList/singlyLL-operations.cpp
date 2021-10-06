#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
        Node(int val){
            data = val;
            next = NULL;
        }
};

//insert
void insert_front(Node* &head, int item){

    Node* p = new Node(item);

    if(head == NULL){
        head = p;
        return;
    }
    p->next = head;
    head = p;
}
void insert_rear(Node* &head, int item){

    Node* p = new Node(item);

    if(head == NULL){
        head = p;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = p;

}

void insert_pos(Node* &head, int val, int pos){

    int count = 1;
    Node* p = new Node(val);
    Node* curr = head;
    Node* prev;
    if(curr == NULL && pos == 1){
        head = p;
        return;
    }
    if(curr == NULL && pos !=1){
        return;
    }
    if(pos == 1){
        p->next = head;
        head = p;
        return;
    }

    while(curr != NULL && pos !=count){
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(pos == count){
        prev->next = p;
        p->next = curr;
        return;
    }
    else{
        return;
    }
    
}

//print
void print_ll(Node* &head){

    Node* temp= head;
    while(temp != NULL){
        cout <<  temp->data << " -->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

//search
bool search(Node* &head, int val){
    if(head == NULL){
        return false;
    }
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//delete
void delete_front(Node* &head){
    if(head == NULL){
        return;
    }
    Node* p = head;
    head = head->next;
    delete p;
}


void delete_rear(Node* &head){

    if(head == NULL){
        return;
    }
    Node* curr = head;
    Node* prev;
    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
    return;
}


//main
int main(){

    Node* head1 = NULL;
    insert_front(head1, 2);
    insert_front(head1, 1);
    print_ll(head1);
    insert_rear(head1, 3);
    print_ll(head1);
    cout <<"Present: "<< search(head1, 3)<<endl;
    cout << "Not present: " << search(head1, 4)<<endl;
    delete_front(head1);
    print_ll(head1);
    insert_rear(head1, 4);
    print_ll(head1);
    delete_rear(head1);
    print_ll(head1);
    cout << "insert 4 at specific position: " << endl;
    insert_pos(head1, 4,2);
    cout<<"after insert_pos" << endl;
    print_ll(head1);

    return 0;
}