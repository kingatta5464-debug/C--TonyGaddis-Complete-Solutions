#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <cstring>
#include <stack>
using namespace std;

//***************** 1 *****************/
// template <class t>
// class staticStack
// {
// private:
//     t *stackarray;
//     int stacksize;
//     int top;

// public:
//     staticStack(int size)
//     {
//         stacksize = size;
//         stackarray = new t[stacksize];
//         top = -1;
//     }

//     staticStack(const staticStack &obj)
//     {
//         stacksize = obj.stacksize;
//         if (obj.stacksize > 0)
//         {
//             stackarray = new t[stacksize];
//         }
//         else
//         {
//             stackarray = nullptr;
//         }
//         for (int i = 0; i < stacksize; i++)
//         {
//             stackarray[i] = obj.stackarray[i];
//         }
//         top = obj.top;
//     }
//     ~staticStack()
//     {
//         delete[] stackarray;
//     }
//     bool isfull()
//     {
//         if (top == stacksize - 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool isempty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void pushinstack(t num)
//     {
//         if (isfull())
//         {
//             cout << "The Stack Is Full." << endl;
//         }
//         else
//         {
//             top++;
//             stackarray[top] = num;
//         }
//     }
//     void popfromstack(t &num)
//     {
//         if (isempty())
//         {
//             cout << "Stack Is Empty." << endl;
//         }
//         else
//         {
//             num = stackarray[top];
//             top--;
//         }
//     }
//     int getsize()
//     {
//         return stacksize;
//     }
// };
// template <class t>
// class mathstack : public staticStack<t>
// {
// public:
//     mathstack(int size) : staticStack<t>(size) {};
//     void add()
//     {
//         t first;
//         t second;
//         this->popfromstack(first);
//         this->popfromstack(second);
//         t sum = first + second;
//         this->pushinstack(sum);
//     }
//     void sub()
//     {
//         t first;
//         t second;
//         this->popfromstack(first);
//         this->popfromstack(second);
//         t diff = first - second;
//         this->pushinstack(diff);
//     }
//     void mult()
//     {
//         t first;
//         t second;
//         this->popfromstack(first);
//         this->popfromstack(second);
//         t multiply = first * second;
//         this->pushinstack(multiply);
//     }
//     void div()
//     {
//         t first;
//         t second;
//         this->popfromstack(first);
//         this->popfromstack(second);
//         t divide = second / first;
//         this->pushinstack(divide);
//     }

//     void addall()
//     {
//         t val;
//         t sum = 0;
//         while (!this->isempty())
//         {
//             this->popfromstack(val);
//             sum += val;
//         }
//         this->pushinstack(sum);
//     }
//     void multall()
//     {
//         t val;
//         t mul = 1;
//         while (!this->isempty())
//         {
//             this->popfromstack(val);
//             mul *= val;
//         }
//         this->pushinstack(mul);
//     }
// };

// //***************** 2,5,7,8 *****************/
// template <class t>
// class dynamicstack
// {
// private:
//     struct stacknode
//     {
//         t value;
//         stacknode *next;
//     };
//     stacknode *top;

// public:
//     dynamicstack()
//     {
//         top = nullptr;
//     }
//     ~dynamicstack()
//     {
//         stacknode *nodeptr, *nextnode;
//         nodeptr = top;
//         while (nodeptr != nullptr)
//         {
//             nextnode = nodeptr->next;
//             delete nodeptr;
//             nodeptr = nextnode;
//         }
//     }

