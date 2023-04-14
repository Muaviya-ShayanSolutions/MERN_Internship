#include<iostream>

using namespace std;

class Node {
    private: int value;
    Node * next;
    public: Node(int x = 0) {
        value = x;
        next = NULL;
    }
    void set_value(int x) {
        value = x;
    }
    void set_next(Node * n) {
        next = n;
    }
    int get_value() {
        return value;
    }
    Node * get_next() {
        return next;
    }
};

class Single_linked_list {
    Node * head;
    public:
        Single_linked_list() {
            head = NULL;
        }
    bool is_empty() {
        return head == NULL;
    }
    void add() {
        int x;
        cout << "Enter value of Node : ";
        cin >> x;
        Node * new_node = new Node(x);
        if (is_empty()) {
            head = new_node;
        } else {
            new_node -> set_next(head);
            head = new_node;
        }
    }
    void print_all() {
    	cout << "Elements in List : ";
        Node * temp = head;
        while (temp != NULL) {
            cout << temp -> get_value() << " ";
            temp = temp -> get_next();
        }
        cout << endl;
    }

    int size() {
        int count = 0;
        Node * temp = head;
        while (temp != NULL) {
            count++;
            temp = temp -> get_next();
        }
        return count;
    }
    void delete_node() {
        cout << "Orignal Head -> " << head -> get_value() << endl;
        if (is_empty()) {
            cout << "List is empty";
        } else {
            //print_all(); 
            int linkedlistCount = size();
            int index;
            int count = 1;
            cout << "Enter index of element you want to delete : ";
            cin >> index;
            if (index > linkedlistCount) {
                cout << "Invalid Index";
            } else {
                Node * temp = head;
                while (temp != NULL) {
                    if (index == 1) {
                        Node * temp1 = temp -> get_next();
                        head = temp1;
                        cout << endl << "Head -> " << head -> get_value() << endl;
                        delete temp;
                        break;
                    } else {
                        count++;
                        if (count == index) {
                            cout << temp -> get_value();
                            if (temp -> get_next() != NULL) {
                                Node * temp1 = temp -> get_next();
                                temp -> set_next(temp1 -> get_next());
                                cout << endl << "Head -> " << head -> get_value() << endl;
                                delete temp1;
                            }

                        } else {

                            temp = temp -> get_next();
                        }
                    }

                }
                print_all();
            }

        }
    }
};

int main() {
    Single_linked_list list;
    list.add();
    list.add();
    list.add();
    list.print_all();
    list.delete_node();
    //	list.print_all();

}
