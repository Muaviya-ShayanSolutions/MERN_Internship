#include <iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
void insert(node** head, int data) {
    node* new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
    } else {
        node* last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
}
 void printList(node* head) {
    node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
}
node*mergeList(node*List1, node*List2){
	node*head=new node();
	node*curr=head;
	while (true) {
        if (List1 == NULL) {
            curr->next = List2;
            break;
        }
        if (List2 == NULL) {
            curr->next = List1;
            break;
        }
        if (List1->data <= List2->data) {
            curr->next = List1;
            List1 = List1->next;
        } else {
            curr->next = List2;
            List2 = List2->next;
        }
        curr = curr->next;
    }
	return head->next;
}

sort (node*List){
node*SortedList=NULL;
	node* current=List;
	node  *temp = NULL;
    int t;
    if (current == NULL) {
       
    }else {
        while (current != NULL) {
            temp = current->next;
            while (temp != NULL) {
            if (current->data > temp->data) {
                t = current->data;
                current->data = temp->data;
                temp->data = t;
            }
            temp = temp->next;
        }
        current = current->next;
        }
    }

//	while (current != NULL) {
//        cout << current->data << " ";
//        current = current->next;
//    }
}
int main(){
	node*List1=NULL;
	insert(&List1, 7);
	insert(&List1, 88);
	insert(&List1, 9);
	node*List2=NULL;
	insert(&List2, 4);
	insert(&List2, 15);
	insert(&List2, 6);
	node*merge=mergeList(List1,List2);
	printList(merge);
	cout<<endl;
	sort(merge);
sort(merge);
	printList(merge);
}
