#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	int data;
	node *next;
};

void themdau(node *&head,int x){
	node *newnode = new node;
	newnode->data = x;
	newnode->next = head;
	head = newnode;
}
void themcuoi(node *&head,int x){
	node *newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	if(head == NULL){
		head = newnode; 
		return ;
	}
	node *tmp = head;
	while(1){
		if(tmp->next == NULL) break;
		tmp = tmp->next;
	}
	tmp->next= newnode;
}
node *makenode(int x){
	node *res = new node;
	res->data = x;
	res->next = NULL;
	return res;
}
void themgiua(node *head,int x, int k){
	--k;
	node *newnode = new node;
	newnode->data = x;
	node *tmp = head;
	while(k--){
		if(tmp->next == NULL){
			tmp->next = newnode;
			break;
		}
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
}
void duyet(node *head){
	while(head != NULL){
		cout << head->data << ' ';
		head = head->next;
	}
}
int main(){
	node *head = NULL;
	node *v = makenode(2);
	for (int i = 2; i <= 10; i++){
		themdau(head,i);
	}
	themgiua(head,11,3);
	themcuoi(head,1);
	duyet(head);
	return 0;
}
