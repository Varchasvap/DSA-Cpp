#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node*back;
    node(int val,node*next1,node*back1){
        data=val;
        next=next1;
        back=back1;
    }

    node(int val ) {
        data = val;
        next = NULL;
        back=NULL;
    }
};
node* createLinkedList(int arr[], int n) {
        if (n == 0) return NULL;
        node*head=new node(arr[0]);
        node*prev=head;
        for(int i=1;i<n;i++){
           node*temp=new node(arr[i],NULL,prev);
           prev->next=temp;
           prev=temp;
        }
        
    
        return head;
    }
    void printll(node* head) {
    node* l = head;
    while (l != NULL) {
        cout << l->data << " ";
        l = l->next;
    }
    cout << "\n";
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    
    node*head=createLinkedList(arr, n);
    printll(head);
    
    

    return 0;
}
