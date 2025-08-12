#include <iostream>
#include <string>
using namespace std;

//************* 6,7 ****************/

// string binarysearch(string array[], int size, string word)
// {
//     int middle;
//     int s = 0;
//     int e = size - 1;
//     int index;
//     bool found=false;
//     for (int i = 0; i < size; i++)
//     {
//         middle = (s + e) / 2;
//         if (array[middle] == word)
//         {
//             found=true;
//             index=middle+1;
//             break;
//         }
//         else if (word > array[middle])
//         {
//             s = middle + 1;
//         }
//         else
//         {
//             e = middle - 1;
//         }
//     }
//     if (found)
//     {
//         cout << word << " Found At Index " << index<<endl;
//     }
//     else{
//         cout<<"Not Found."<<endl;
//     }

// }

//************* 8 ****************/

// void linearsearch(int array[], int size, int number)
// {
//     int iterations = 0;
//     bool found = false;
//     int index;

//     for (int i = 0; i < size; i++)
//     {
//         iterations++;
//         if (number == array[i])
//         {
//             found = true;
//             index = i + 1;
//             break;
//         }
//     }
//     if (found)
//     {
//         cout << "Found At Index " << index << " After " << iterations << " Iterations." << endl;
//     }
//     else
//     {
//         cout << "Not Found." << endl;
//     }
// }

// void binarysearch(int array[], int size, int find)
// {
//     int middle;
//     int iterations = 0;
//     int s = 0;
//     int e = size-1;
//     bool found = false;
//     for (int i = 0; i < size; i++)
//     {
//         iterations++;
//         middle = (s + e) / 2;
//         if (find == array[middle])
//         {
//             found = true;
//             break;
//         }
//         else if (find > array[middle])
//         {
//             s = middle + 1;
//         }
//         else
//         {
//             e = middle - 1;
//         }
//     }
//     if (found)
//     {
//         cout << "Found At Index " << middle+1 << " After " << iterations << " Iterations." << endl;
//     }
//     else
//     {
//         cout << "Not Found." << endl;
//     }
// }

//************* 9 ****************/

// int bubblesort(int array[], int size)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size-(i+1); j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 int temp = array[j + 1];
//                 array[j + 1] = array[j];
//                 array[j] = temp;
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int selectionsort(int array[], int size)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int index = i;
//         int least = array[i];
//         for (int j = i + 1; j < size; j++)
//         {
//             if (least > array[j])
//             {
//                 least = array[j];
//                 index = j;
//             }
//         }
//         if (array[i] > array[index])
//         {
//             int temp = array[i];
//             array[i] = array[index];
//             array[index] = temp;
//             count++;
//         }
//     }
// }

//************* 10 ****************/
void bubblesort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-(i+1); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
        cout<<"After "<<i+1<<" Pass : ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout<<endl;
    }
}

void selectionsort(int array[], int size)
{
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        int index = i;
        int least = array[i];
        for (int j = i + 1; j < size; j++)
        {
            if (least > array[j])
            {
                least = array[j];
                index = j;
            }
        }
        if (array[i] > array[index])
        {
            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }

        cout<<"After "<<i+1<<" Pass : ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout<<endl;
    }
}