//     void pushdynamicstack(t num)
//     {
//         try
//         {
//             stacknode *newnode = new stacknode;
//             newnode->value = num;
//             if (!top)
//             {
//                 top = newnode;
//                 newnode->next = nullptr;
//             }
//             else
//             {
//                 newnode->next = top;
//                 top = newnode;
//             }
//         }
//         catch (bad_alloc &e)
//         {
//             cout << "Memory allocation failed while enqueuing to dynamic queue: " << e.what() << '\n';
//         }
//     }
//     void popdynamicstack(t &num)
//     {
//         stacknode *nodeptr;
//         if (!top)
//         {
//             cout << "Stack Is Empty." << endl;
//         }
//         else
//         {
//             num = top->value;
//             nodeptr = top->next;
//             delete top;
//             top = nodeptr;
//         }
//     }
//     bool isempty()
//     {
//         if (!top)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// template <class t>
// class dynamicmathstack : public dynamicstack<t>
// {
// public:
//     dynamicmathstack() : dynamicstack<t>() {};
//     void multii()
//     {
//         t first;
//         t second;
//         this->popdynamicstack(first);
//         this->popdynamicstack(second);
//         t mu = first * second;
//         pushdynamicstack(mu);
//     }
//     void divv()
//     {
//         t first;
//         t second;
//         this->popdynamicstack(first);
//         this->popdynamicstack(second);
//         t d = second / first;
//         pushdynamicstack(d);
//     }
//     void addall()
//     {
//         t value;
//         t m = 0;
//         while (!this->isempty())
//         {
//             this->popdynamicstack(value);
//             m += value;
//         }
//         this->pushdynamicstack(m);
//     }
//     void multiall()
//     {
//         t value;
//         t m = 1;
//         while (!this->isempty())
//         {
//             this->popdynamicstack(value);
//             m *= value;
//         }
//         this->pushdynamicstack(m);
//     }
// };

// //***************** 3 *****************/

// template <class t>
// class staticQueue
// {
// private:
//     t *queuearray;
//     int queuesize;
//     int front;
//     int rear;
//     int numitems;

// public:
//     staticQueue(int size)
//     {
//         queuearray = new t[size];
//         queuesize = size;
//         front = -1;
//         rear = -1;
//         numitems = 0;
//     }
//     staticQueue(const staticQueue &obj)
//     {
//         if (obj.queuesize < 0)
//         {
//             queuearray = nullptr;
//         }
//         else
//         {
//             queuearray = new t[obj.queuesize];
//         }
//         queuesize = obj.queuesize;
//         front = obj.front;
//         rear = obj.rear;
//         numitems = obj.numitems;

//         for (int i = 0; i < obj.queuesize; i++)
//         {
//             queuearray[i] = obj.queuearray[i];
//         }
//     }
//     ~staticQueue()
//     {
//         delete[] queuearray;
//     }
//     bool isfull()
//     {
//         if (numitems == queuesize)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool isempty()
//     {
//         if (numitems < 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void enqueue(t num)
//     {
//         if (isfull())
//         {
//             cout << "Queue Is Full." << endl;
//         }
//         else
//         {
//             if (rear == queuesize - 1)
//             {
//                 rear = 0;
//             }
//             else
//             {
//                 rear++;
//             }
//             queuearray[rear] = num;
//             numitems++;
//         }
//     }
//     void dequeue(t &num)
//     {
//         if (isempty())
//         {
//             cout << "Queue Is Empty." << endl;
//         }
//         else
//         {
//             if (front == queuesize - 1)
//             {
//                 front = 0;
//             }
//             else
//             {
//                 front++;
//             }
//             num = queuearray[front];
//             numitems--;
//         }
//     }
// };

// //***************** 4,5 *****************/

// template <class t>
// class dynamicQueue
// {
// private:
//     struct queuenode
//     {
//         t value;
//         queuenode *next;
//     };
//     queuenode *front;
//     queuenode *rear;
//     int numitems;

// public:
//     dynamicQueue()
//     {
//         front = nullptr;
//         rear = nullptr;
//         numitems = 0;
//     }
//     bool isempty()
//     {
//         if (numitems < 1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void enqueue(t num)
//     {
//         try
//         {
//             queuenode *newnode = new queuenode;
//             newnode->value = num;
//             newnode->next = nullptr;
//             if (isempty())
//             {
//                 front = newnode;
//                 rear = newnode;
//             }
//             else
//             {
//                 rear->next = newnode;
//                 rear = newnode;
//             }
//             numitems++;
//         }
//         catch (bad_alloc &e)
//         {
//             cout << "Memory allocation failed while enqueuing to dynamic queue: " << e.what() << '\n';
//         }
//     }
//     void dequeue(t &num)
//     {
//         queuenode *nodeptr;
//         if (isempty())
//         {
//             cout << "Dynamic Queue Is Empty." << endl;
//         }
//         else
//         {
//             num = front->value;
//             nodeptr = front->next;
//             delete front;
//             front = nodeptr;
//             numitems--;
//         }
//     }
//     void clear()
//     {
//         t num;
//         while (!isempty())
//         {
//             dequeue(num);
//         }
//     }
//     int size()
//     {
//         return numitems;
//     }
// };

// //***************** 12 *****************/

// class inventry
// {
// private:
//     int serialnum;
//     string date;
//     int lotnumber;

