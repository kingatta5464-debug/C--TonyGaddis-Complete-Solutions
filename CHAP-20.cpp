#include <iostream>
using namespace std;

//***************** 1,2,3,4,6,7 *****************/

// template <class T>
// class binarytree
// {
// private:
//     struct treenode
//     {
//         T value;
//         treenode *left;
//         treenode *right;
//     };
//     treenode *root;

//     void insert(treenode *&nodeptr, treenode *&newnode)
//     {
//         if (nodeptr == nullptr)
//         {
//             nodeptr = newnode;
//         }
//         else if (nodeptr->value > newnode->value)
//         {
//             insert(nodeptr->left, newnode);
//         }
//         else
//         {
//             insert(nodeptr->right, newnode);
//         }
//     }

//     void makedeletion(treenode *&nodeptr)
//     {
//         treenode *tempnode = nullptr;

//         if (nodeptr == nullptr)
//         {
//             cout << "Can Not Delete Empty Node." << endl;
//         }
//         else if (nodeptr->right == nullptr)
//         {
//             tempnode = nodeptr;
//             nodeptr = nodeptr->left;
//             delete tempnode;
//         }
//         else if (nodeptr->left == nullptr)
//         {
//             tempnode = nodeptr;
//             nodeptr = nodeptr->right;
//             delete tempnode;
//         }
//         else
//         {
//             tempnode = nodeptr->right;

//             while (tempnode->left)
//             {
//                 tempnode = tempnode->left;
//             }
//             tempnode->left = nodeptr->left;

//             tempnode = nodeptr;
//             nodeptr = nodeptr->right;
//             delete tempnode;
//         }
//     }
//     void deletenode(T num, treenode *&nodeptr)
//     {
//         if (nodeptr->value > num)
//         {
//             deletenode(num, nodeptr->left);
//         }
//         else if (num > nodeptr->value)
//         {
//             deletenode(num, nodeptr->right);
//         }
//         else
//         {
//             makedeletion(nodeptr);
//         }
//     }

//     void destroysubtrees(treenode *&nodeptr)
//     {
//         if (nodeptr)
//         {
//             if (nodeptr->left)
//             {
//                 destroysubtrees(nodeptr->left);
//             }
//             if (nodeptr->right)
//             {
//                 destroysubtrees(nodeptr->right);
//             }

//             delete nodeptr;
//         }
//     }

//     void inordertraversal(treenode *&nodeptr)
//     {
//         if (nodeptr)
//         {
//             inordertraversal(nodeptr->left);
//             cout << nodeptr->value << endl;
//             inordertraversal(nodeptr->right);
//         }
//     }
//     void preordertraversal(treenode *&nodeptr)
//     {
//         if (nodeptr)
//         {
//             cout << nodeptr->value << endl;
//             inordertraversal(nodeptr->left);
//             inordertraversal(nodeptr->right);
//         }
//     }
//     void postordertraversal(treenode *&nodeptr)
//     {
//         if (nodeptr)
//         {
//             inordertraversal(nodeptr->left);
//             inordertraversal(nodeptr->right);
//             cout << nodeptr->value << endl;
//         }
//     }

// public:
//     binarytree()
//     {
//         root = nullptr;
//     }
//     void removenode(T num)
//     {
//         deletenode(num, root);
//     }
//     void insertnode(T num)
//     {
//         treenode *newnode = new treenode;
//         newnode->value = num;
//         newnode->left = nullptr;
//         newnode->right = nullptr;
//         insert(root, newnode);
//     }
//     bool searchnode(T num)
//     {
//         treenode *nodeptr;
//         nodeptr = root;
//         while (nodeptr)
//         {
//             if (nodeptr->value == num)
//             {
//                 return true;
//             }
//             if (nodeptr->value > num)
//             {
//                 nodeptr = nodeptr->left;
//             }
//             else
//             {
//                 nodeptr = nodeptr->right;
//             }
//         }
//         return false;
//     }

//     void displayinorder()
//     {
//         inordertraversal(root);
//     }
//     void displaypreorder()
//     {
//         preordertraversal(root);
//     }
//     void displaypostorder()
//     {
//         postordertraversal(root);
//     }

//     int totalnodes(treenode *&nodeptr)
//     {
//         if (nodeptr == nullptr)
//         {
//             return 0;
//         }
//         else
//         {
//             return 1 + totalnodes(nodeptr->left) + totalnodes(nodeptr->right);
//         }
//     }

