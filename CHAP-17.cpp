#include <iostream>
using namespace std;

// class number_list
// {
// private:
//     struct listnode
//     {
//         double value;
//         listnode *next;
//     };
//     listnode *head;

// public:
//     number_list()
//     {
//         head = nullptr;
//     }
//     ~number_list()
//     {
//         listnode *nodeptr;
//         listnode *nextnode;
//         nodeptr = head;

//         while (nodeptr->next != nullptr)
//         {
//             nextnode = nodeptr->next;
//             delete nodeptr;
//             nodeptr = nextnode;
//         }
//     }
//     void appendnode(double num)
//     {
//         listnode *newnode;
//         listnode *nodeptr;

//         newnode = new listnode;
//         newnode->value = num;
//         newnode->next = nullptr;

//         if (!head)
//         {
//             head = newnode;
//         }
//         else
//         {
//             nodeptr = head;
//             while (nodeptr->next)
//             {
//                 nodeptr = nodeptr->next;
//             }

//             nodeptr->next = newnode;
//         }
//     }

//     void insertnode(double num)
//     {
//         listnode *newnode;
//         listnode *nodeptr;
//         listnode *previousnode;

//         newnode = new listnode;
//         newnode->value = num;

//         if (!head)
//         {
//             head = newnode;
//             newnode->next = nullptr;
//         }
//         else
//         {
//             nodeptr = head;
//             while (nodeptr->next != nullptr && nodeptr->value < num)
//             {
//                 previousnode = nodeptr;
//                 nodeptr = nodeptr->next;
//             }
//             if (previousnode == nullptr)
//             {
//                 head = newnode;
//                 newnode->next = nodeptr;
//             }
//             else
//             {
//                 previousnode->next = newnode;
//                 newnode->next = nodeptr;
//             }
//         }
//     }

//     void deletenode(double num)
//     {
//         listnode *nodeptr;
//         listnode *previousnode;
//         nodeptr = head;
//         if (!head)
//         {
//             return;
//         }
//         if (head->value == num)
//         {
//             nodeptr = head->next;
//             delete head;
//             head = nodeptr;
//         }

//         else
//         {
//             while (nodeptr->value != num)
//             {
//                 previousnode = nodeptr;
//                 nodeptr = nodeptr->next;
//             }

//             if (nodeptr)
//             {
//                 previousnode->next = nodeptr->next;
//                 delete nodeptr;
//             }
//         }
//     }

//     void displaynodes()
//     {
//         listnode *nodeptr;
//         nodeptr = head;

//         while (nodeptr)
//         {
//             cout << nodeptr->value << endl;
//             nodeptr = nodeptr->next;
//         }
//     }
// };

//********************* 1,2,3,4,5,6,7,8,11,12,14,15 **********************/

template <class t>
class linked_list
{
private:
    struct list
    {
        t value;
        list *next;
    };
    list *head;

public:
    linked_list()
    {
        head = nullptr;
    }

    linked_list(const linked_list &l)
    {

        if (l.head == nullptr)
        {
            head = nullptr;
        }
        else
        {

            head = new list;
            head->value = l.head->value;
            head->next = nullptr;
            list *nodeptr;
            list *l_nodeptr;
            nodeptr = head;
            l_nodeptr = l.head->next;

            while (l_nodeptr)
            {
                list *newnode = new list;
                newnode->value = l_nodeptr->value;
                newnode->next = nullptr;
                nodeptr->next = newnode;
                nodeptr = newnode;
                l_nodeptr = l_nodeptr->next;
            }
        }
    }
    void appending(t num)
    {
        list *newnode;
        list *nodeptr;
        newnode = new list;
        newnode->value = num;
        newnode->next = nullptr;

        if (!head)
        {
            head = newnode;
        }
        else
        {
            nodeptr = head;
            while (nodeptr->next)
            {
                nodeptr = nodeptr->next;
            }

            nodeptr->next = newnode;
        }
    }
    void inserting(t num)
    {
        list *newnode;
        list *nodeptr;
        list *previousnode;
        newnode = new list;
        newnode->value = num;
        newnode->next = nullptr;

        if (!head)
        {
            head = newnode;
            head->next = nullptr;
        }
        else
        {
            nodeptr = head;
            while (nodeptr->next != nullptr && nodeptr->value < num)
            {
                previousnode = nodeptr;
                nodeptr = nodeptr->next;
            }

            if (nodeptr->next != nullptr)
            {
                previousnode->next = newnode;
                newnode->next = nodeptr;
            }
            else
            {
                nodeptr->next = newnode;
            }
        }
    }

