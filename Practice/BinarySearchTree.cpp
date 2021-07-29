#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

typedef struct student
{
    char name[20];
    int score;
    struct student *llink;
    struct student *rlink;
} Node_type;

class Bintree
{
private:
    Node_type *root;
    Node_type *ptr;

public:
    Bintree();
    void insert_f(void);
    void delete_f(void);
    void modify_f(void);
    void show_f(void);
    void insertionNow(char[], int);
    void removing(char[]);
    Node_type *replace(Node_type *);
    void connect(Node_type *, char);
    void inorderToShow(Node_type *);
    void preorderToSave(Node_type *);
    Node_type *searching(char[]);
    Node_type *search_re_r(Node_type *);
    Node_type *search_re_l(Node_type *);
    Node_type *search_p(Node_type *);
};

Bintree::Bintree()
{
    root = NULL;
}

void Bintree::insert_f(void)
{
    char name[20], temp[4];
    int score;

    cout << "=====Input Information=====\n";
    cout << "Name: ";
    cin.getline(name, 20);
    cout << "Score: ";
    cin.getline(temp, 4);
    insertionNow(name, score);
}

void Bintree::delete_f(void)
{
    char name[20];

    if (root == NULL)
    {
        cout << "It is currently empty\n";
        return;
    }
    cout << "=====Delete Information=====\n";
    cout << "Name: ";
    cin.getline(name, 20);
    removing(name);
}

void Bintree::modify_f(void)
{
    Node_type *node;
    char name[20], temp[4];

    if (root == NULL)
    {
        cout << "It is currently empty\n";
        return;
    }
    cout << "=====Modifying Information=====\n";
    cout << "Name: ";
    cin.getline(name, 20);
    if ((node = searching(name)) == NULL)
    {
        cout << "No information\n";
    }
    else
    {
        cout << "Original score: " << node->score << "\n";
        cout << "Input new score: ";
        cin.getline(temp, 4);
        node->score = atoi(temp);
        cout << name << " modified\n";
    }
}

void Bintree::show_f(void)
{
    if (root == NULL)
    {
        cout << "It is currently empty\n";
        return;
    }
    cout << "=====Show Information=====\n";
    inorderToShow(root);
}

void Bintree::inorderToShow(Node_type *node)
{
    if (node != NULL)
    {
        inorderToShow(node->llink);
        cout.setf(ios::left, ios::adjustfield);
        cout.width(10);
        cout << node->name << " ";
        cout.setf(ios::right, ios::adjustfield);
        cout << node->score << "\n";
        inorderToShow(node->rlink);
    }
}

void Bintree::insertionNow(char name[], int score)
{
    Node_type *node, *prev = NULL;
    if (searching(name) != NULL)
    {
        cout << name << " exists\n";
        return;
    }

    ptr = new Node_type;
    strcpy(ptr->name, name);
    ptr->score = score;
    ptr->llink = ptr->rlink = NULL;

    if (root == NULL)
    {
        root = ptr;
    }
    else
    {
        node = root;
        while (node != NULL)
        {
            prev = node;
            if (strcmp(ptr->name, node->name) < 0)
            {
                node = node->llink;
            }
            else
            {
                node = node->rlink;
            }
        }
        if (strcmp(ptr->name, prev->name) < 0)
        {
            prev->llink = ptr;
        }
        else
        {
            prev->rlink = ptr;
        }
    }
}

void Bintree::removing(char name[])
{
    Node_type *del_node;

    if ((del_node = searching(name)) == NULL)
    {
        cout << "No such information\n";
        return;
    }

    if (del_node->llink != NULL || del_node->rlink != NULL)
    {
        del_node = replace(del_node);
    }
    else if (del_node == root)
    {
        root = NULL;
    }
    else
    {
        connect(del_node, 'n');
    }
    delete del_node;
    cout << name << " deleted\n";
}

Node_type *Bintree::replace(Node_type *node)
{
    Node_type *re_node;

    if ((re_node = search_re_r(node->rlink)) == NULL)
    {
        re_node = search_re_l(node->llink);
    }
    if (re_node->rlink != NULL)
    {
        connect(re_node, 'r');
    }
    else if (re_node->llink != NULL)
    {
        connect(re_node, 'l');
    }
    else
    {
        connect(re_node, 'n');
    }
    strcpy(node->name, re_node->name);
    node->score = re_node->score;
    return re_node;
}

void Bintree::connect(Node_type *node, char link)
{
    Node_type *parent;
    parent = search_p(node);
    if (strcmp(node->name, parent->name) < 0)
    {
        if (link == 'r')
        {
            parent->llink = node->rlink;
        }
        else if (link == 'l')
        {
            parent->llink = node->llink;
        }
        else
            parent->llink = NULL;
    }
    else
    {
        if (link == 'r')
        {
            parent->rlink = node->rlink;
        }
        else if (link == 'l')
        {
            parent->rlink = node->llink;
        }
        else
            parent->rlink = NULL;
    }
}

Node_type *Bintree::searching(char target[])
{
    Node_type *node;
    node = root;
    while (node != NULL)
    {
        if (strcmp(target, node->name) == 0)
        {
            return node;
        }
        else
        {
            if (strcmp(target, node->name) == 0)
            {
                node = node->llink;
            }
            else
            {
                node = node->rlink;
            }
        }
    }
    return node;
}

Node_type *Bintree::search_re_r(Node_type *node)
{
    Node_type *re_node;

    re_node = node;
    while (re_node != NULL && re_node->llink != NULL)
    {
        re_node = re_node->llink;
    }
    return re_node;
}

Node_type *Bintree::search_re_l(Node_type *node)
{
    Node_type *re_node;

    re_node = node;
    while (re_node != NULL && re_node->rlink != NULL)
    {
        re_node = re_node->rlink;
    }
    return re_node;
}

Node_type *Bintree::search_p(Node_type *node)
{
    Node_type *parent;

    parent = root;
    while (parent != NULL)
    {
        if (strcmp(node->name, parent->name) < 0)
        {
            if (strcmp(node->name, parent->llink->name) == 0)
            {
                return parent;
            }
            else
            {
                parent = parent->llink;
            }
        }
        else
        {
            if (strcmp(node->name, parent->rlink->name) == 0)
            {
                return parent;
            }
            else
            {
                parent = parent->rlink;
            }
        }
    }
    return NULL;
}

int main()
{
    Bintree obj;
    char option1;

    while (1)
    {
        cout << "\n";
        cout << "****** Single list operation ******\n";
        cout << "          <1> Insert               \n";
        cout << "          <2> Delete               \n";
        cout << "          <3> Modify               \n";
        cout << "          <4> Display              \n";
        cout << "          <5> Exit                 \n";
        cout << "***********************************\n";
        cout << "lease choose between 1 and 5...";
        cin >> option1;
        cout << "\n\n";

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
            obj.show_f();
            break;
        case '5':
            exit(0);
        }
    }
}