int main()
{
    //************* 10 ****************/

    const int size = 8;
    int array1[size] = {8,7,6,5,4,3,2,1};
    int array2[size] = {8,7,6,5,4,3,2,1};
    cout << "ARRAY 1 : ";
    for (int i = 0; i < size; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;
    bubblesort(array1, size);
    cout << "After Sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << array1[i] << " ";
    }

    cout << "\nARRAY 2 : ";
    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << " ";
    }

    selectionsort(array2, size);
    cout << "\nAfter Sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << " ";
    }

    //************* 9 ****************/

    // const int size = 20;
    // int array1[size] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int array2[size] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int count1 = bubblesort(array1, size);

    // cout << "Number of Swaps during sorting of array1 : " << count1 << endl;

    // cout << "ARRAY 1 : " << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << array1[i] << " ";
    // }

    // int count2 = selectionsort(array2, size);

    // cout << "\nNumber of Swaps during sorting of array2 : " << count2 << endl;

    // cout << "ARRAY 2 : " << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << array2[i] << " ";
    // }

    //************* 8 ****************/

    // const int size = 20;
    // int array[size] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // int find;
    // cout << "Enter A Number To Find : ";
    // cin >> find;
    // linearsearch(array, size, find);

    // int least;
    // int index;
    // for (int i = 0; i < size; i++)
    // {
    //     index=i;
    //     least=array[i];
    //     for (int j = i+1; j < size; j++)
    //     {
    //         if (array[j]<least)
    //         {
    //             least=array[j];
    //             index=j;
    //         }

    //     }

    //     if (array[index]<array[i])
    //     {
    //         int temp=array[i];
    //         array[i]=array[index];
    //         array[index]=temp;
    //     }
    // }
    // cout<<"Array After Sorting : "<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    // cout<<endl;

    // binarysearch(array,size,find);

    //************* 6,7 ****************/

    // const int NUM_NAMES = 20;
    // string names[NUM_NAMES] = {"Collins Bill",
    //                            "Smith, Bart",
    //                            "Allen, Jim",
    //                            "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
    //                            "Taylor, Terri", "Johnson, Jill",
    //                            "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
    //                            "James, Jean", "Weaver, Jim", "Pore, Bob",
    //                            "Rutherford, Greg", "Javens, Renee",
    //                            "Harrison, Rose", "Setzer, Cathy",
    //                            "Pike, Gordon", "Holland, Beth"};

    // int index;
    // for (int i = 0; i < NUM_NAMES; i++)
    // {
    //     string least = names[i];
    //     for (int j = i + 1; j < NUM_NAMES; j++)
    //     {
    //         if (names[j] < least)
    //         {
    //             least = names[j];
    //             index = j;
    //         }
    //     }
    //     if (names[i] > names[index])
    //     {
    //         string temp = names[i];
    //         names[i] = names[index];
    //         names[index] = temp;
    //     }
    // }

    // cout << "Sorted Array Is : " << endl;
    // for (int i = 0; i < NUM_NAMES; i++)
    // {
    //     cout << names[i] << endl;
    // }
    // string find;
    // cout<<"Enter The Name To Find : ";
    // getline(cin,find);
    // binarysearch(names,NUM_NAMES,find);

    //************* 2,3 ****************/

    // int tickets[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

    // int winner;
    // cout << "Enter The Winner Number : ";
    // cin >> winner;
    // bool found = false;
    // int size = sizeof(tickets) / sizeof(tickets[0]);
    // int tickect_number;
    // cout << "*******LINEAR SEARCH*********" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     if (winner == tickets[i])
    //     {
    //         found = true;
    //         tickect_number = i + 1;
    //         break;
    //     }
    // }
    // if (found)
    // {
    //     cout << "CONGRATULATION! Ticket Number " << tickect_number << " Is A Winner." << endl;
    // }
    // else
    // {
    //     cout << "SORRY! No Ticket Matches To The Winner Ticket." << endl;
    // }

    // cout << "*******BINARY SEARCH*********" << endl;
    // int s = 0;
    // int e = size - 1;
    // int middle;
    // bool found1 = false;
    // int ticket_number1;

    // for (int i = 0; i < size; i++)
    // {
    //     middle = (s + e) / 2;
    //     if (tickets[middle] == winner)
    //     {
    //         found1 = true;
    //         ticket_number1 = middle + 1;
    //         break;
    //     }
    //     else if (winner > tickets[middle])
    //     {
    //         s = middle + 1;
    //     }
    //     else
    //     {
    //         e = middle - 1;
    //     }
    // }
    // if (found1)
    // {
    //     cout << "CONGRATULATION! Ticket Number " << ticket_number1 << " Is A Winner." << endl;
    // }
    // else
    // {
    //     cout << "SORRY! No Ticket Matches To The Winner Ticket." << endl;
    // }

    //************* 1,4 ****************/

    // int array[] = {5658845,
    //                4520125,
    //                7895122,
    //                8777541,
    //                8451277,
    //                1302850,
    //                8080152,
    //                4562555,
    //                5552012,
    //                5050552,
    //                7825877,
    //                1250255,
    //                1005231,
    //                6545231,
    //                3852085,
    //                7576651,
    //                7881200,
    //                4581002};
    // int charge_account_number;
    // int size = sizeof(array) / sizeof(array[0]);
    // cout << "Enter Charge Account Number : ";
    // cin >> charge_account_number;

    // bool found = false;
    // cout << "*******LINEAR SEARCH*********" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     if (array[i] == charge_account_number)
    //     {
    //         found = true;
    //         break;
    //     }
    // }

    // if (found)
    // {
    //     cout << "The account number " << charge_account_number << " is valid." << endl;
    // }
    // else
    // {
    //     cout << "The account number " << charge_account_number << " is Invalid." << endl;
    // }

    // cout << "*******SORTING OF ARRAY*********" << endl;
    // int index;
    // for (int i = 0; i < size; i++)
    // {
    //     int least = array[i];
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (array[j] < least)
    //         {
    //             least = array[j];
    //             index = j;
    //         }
    //     }
    //     if (array[index] < array[i])
    //     {
    //         int temp;
    //         temp = array[index];
    //         array[index] = array[i];
    //         array[i] = temp;
    //     }
    // }

    // cout << "Sorted Array Is : " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // cout << "\n*******BINARY SEARCH*********" << endl;
    // int s = 0;
    // int e = size - 1, middle;
    // bool found1 = false;
    // for (int i = 0; i < size; i++)
    // {
    //     middle = (s + e) / 2;
    //     if (charge_account_number == array[middle])
    //     {
    //         found1 = true;
    //         break;
    //     }
    //     else if (charge_account_number > array[middle])
    //     {
    //         s = middle + 1;
    //     }
    //     else
    //     {
    //         e = middle - 1;
    //     }
    // }
    // if (found1)
    // {
    //     cout << "The account number " << charge_account_number << " is valid." << endl;
    // }
    // else
    // {
    //     cout << "The account number " << charge_account_number << " is Invalid." << endl;
    // }

    // SEARCHING AND SORTING PRACTICE

    // const int size=10;
    // int array[size]={1,2,3,4,5,6,7,8,9,10};
    // int key;
    // cout<<"Enter the Number You Want To Find : ";
    // cin>>key;
    // int s=0;
    // int e=size-1;
    // int middle;
    // while (true)
    // {
    //     middle=(s+e)/2;
    //     if (key==array[middle])
    //     {
    //         cout<<key<<" Found at Index : "<<middle<<endl;
    //         break;
    //     }
    //     else if (key>array[middle])
    //     {
    //         s=middle+1;
    //     }
    //     else if (key<array[middle])
    //     {
    //         e=middle-1;
    //     }
    // }

    // // SELECTION SORT
    // int array[6] = {15, 10, 7, 9, 14, 5};
    // int index;

    // cout << "SELECTION SORT" << endl;
    // for (int i = 0; i < 6; i++)
    // {
    //     int least = array[i];
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (least>array[j])
    //         {
    //            least=array[j];
    //            index=j;
    //         }
    //     }

    //     if (array[index]<array[i])
    //         {
    //             int temp=array[index];
    //             array[index]=array[i];
    //             array[i]=temp;
    //         }
    // }
    // cout << "SORTED ARRAY" << endl;
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<array[i]<<" ";
    // }

    // //BUBBLE SORT
    // cout << "\nBUBBLE SORT" << endl;
    // int array[6] = {15, 10, 7, 9, 14, 5};
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         if (array[j] > array[j + 1])
    //         {
    //             int temp;
    //             temp = array[j];
    //             array[j] = array[j + 1];
    //             array[j + 1] = temp;
    //         }
    //     }
    // }
    // cout << "\nSorted Array : " << endl;
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << array[i] << " ";
    // }

    return 0;
}