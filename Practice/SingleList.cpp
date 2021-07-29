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

class Single_link_list
{
private:
    student *ptr;
    student *head;
    student *current;
    student *prev;
    student *modifyNode;

public:
    Single_link_list();
    void insert_f(void);
    void delete_f(void);
    void display_f(void);
    void modify_f(void);
};

Single_link_list::Single_link_list()
{
    head = new student;
    head->next = NULL;
}

void Single_link_list::insert_f(void)
{
    char s_temp[4];
    ptr = new student;

    cout << "Name: ";
    cin >> ptr->name;
    cout << "Score: ";
    cin >> s_temp;
    ptr->score = atoi(s_temp);
    current = new student;
    prev = head;
    current = head->next;
    while ((current != NULL) && (current->score > ptr->score))
    {
        prev = current;
        current = current->next;
    }
    ptr->next = current;
    prev->next = ptr;
}

void Single_link_list::delete_f(void)
{
    char del_name[20];
    if (head->next == NULL)
    {
        cout << "It is empty\n";
    }
    else
    {
        cout << "Sutdent name: ";
        cin >> del_name;
        prev = head;
        current = head->next;
        while ((current != NULL) && (strcmp(current->name, del_name) != 0))
        {
            prev = current;
            current = current->next;
        }
        if (current != NULL)
        {
            prev->next = current->next;
            delete current;
            cout << del_name << " deleted\n";
        }
        else
        {
            cout << "Can't find " << del_name << "'s data\n";
        }
    }
}

void Single_link_list::modify_f(void)
{
    char n_temp[20], s_temp[4];

    if (head->next == NULL)
    {
        cout << "It is empty\n";
        return;
    }
    else
    {
        cout << "Student name: ";
        cin >> n_temp;
        prev = head;
        current = head->next;
        while ((current != NULL) && strcmp(current->name, n_temp) != 0)
        {
            prev = current;
            current = current->next;
        }
        if (current != NULL)
        {
            cout << "***********************\n";
            cout << " Name: " << current->name << "\n";
            cout << " Score: " << current->score << "\n";
            cout << "***********************\n";
            cout << "Insert new score: ";
            cin >> s_temp;
            current->score = atoi(s_temp);
            cout << " " << n_temp << " data changed\n";
        }
        else
        {
            cout << n_temp << " can't be found\n";
            return;
        }
    }

    modifyNode = new student;
    strcpy(modifyNode->name, current->name);
    modifyNode->score = current->score;

    prev->next = current->next;
    free(current);

    prev = head;
    current = head->next;
    while ((current != NULL) && (current->score > modifyNode->score))
    {
        prev = current;
        current = current->next;
    }
    modifyNode->next = current;
    prev->next = modifyNode;
}

void Single_link_list::display_f(void)
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
    Single_link_list obj;
    char option1;

    while (1)
    {
        cout << "****** Single list operation ******\n";
        cout << "          <1> Insert               \n";
        cout << "          <2> Delete               \n";
        cout << "          <3> Modify               \n";
        cout << "          <4> Display              \n";
        cout << "          <5> Exit                 \n";
        cout << "***********************************\n";
        cout << "lease choose between 1 and 5...";
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
            obj.modify_f();
            break;
        case '4':
            obj.display_f();
            break;
        case '5':
            exit(0);
        }
    }
}