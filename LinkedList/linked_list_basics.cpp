Added Linked List implementation

#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val ) {
        data = val;
        next = NULL;
    }
};

    void printll(node* head) {
    node* l = head;
    while (l != NULL) {
        cout << l->data << " ";
        l = l->next;
    }
    cout << "\n";
}

    node* createLinkedList(int arr[], int n) {
        if (n == 0) return NULL;

        node* head = new node(arr[0]);
        node* temp = head;

         for (int i = 1; i < n; i++) {
        temp->next = new node(arr[i]);
        temp = temp->next;
       }
    
        return head;
    }
    node* removeelem(node*head,int k){
        if(head==NULL){
        return head;
        }
        if(k==head->data){
        node*temp=head;
        head=head->next;
        free(temp);
        return head;
        }
        node*l=head->next;
        node*prev=head;
        while(l!=NULL){
            if(l->data==k){
                prev->next=prev->next->next;
                free(l);
                break;
            }
            prev=l;
            l=l->next;
        }
        return head;
    
    }


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    node* head = createLinkedList(arr, n);

    int num=arr[5];
    removeelem(head,num);
    
    printll(head);
    


    return 0;
}


