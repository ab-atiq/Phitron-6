// https://github.com/ab-atiq/Phitron_b7_DS_assignment_2/blob/main/problem_query.cpp
#include <bits/stdc++.h>
using namespace std;
class Note
{
public:
    int valu;
    Note *Next;

    Note(int valu)
    {
        this->valu = valu;
        this->Next = NULL;
    }
};

// void delet_at_hed(Note *&Hed)
// {
//     Note *delet_note = Hed;
//     Hed = Hed->Next;
//     delete delet_note;
// }

void delet_at_hed(Note *&head, Note *&tail)
{
    if (head == NULL)
    {
        return;
    }
    Note *deletenode = head;
    head = head->Next;
    delete deletenode;
    if (head == NULL)
    {
        tail = NULL;
    }
}

void delet_at_tail(Note *&Hed, Note *&tail, int indx)
{
    Note *temp = Hed;
    for (int i = 1; i < indx; i++)
    {
        temp = temp->Next;
    }
    Note *Delet_note = temp->Next;
    temp->Next = temp->Next->Next;
    delete Delet_note;
    tail = temp;
}

void delet_at_any(Note *&Hed, int indx)
{
    Note *temp = Hed;
    for (int i = 1; i < indx; i++)
    {
        temp = temp->Next;
    }
    Note *Delet_note = temp->Next;
    temp->Next = temp->Next->Next;
    delete Delet_note;
}

// void insert_at_head(Note *&hed, int valu)
// {
//     Note *New_note = new Note(valu);
//     New_note->Next = hed;
//     hed = New_note;
// }

void insert_at_head(Note *&head, Note *&tail, int value) // reference dite hobe
{
    Note *newnode = new Note(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->Next = head;
    head = newnode; // update
}

void insert_at_any_position(Note *&hed, int index, int valu)
{
    Note *New_note = new Note(valu);
    Note *temp = hed;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->Next;
    }
    New_note->Next = temp->Next;
    temp->Next = New_note;
}
void insert_at_tail(Note *&hed, Note *&tail, int valu)
{
    Note *New_note = new Note(valu);

    if (hed == NULL)
    {
        hed = New_note;
        tail = New_note;
        return;
    }
    tail->Next = New_note;
    tail = tail->Next;
}
void print_linked_list(Note *hed)
{
    Note *temp = hed;
    while (temp != NULL)
    {
        cout << temp->valu << " ";
        temp = temp->Next;
        /* code */
    }
    cout << endl;
}
int print_sz(Note *hed)
{
    int sz;
    Note *temp = hed;
    while (temp != NULL)
    {
        sz++;
        temp = temp->Next;
    }
    return sz;
}
int main()
{
    Note *hed = NULL;
    Note *tail = NULL;
    int valu;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(hed, tail, v);
            print_linked_list(hed);
        }
        else if (x == 1)
        {
            insert_at_tail(hed, tail, v);
            print_linked_list(hed);
        }
        else if (x == 2)
        {
            int sz = print_sz(hed);
            if (v >= sz)
            {
                print_linked_list(hed);
                continue;
            }
            if (v == 0)
            {
                delet_at_hed(hed, tail);
                print_linked_list(hed);
            }
            else if (v == sz - 1)
            {
                delet_at_tail(hed, tail, v);
                print_linked_list(hed);
            }
            else
            {
                delet_at_any(hed, v);
                print_linked_list(hed);
            }
        }
    }

    return 0;
}