// public:
//     inventry()
//     {
//         serialnum = 0;
//         date = "";
//         lotnumber = 0;
//     }
//     inventry(int s, string d, int l)
//     {
//         serialnum = s;
//         date = d;
//         lotnumber = l;
//     }
//     void setserialnum(int s)
//     {
//         serialnum = s;
//     }
//     void setdate(string s)
//     {
//         date = s;
//     }
//     void setlotnumber(int s)
//     {
//         lotnumber = s;
//     }
//     int getserialnum()
//     {
//         return serialnum;
//     }
//     string getdate()
//     {
//         return date;
//     }
//     int getlotnum()
//     {
//         return lotnumber;
//     }
// };
// class inventorydynamicstack
// {
// private:
//     struct stacknode
//     {
//         int serialnum;
//         string date;
//         int lotnumber;
//         stacknode *next;
//     };
//     stacknode *top;

// public:
//     inventorydynamicstack()
//     {
//         top = nullptr;
//     }
//     ~inventorydynamicstack()
//     {
//         stacknode *nodeptr, *nextnode;
//         nodeptr = top;
//         while (nodeptr != nullptr)
//         {
//             nextnode = nodeptr->next;
//             delete nodeptr;
//             nodeptr = nextnode;
//         }
//     }

//     void pushdynamicstack(inventry num)
//     {
//         try
//         {
//             stacknode *newnode = new stacknode;
//             newnode->serialnum = num.getserialnum();
//             newnode->date = num.getdate();
//             newnode->lotnumber = num.getlotnum();
//             if (!top)
//             {
//                 top = newnode;
//                 newnode->next = nullptr;
//             }
//             else
//             {
//                 newnode->next = top;
//                 top = newnode;
//             }
//         }
//         catch (bad_alloc &e)
//         {
//             cout << "Memory allocation failed while enqueuing to dynamic queue: " << e.what() << '\n';
//         }
//     }
//     void popdynamicstack(inventry &num)
//     {
//         stacknode *nodeptr;
//         if (isempty())
//         {
//             cout << "Stack Is Empty." << endl;
//         }
//         else
//         {
//             num.setserialnum(top->serialnum);
//             num.setdate(top->date);
//             num.setlotnumber(top->lotnumber);
//             nodeptr = top->next;
//             delete top;
//             top = nodeptr;
//         }
//     }
//     bool isempty()
//     {
//         if (!top)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

//***************** 14 *****************/

// bool areparenthesisbalanced(const string &ex)
// {
//     stack<char> s;
//     for (int i = 0; i < ex.size(); i++)
//     {
//         if (ex[i] == '(')
//         {
//             s.push(ex[i]);
//         }
//         else if (ex[i] == ')')
//         {
//             if (s.empty())
//             {
//                 return false;
//             }
//             s.pop();
//         }
//     }

//     return s.empty();
// }

//***************** 15 *****************/

bool ismatchingpair(char open, char close)
{
    return (open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']');
}