//     int countnodes()
//     {
//         int x = totalnodes(root);
//         return x;
//     }

//     int totalleaafnodes(treenode *&nodeptr)
//     {
//         if (nodeptr == nullptr)
//         {
//             return 0;
//         }
//         else if (nodeptr->left == nullptr && nodeptr->right == nullptr)
//         {
//             return 1;
//         }
//         return totalleaafnodes(nodeptr->left) + totalleaafnodes(nodeptr->right);
//     }
//     int countleafnodes()
//     {
//         int x = totalleaafnodes(root);
//         return x;
//     }

//     int getheight(treenode *&nodeptr)
//     {
//         if (nodeptr == nullptr)
//         {
//             return 0;
//         }

//         int left = getheight(nodeptr->left);
//         int right = getheight(nodeptr->right);

//         return 1 + max(left, right);
//     }
//     int heightoftree()
//     {
//         int x = getheight(root);
//     }

//     treenode *copytree(treenode *&obj)
//     {
//         if (obj == nullptr)
//         {
//             return nullptr;
//         }
//         treenode *newnode = new treenode;
//         newnode->value = obj->value;
//         newnode->left = obj->left;
//         newnode->right = obj->right;
//         return newnode;
//     }
//     binarytree(binarytree &other)
//     {
//         root = copytree(other.root);
//     }

//     binarytree &operator=(binarytree &other)
//     {
//         if (this != &other)
//         {
//             root = copytree(other.root);
//         }
//         return *this;
//     }
// };

//***************** 8 *****************/

class employeeinfo{
    public:
    int id;
    string name;
    employeeinfo(){
        id=0;
        name="";
    }
    employeeinfo(int id, string name){
        this->id=id;
        this->name=name;
    }
    void setid(int id){
        this->id=id;
    }
    void setname(string n){
        name =n;
    }
    int getid(){
        return id;
    }
    string getname(){
        return name;
    }
};

template <class T>
class binarytree
{
private:
    struct treenode
    {
        employeeinfo e;
        T value;
        treenode *left;
        treenode *right;
    };
    treenode *root;

    void insert(treenode *&nodeptr, treenode *&newnode)
    {
        if (nodeptr == nullptr)
        {
            nodeptr = newnode;
        }
        else if (nodeptr->value > newnode->value)
        {
            insert(nodeptr->left, newnode);
        }
        else
        {
            insert(nodeptr->right, newnode);
        }
    }

    void makedeletion(treenode *&nodeptr)
    {
        treenode *tempnode = nullptr;

        if (nodeptr == nullptr)
        {
            cout << "Can Not Delete Empty Node." << endl;
        }
        else if (nodeptr->right == nullptr)
        {
            tempnode = nodeptr;
            nodeptr = nodeptr->left;
            delete tempnode;
        }
        else if (nodeptr->left == nullptr)
        {
            tempnode = nodeptr;
            nodeptr = nodeptr->right;
            delete tempnode;
        }
        else
        {
            tempnode = nodeptr->right;

            while (tempnode->left)
            {
                tempnode = tempnode->left;
            }
            tempnode->left = nodeptr->left;

            tempnode = nodeptr;
            nodeptr = nodeptr->right;
            delete tempnode;
        }
    }
    void deletenode(T num, treenode *&nodeptr)
    {
        if (nodeptr->value > num)
        {
            deletenode(num, nodeptr->left);
        }
        else if (num > nodeptr->value)
        {
            deletenode(num, nodeptr->right);
        }
        else
        {
            makedeletion(nodeptr);
        }
    }

    void destroysubtrees(treenode *&nodeptr)
    {
        if (nodeptr)
        {
            if (nodeptr->left)
            {
                destroysubtrees(nodeptr->left);
            }
            if (nodeptr->right)
            {
                destroysubtrees(nodeptr->right);
            }

            delete nodeptr;
        }
    }

