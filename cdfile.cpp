#include <iostream>

using namespace std;

#define MAX 5 // Maximum size of the stack

class Stack {
private:
    int top;
    int arr[MAX];

public:
    // Constructor to initialize stack
    Stack() {
        top = -1;
    }

    // 1. isFull Operation
    bool isFull() {
        return (top == MAX - 1);
    }

    // 2. isEmpty Operation
    bool isEmpty() {
        return (top == -1);
    }

    // 3. Push Operation
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << ". The stack is full." << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into the stack." << endl;
        }
    }

    // 4. Pop Operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop. The stack is empty." << endl;
        } else {
            cout << arr[top] << " popped from the stack." << endl;
            top--;
        }
    }

    // 5. Peek (Top) Operation
    void peek() {
        if (isEmpty()) {
            cout << "The stack is empty. No top element." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // 6. Display Operation
    void display() {
        if (isEmpty()) {
            cout << "The stack is empty." << endl;
        } else {
            cout << "Stack elements (Top to Bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack st;
    int choice, value;

    do {
        cout << "\n--- Stack Operations Menu ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek (Top element)" << endl;
        cout << "4. Check if Empty" << endl;
        cout << "5. Check if Full" << endl;
        cout << "6. Display Stack" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peek();
                break;
            case 4:
                if (st.isEmpty())
                    cout << "Result: Stack is Empty." << endl;
                else
                    cout << "Result: Stack is NOT Empty." << endl;
                break;
            case 5:
                if (st.isFull())
                    cout << "Result: Stack is Full." << endl;
                else
                    cout << "Result: Stack is NOT Full." << endl;
                break;
            case 6:
                st.display();
                break;
            case 7:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please select between 1 and 7." << endl;
        }
    } while (choice != 7);

    return 0;
}