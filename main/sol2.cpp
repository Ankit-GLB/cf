#include<bits/stdc++.h>
using namespace std;

int top = -1;

void push(int stack[100],int n){
    cout << "enter the value to insert into the stack:" << endl;
	int value;
	cin >> value;
	
	if(top == n-1){
		printf("stack is full");
	}
	else{
		top++;
		stack[top] = value;
	}
}

void pop(){
    
}
void display(){
    
}
int main(){
	int n,stack[100];
	cout << " enter the size  of stack you want to create :" << endl;
	cin >> n;

	for(int i=0 ; i<n ; i++){
		cin >> stack[i];
	}	

	int choice;
	printf("press 1 for push\n");
	printf("press 2 for pop\n");
	printf("press 3 to display top element\n");
	cin >> choice;

	switch(choice){a
		case 1: push(stack,n);
		break;

		case 2: pop();
		break;

		case 3: display();
		break;
	}
	


	return 0;
}