bool areparenthesisbalanced(const string &ex)
{
    stack<char> s;
    char top;

    for (int i = 0; i < ex.size(); i++)
    {
        if (ex[i] == '(' || ex[i] == '{' || ex[i] == '[')
        {
            s.push(ex[i]);
        }
        else if (ex[i] == ')' || ex[i] == '}' || ex[i] == ']')
        {
            if (s.empty())
            {
                return false;
            }
            top = s.top();
            s.pop();
            if (!ismatchingpair(top, ex[i]))
            {
                return false;
            }
        }
    }

    return s.empty();
}
int main()
{
    //***************** 15 *****************/

    string characters;
    cout << "Enter String : ";
    getline(cin, characters);

    if (areparenthesisbalanced(characters))
    {
        cout << "The parentheses are balanced." << endl;
    }
    else
    {
        cout << "The parentheses are not balanced." << endl;
    }
    //***************** 14 *****************/

    // string characters;
    // cout<<"Enter String : ";
    // getline(cin,characters);

    //  if (areparenthesisbalanced(characters)) {
    //     cout << "The parentheses are balanced." << endl;
    // } else {
    //     cout << "The parentheses are not balanced." << endl;
    // }

    //***************** 12 *****************/

    // inventorydynamicstack d;
    // int choice;
    // int serialnum;
    // string date;
    // int lotnumber;

    // inventry i,poped;

    // while (true)
    // {
    //     cout << "1. Add A Part In Inventory." << endl;
    //     cout << "2. Take A Part In Inventory." << endl;
    //     cout << "3. Quit The Program." << endl;
    //     cout << "Chose One Option : ";
    //     cin >> choice;
    //     if (choice > 3 || choice < 1)
    //     {
    //         cout << "Invalid Choice, Chose Again : ";
    //         cin >> choice;
    //     }

    //     if (choice == 1)
    //     {
    //         cout << "Enter Serial Number : ";
    //         cin >> serialnum;
    //         i.setserialnum(serialnum);
    //         cin.ignore();
    //         cout << "Enter Date Number : ";
    //         getline(cin,date);

    //         i.setdate(date);
    //         cout << "Enter Lot Number : ";
    //         cin >> lotnumber;
    //         i.setlotnumber(lotnumber);
    //         d.pushdynamicstack(i);
    //     }
    //     else if (choice == 2)
    //     {
    //         d.popdynamicstack(poped);
    //         cout<<"Poped Inventory : "<<endl;
    //         cout<<"Serial Number : "<<poped.getserialnum()<<endl;
    //         cout<<"Date : "<<poped.getdate()<<endl;
    //         cout<<"Lot Number : "<<poped.getlotnum()<<endl;
    //     }
    //     else if(choice==3)
    //     {
    //         break;
    //     }
    // }

    //***************** 11 *****************/

    // ifstream fin1("c18a.txt");
    // ifstream fin2("c18b.txt");

    // dynamicQueue<char> d1, d2;

    // char ch1, ch2;
    // while (fin1.get(ch1))
    // {
    //     d1.enqueue(ch1);
    // }
    // while (fin2.get(ch2))
    // {
    //     d2.enqueue(ch2);
    // }
    // bool identical = true;
    // while (!d1.isempty() && !d2.isempty())
    // {
    //     d1.dequeue(ch1);
    //     d2.dequeue(ch2);

    //     if (ch1 != ch2)
    //     {
    //         cout << "Files Are Not Identical." << endl;
    //         identical = false;
    //         break;
    //     }
    // }
    // if (d1.size() != d2.size())
    // {
    //     cout << "Files Are Not Identical." << endl;
    //     identical = false;
    // }

    // if (identical)
    // {
    //     cout << "Files Are Same." << endl;
    // }

    //***************** 10 *****************/

    // ifstream fin("c18a.txt");
    // ofstream fout("c18b.txt");

    // dynamicQueue<char> d;
    // char ch;
    // while (fin.get(ch))
    // {
    //     d.enqueue(ch);
    // }
    // while (!d.isempty())
    // {
    //     d.dequeue(ch);
    //     fout.put(toupper(ch));
    // }

    //***************** 9 *****************/

    // ifstream fin("c18a.txt");
    // ofstream fout("c18b.txt");
    // dynamicstack<char> d;
    // char ch;
    // while (fin.get(ch))
    // {
    //     d.pushdynamicstack(ch);
    // }
    // while (!d.isempty())
    // {
    //     d.popdynamicstack(ch);
    //     fout.put(ch);
    // }
    // fin.close();
    // fout.close();

    //***************** 7,8 *****************/

    // dynamicmathstack<int> d;
    // d.pushdynamicstack(1);
    // d.pushdynamicstack(2);
    // d.pushdynamicstack(3);
    // d.pushdynamicstack(4);
    // int value;
    // d.multiall();
    // d.popdynamicstack(value);
    // cout<<value<<endl;

    // mathstack<int> m(6);
    // m.pushinstack(1);
    // m.pushinstack(2);
    // m.pushinstack(3);
    // m.pushinstack(4);
    // m.mult();
    // int value;
    // m.popfromstack(value);
    // cout << value << endl;
    // m.popfromstack(value);
    // cout << value << endl;

    //***************** 6 *****************/

    // dynamicstack<string> d;
    // d.pushdynamicstack("Atta Ul Mustafa");
    // d.pushdynamicstack("Meerab Hussain");
    // d.pushdynamicstack("Amna Mushtaq");
    // d.pushdynamicstack("Shanzay Sidiqqui");
    // string name;
    // d.popdynamicstack(name);
    // cout << name << endl;
    // d.popdynamicstack(name);
    // cout << name << endl;
    // d.popdynamicstack(name);
    // cout << name << endl;
    // d.popdynamicstack(name);
    // cout << name << endl;
    // d.popdynamicstack(name);
    return 0;
}