    void deleting(t num)
    {
        list *nodeptr;
        list *previousnode;

        if (!head)
        {
            return;
        }
        if (head->value == num)
        {
            nodeptr = head->next;
            delete head;
            head = nodeptr;
        }
        else
        {
            nodeptr = head;

            while (nodeptr->next != nullptr && nodeptr->value != num)
            {
                previousnode = nodeptr;
                nodeptr = nodeptr->next;
            }

            previousnode->next = nodeptr->next;
            delete nodeptr;
        }
    }
    void displaylist()
    {
        list *nodeptr;
        if (!head)
        {
            return;
        }
        else
        {
            nodeptr = head;
            while (nodeptr)
            {
                cout << nodeptr->value << " ";
                nodeptr = nodeptr->next;
            }
        }
    }

    void reverselist()
    {
        list *previous = nullptr;
        list *current = head;
        list *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        head = previous;
    }

    int searchlist(t num)
    {
        list *nodeptr;
        nodeptr = head;
        int position = 0;
        while (nodeptr->next != nullptr)
        {
            if (nodeptr->value != num)
            {
                position++;
                nodeptr = nodeptr->next;
            }
            else if (nodeptr->value == num)
            {
                return position;
            }
        }
        return -1;
    }

    void insertionByPosition(int pos, t val)
    {
        list *nodeptr;
        list *newnode;
        list *previous;
        newnode = new list;
        newnode->value = val;
        newnode->next = nullptr;
        nodeptr = head;
        int size = 0;
        int position = 0;
        while (nodeptr->next != nullptr)
        {
            size++;
            nodeptr = nodeptr->next;
        }
        if (pos == 0)
        {
            newnode->next = head;
            head = newnode;
        }
        else if (pos > size)
        {
            nodeptr = head;
            while (nodeptr->next != nullptr)
            {
                nodeptr = nodeptr->next;
            }

            nodeptr->next = newnode;
        }
        else if (pos < size && pos > 0)
        {
            nodeptr = head;
            while (position != pos)
            {
                position++;
                previous = nodeptr;
                nodeptr = nodeptr->next;
            }

            previous->next = newnode;
            newnode->next = nodeptr;
        }
    }