    void inordertraversal(treenode *&nodeptr)
    {
        if (nodeptr)
        {
            inordertraversal(nodeptr->left);
            cout << nodeptr->value << endl;
            inordertraversal(nodeptr->right);
        }
    }
    void preordertraversal(treenode *&nodeptr)
    {
        if (nodeptr)
        {
            cout << nodeptr->value << endl;
            inordertraversal(nodeptr->left);
            inordertraversal(nodeptr->right);
        }
    }
    void postordertraversal(treenode *&nodeptr)
    {
        if (nodeptr)
        {
            inordertraversal(nodeptr->left);
            inordertraversal(nodeptr->right);
            cout << nodeptr->value << endl;
        }
    }

public:
    binarytree()
    {
        root = nullptr;
    }
    void removenode(T num)
    {
        deletenode(num, root);
    }
    void insertnode(T num)
    {
        treenode *newnode = new treenode;
        newnode->value = num;
        newnode->left = nullptr;
        newnode->right = nullptr;
        insert(root, newnode);
    }
    bool searchnode(T num)
    {
        treenode *nodeptr;
        nodeptr = root;
        while (nodeptr)
        {
            if (nodeptr->value == num)
            {
                return true;
            }
            if (nodeptr->value > num)
            {
                nodeptr = nodeptr->left;
            }
            else
            {
                nodeptr = nodeptr->right;
            }
        }
        return false;
    }

    void displayinorder()
    {
        inordertraversal(root);
    }
    void displaypreorder()
    {
        preordertraversal(root);
    }
    void displaypostorder()
    {
        postordertraversal(root);
    }

    int totalnodes(treenode *&nodeptr)
    {
        if (nodeptr == nullptr)
        {
            return 0;
        }
        else
        {
            return 1 + totalnodes(nodeptr->left) + totalnodes(nodeptr->right);
        }
    }

    int countnodes()
    {
        int x = totalnodes(root);
        return x;
    }

    int totalleaafnodes(treenode *&nodeptr)
    {
        if (nodeptr == nullptr)
        {
            return 0;
        }
        else if (nodeptr->left == nullptr && nodeptr->right == nullptr)
        {
            return 1;
        }
        return totalleaafnodes(nodeptr->left) + totalleaafnodes(nodeptr->right);
    }
    int countleafnodes()
    {
        int x = totalleaafnodes(root);
        return x;
    }

    int getheight(treenode *&nodeptr)
    {
        if (nodeptr == nullptr)
        {
            return 0;
        }

        int left = getheight(nodeptr->left);
        int right = getheight(nodeptr->right);

        return 1 + max(left, right);
    }
    int heightoftree()
    {
        int x = getheight(root);
    }

    treenode *copytree(treenode *&obj)
    {
        if (obj == nullptr)
        {
            return nullptr;
        }
        treenode *newnode = new treenode;
        newnode->value = obj->value;
        newnode->left = obj->left;
        newnode->right = obj->right;
        return newnode;
    }
    binarytree(binarytree &other)
    {
        root = copytree(other.root);
    }

    binarytree &operator=(binarytree &other)
    {
        if (this != &other)
        {
            root = copytree(other.root);
        }
        return *this;
    }
};

int main()
{

    //***************** 8 *****************/


    //***************** 1,2,3,4,6,7 *****************/
    // binarytree<int> b;
    // b.insertnode(5);
    // b.insertnode(8);
    // b.insertnode(3);
    // b.insertnode(12);
    // b.insertnode(9);
    // cout << "Inorder Traversal Values : " << endl;
    // b.displayinorder();
    // cout << "Preorder Traversal Values : " << endl;
    // b.displaypreorder();
    // cout << "Postorder Traversal Values : " << endl;
    // b.displaypostorder();

    // b.removenode(8);
    // cout << "After Deletion : " << endl;
    // b.displaypostorder();

    // cout << "Search : " << endl;
    // bool find = b.searchnode(12);
    // if (find)
    // {
    //     cout << "12 Found." << endl;
    // }
    // else
    // {
    //     cout << "12 Not Found." << endl;
    // }

    // find = b.searchnode(4);
    // if (find)
    // {
    //     cout << "4 Found." << endl;
    // }
    // else
    // {
    //     cout << "4 Not Found." << endl;
    // }

    // int numnodes = b.countnodes();
    // cout << "Number Of Nodes Are : " << numnodes << endl;
    // int numleafnodes = b.countleafnodes();
    // cout << "Number Of Leaf Nodes Are : " << numleafnodes << endl;

    // int height = b.heightoftree();
    // cout << "Height Of Tree : " << height << endl;

    // binarytree<int> t1,t2;

    // cout << "T1 After = Operator Overloading : " << endl;
    // t1 = b;
    // t1.displayinorder();

    // int arr[8]={12,4,65,8,41,19,81,51};
    // for (int i = 0; i < 8; i++)
    // {
    //     t2.insertnode(arr[i]);
    // }

    // cout<<"T2 After Array Values Assigned To Binary Tree : "<<endl;
    // t2.displayinorder();

    return 0;
}