#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct student
{
    char name[20];
    int score;
    struct student *llink;
    struct student *rlink;
};

class Double_link_list
{
private:
    student *ptr;
    student *head;
    student *current;
    student *prev;
    student *modifyNode;

public:
    Double_link_list();
    void insert_f(void);
    void delete_f(void);
    void display_f(void);
    void modify_f(void);
};

Double_link_list::Double_link_list()
{
    ptr = new student;
    strcpy(ptr->name, "0");
    ptr->llink = ptr;
    ptr->rlink = ptr;
    head = ptr;
}

void Double_link_list::insert_f(void)
{
    char s_temp[4];
    ptr = new student;

    cout << "Name: ";
    cin >> ptr->name;
    cout << "Score: ";
    cin >> s_temp;
    ptr->score = atoi(s_temp);
    prev = head;
    current = head->rlink;
    while ((current != head) && (current->score >= ptr->score))
    {
        prev = current;
        current = current->rlink;
    }
    ptr->rlink = current;
    ptr->llink = prev;
    prev->rlink = ptr;
    current->llink = ptr;
}

void Double_link_list::delete_f(void)
{
    char del_name[20];
    if (head->rlink == NULL)
    {
        cout << "It is empty\n";
    }
    else
    {
        cout << "Sutdent name: ";
        cin >> del_name;
        prev = head;
        current = head->rlink;
        while ((current != head) && (strcmp(current->name, del_name) != 0))
        {
            prev = current;
            current = current->rlink;
        }
        if (current != head)
        {
            prev->rlink = current->rlink;
            current->rlink->llink = prev;
            delete current;
            cout << del_name << " deleted\n";
        }
        else
        {
            cout << "Can't find " << del_name << "'s data\n";
        }
    }
}

void Double_link_list::modify_f(void)
{
    char n_temp[20], s_temp[4];

    if (head->rlink == head)
    {
        cout << "It is empty\n";
        return;
    }
    else
    {
        cout << "Student name: ";
        cin >> n_temp;
        prev = head;
        current = head->rlink;
        while ((current != head) && strcmp(current->name, n_temp) != 0)
        {
            prev = current;
            current = current->rlink;
        }
        if (current != head)
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

    prev->rlink = current->rlink;
    current->rlink->llink = prev;
    free(current);

    prev = head;
    current = head->rlink;
    while ((current != head) && (current->score >= modifyNode->score))
    {
        prev = current;
        current = current->rlink;
    }
    modifyNode->rlink = current;
    modifyNode->llink = prev;
    prev->rlink = modifyNode;
    current->llink = modifyNode;
}

void Double_link_list::display_f(void)
{
    int count = 0;
    if (head->rlink == NULL)
    {
        cout << "No student data\n";
    }
    else
    {
        cout << "Name            Score\n";
        cout << "---------------------\n";
        current = head->rlink;
        while (current != head)
        {
            cout << " ";
            cout.setf(ios::left, ios::adjustfield);
            cout.width(13);
            cout << current->name << " ";
            cout.setf(ios::right, ios::adjustfield);
            cout.width(3);
            cout << current->score << "\n";
            count++;
            current = current->rlink;
        }
        cout << "---------------------\n";
        cout << count << " datas in total\n";
    }
}

int main()
{
    Double_link_list obj;
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