    void deletionByPosition(int pos)
    {
        list *nodeptr;
        list *previousnode;
        nodeptr = head;
        int size = 0;
        int position = 0;
        while (nodeptr->next != nullptr)
        {
            size++;
            nodeptr = nodeptr->next;
        }

        if (pos > size)
        {
            return;
        }
        else if (pos == 0)
        {
            nodeptr = head->next;
            delete head;
            head = nodeptr;
        }
        else
        {
            nodeptr = head;
            while (position != pos)
            {
                position++;
                previousnode = nodeptr;
                nodeptr = nodeptr->next;
            }
            previousnode->next = nodeptr->next;
            delete nodeptr;
        }
    }
    void mergearray(const int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            inserting(arr[i]);
        }
    }

    t &operator[](int index)
    {
        list *nodeptr = head;
        int currentindex = 0;
        while (nodeptr != nullptr)
        {
            if (currentindex == index)
            {
                return nodeptr->value;
            }
            currentindex++;
            nodeptr = nodeptr->next;
        }
    }

    void pop_back()
    {
        list *nodeptr;
        list *previous;
        if (!head)
        {
            return;
        }
        else
        {
            nodeptr = head;
            while (nodeptr->next != nullptr)
            {
                previous = nodeptr;
                nodeptr = nodeptr->next;
            }

            previous->next = nullptr;
            delete nodeptr;
        }
    }
    void pop_front()
    {
        list *nodeptr;
        if (!head)
        {
            return;
        }
        else
        {
            nodeptr = head->next;
            delete head;
            head = nodeptr;
        }
    }
    void push_front(t num)
    {
        list *nodeptr;
        list *newnode = new list;
        newnode->value = num;
        newnode->next = nullptr;
        if (!head)
        {
            head = newnode;
        }
        else
        {
            nodeptr = head;
            head = newnode;
            newnode->next = nodeptr;
        }
    }

    void push_back(t num)
    {
        list *nodeptr;
        list *newnode;
        newnode = new list;
        newnode->value = num;
        newnode->next = nullptr;
        if (!head)
        {
            return;
        }
        else
        {
            nodeptr = head;
            while (nodeptr->next != nullptr)
            {
                nodeptr = nodeptr->next;
            }
            nodeptr->next = newnode;
        }
    }

    ~linked_list()
    {
        list *nodeptr;
        list *newnode;

        nodeptr = head;
        while (nodeptr)
        {
            newnode = nodeptr->next;
            delete nodeptr;
            nodeptr = newnode;
        }
    }
};

int main()
{
    //********************* 1,2,3,4,5,6,7,8,11,12,14,15 **********************/

    linked_list<int> l1;
    l1.appending(1);
    l1.appending(6);
    l1.appending(17);
    l1.appending(21);
    l1.appending(29);
    l1.appending(32);
    cout << "Before Pop Back Function : " << endl;
    l1.displaylist();
    l1.pop_back();
    cout << "\nAfter Pop Back Function : " << endl;
    l1.displaylist();
    l1.pop_front();
    cout << "\nAfter Pop Front Function : " << endl;
    l1.displaylist();
    l1.push_back(5);
    l1.push_back(1);
    l1.push_back(13);
    cout << "\nAfter Push Back Function : " << endl;
    l1.displaylist();
    l1.push_front(22);
    cout << "\nAfter Push Front Function : " << endl;
    l1.displaylist();

    // l1.inserting(3);
    // cout << "After Inserting : " << endl;
    // l1.displaylist();
    // l1.deleting(6);
    // cout << "After Deleting : " << endl;
    // l1.displaylist();
    // l1.reverselist();
    // cout << "After Reversing : " << endl;
    // l1.displaylist();
    // int position = l1.searchlist(6);
    // cout << "Position : " << position << endl;
    // l1.insertionByPosition(0, 100);
    // cout << "List After Insertion By Position : " << endl;
    // l1.displaylist();
    // l1.deletionByPosition(22);
    // cout << "List After Deletion By Position : " << endl;
    // l1.displaylist();

    // const int size = 3;
    // int array[size] = {102, 14, 2};

    // l1.mergearray(array, size);
    // cout << "List After Calling MergeArray Function : " << endl;
    // l1.displaylist();

    // cout << l1[3] << endl;

    // cout << "Copying l1 into l2 : " << endl;
    // linked_list l2(l1);
    // l2.displaylist();

    //********************* Book **********************/
    // number_list n;
    // n.displaynodes();
    // n.appendnode(3.1);
    // n.appendnode(7.3);
    // n.appendnode(12.4);
    // cout << "Before Inserting A NewNode : " << endl;
    // n.displaynodes();
    // n.insertnode(8.4);
    // cout << "After Inserting A NewNode : " << endl;
    // n.displaynodes();
    // n.deletenode(7.3);
    // cout << "After Deleting A Node : " << endl;
    // n.displaynodes();

    return 0;
}