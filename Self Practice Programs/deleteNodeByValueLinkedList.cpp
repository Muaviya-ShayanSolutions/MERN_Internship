#include<iostream>
using namespace std;

class Node{
	int value;
	Node* next;
	public:
	Node(int x){
		value = x;
		next = NULL;
	}
	void set_value(int x){
		value = x;
	}
	void set_next(Node *n){
		next = n;
	}
	int get_value(){
		return value;
	}
	Node* get_next(){
		return next;
	}
};

class LinkedList{
	Node *start;
	public:
	LinkedList(){
		start = NULL;		
	}
	bool is_empty(){
		return start==NULL;
	}
	void add_node(){
		cout << "Enter value of node to add : ";
		int val;
		cin >> val;
		Node* new_node = new Node(val);
		new_node->set_next(start);
		start = new_node;
	}
	
	void print_all(){
		Node* s = start;
		
		while(s!=NULL){
			cout<<s->get_value()<< " ";
			s = s->get_next();
		}
	}
	int size(){
		int count = 0;
		Node* s = start;
		while(s!=NULL){
			count++;
			s = s->get_next();
		}
		return count;
	}

	void delete_node(){
		int x;
		cout << "Enter value to delete : ";
			cin >>x;
		if(start==NULL) return;
		if(start->get_value()==x){
			Node* temp = start;
			start = start->get_next();
			delete(temp);
			return;
		}
		else{
			Node* s = start;
			while(s->get_next()!=NULL && s->get_next()->get_value()!=x){
				s = s->get_next();
			}
			if(s->get_next()==NULL){
				return;
			}
			else{
				Node* temp = s->get_next();
				s->set_next(temp->get_next());
				delete(temp);
			}
		}
		print_all();
	}

};


int main(){
	LinkedList list;
	list.add_node();
	list.add_node();
	list.add_node();
	list.print_all();
	list.delete_node();
	
	cout<<endl<<"The elements in the list :"<<list.size();
	
}

