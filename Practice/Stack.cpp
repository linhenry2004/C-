#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct student
{
    char name[20];
    int score;
    struct student *next;
};

class Stack
{
private:
    student *ptr;
    student *head;
    student *current;
    student *prev;

public:
    Stack();
    void insert_f(void);
    void delete_f(void);
    void display_f(void);
};

Stack::Stack()
{
    head = new student;
    head->next = NULL;
}

void Stack::insert_f(void)
{
    char s_temp[4];
    ptr = new student;

    cout << "Name: ";
    cin >> ptr->name;
    cout << "Score: ";
    cin >> s_temp;
    ptr->score = atoi(s_temp);

    ptr->next = current;
    prev->next = ptr;
}

void Stack::delete_f(void)
{
    if (head->next == NULL)
    {
        cout << "It is empty\n";
    }
    else
    {
        current = head->next;
        head->next = current->next;
        cout << current->name << " deleted" << endl;
        delete current;
    }
}

void Stack::display_f(void)
{
    int count = 0;
    if (head->next == NULL)
    {
        cout << "No student data\n";
    }
    else
    {
        cout << "Name            Score\n";
        cout << "---------------------\n";
        current = head->next;
        while (current != NULL)
        {
            cout << " ";
            cout.setf(ios::left, ios::adjustfield);
            cout.width(13);
            cout << current->name << " ";
            cout.setf(ios::right, ios::adjustfield);
            cout.width(3);
            cout << current->score << "\n";
            count++;
            current = current->next;
        }
        cout << "---------------------\n";
        cout << count << " datas in total\n";
    }
}

int main()
{
    Stack obj;
    char option1;

    while (1)
    {
        cout << "****** Single list operation ******\n";
        cout << "          <1> Insert               \n";
        cout << "          <2> Delete               \n";
        cout << "          <3> Display              \n";
        cout << "          <4> Exit                 \n";
        cout << "***********************************\n";
        cout << "lease choose between 1 and 4...";
        cin >> option1;
        cout << "\n";

        switch (option1)
        {
        case '1':
            obj.insert_f();
            break;
        case '2':
            obj.delete_f();
            break;
        case '3':
            obj.display_f();
            break;
        case '4':
            exit(0);
        }
    }
}