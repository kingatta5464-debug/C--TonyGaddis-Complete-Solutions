#include <iostream>
#include <climits>
using namespace std;

//************ 1 ***********/

// int *allocatearray(int size)
// {
//     int *array = new int[size];
//     return array;
// }

//************ 2,3,4 ***********/

// void sorting(int scores[], string names[], int size)
// {
//     int least;
//     for (int i = 0; i < size; i++)
//     {
//         int index = i;
//         least = scores[i];
//         for (int j = i + 1; j < size; j++)
//         {
//             if (least > scores[j])
//             {
//                 least = scores[j];
//                 index = j;
//             }
//         }
//         cout << "Least on pass " << i + 1 << " : " << least << endl;
//         if (scores[index] < scores[i])
//         {
//             int temp1 = scores[index];
//             scores[index] = scores[i];
//             scores[i] = temp1;

//             string temp2 = names[index];
//             names[index] = names[i];
//             names[i] = temp2;
//         }
//     }
// }

// int averagescores(int scores[], int size)
// {
//     int total = 0;
//     int average;
//     int least = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (least > scores[i])
//         {
//             least = scores[i];
//         }

//         total += scores[i];
//     }
//     // return ((total-least) / (size-1)); //for question 3
//     return (total / size);
// }

//************ 5 ***********/

// int doSomething(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y * 10;
//     *y = temp * 10;
//     return *x + *y;
// }

//************ 8,13 ***********/

int modecheck(int array[], int size)
{
    int *occurence = new int[size];
    int count = 0;
    int num;
    for (int i = 0; i < size; i++)
    {
        num = array[i];
        for (int j = 0; j < size; j++)
        {
            if (array[j] == num)
            {
                count++;
            }
        }
        occurence[i] = count;
        count = 0;
    }

    int highest = INT_MIN;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (highest < occurence[i])
        {
            highest = occurence[i];
            index = i;
        }
    }
    if (highest < 2)
    {
        return -1;
    }
    else
    {
        return index;
    }
}

//************ 9,13 ***********/

double mediancheck(int array[], int size)
{
    int count = 0;
    int least;
    int index;
    for (int i = 0; i < size; i++)
    {
        index = i;
        least = array[i];
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
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    double total = 0, average;

    // for (int i = 0; i < size; i++)
    // {
    //     count++;
    // }
    int middle;
    if ((size % 2) == 0)
    {
        middle = size / 2;
        total = array[middle] + array[middle - 1];
        average = total / 2;
        return average;
    }
    else
    {
        middle = size / 2;
        return (array[middle]);
    }
}

//************ 10 ***********/

// int *reversearray(int array1[], int size)
// {
//     int *array2 = new int[size];
//     int index = size - 1;
//     for (int i = 0; i < size; i++)
//     {
//         *(array2 + i) = *(array1 + i);
//     }
//     for (int i = 0; i < size / 2; i++)
//     {
//         int temp = array2[i];
//         array2[i] = array2[index];
//         array2[index] = temp;
//         index--;
//     }

//     return array2;
// }

//************ 11 ***********/

// void doublesizearray(int array1[], int size)
// {
//     int *array2 = new int[size * 2];
//     for (int i = 0; i < size * 2; i++)
//     {
//         if (i < size)
//         {
//             *(array2 + i) = *(array1 + i);
//         }
//         else
//         {
//             *(array2 + i) = 0;
//         }
//     }
//     cout << "Array 2 : ";
//     for (int i = 0; i < size * 2; i++)
//     {
//         cout << *(array2 + i) << " ";
//     }
//     delete [] array2;
// }

//************ 12 ***********/

// int* newarray(int array1[],int size){
//     int* array2=new int [size+1];
//     *(array2)=0;
//     int x=0;

//     for (int i = 1; i < (size+1); i++)
//     {
//         *(array2+i)=*(array1+x);
//         x++;
//     }
//     return array2;

// }

int main()
{
    //************ 13(8(mode),9(median)) ***********/

    int surveyed_students;
    cout << "Number Of Students Syrveyed : ";
    cin >> surveyed_students;
    int *movies = new int[surveyed_students];
    cout << "Total Movies Watched In Whole Month by " << endl;
    for (int i = 0; i < surveyed_students; i++)
    {
        cout << " Student " << i + 1 << " : ";
        cin >> movies[i];
    }

    int mode;
    double median;
    mode = modecheck(movies, surveyed_students);
    if (mode == -1)
    {
        cout << "All Values Are Occured Once." << endl;
        cout << "So, There Is No Mode." << endl;
    }
    else
    {
        cout << "Mode : " << movies[mode] << endl;
    }
    median = mediancheck(movies, surveyed_students);
    cout << "\nMedian : " << median << endl;

    //************ 12 ***********/

    // int size;
    // cout << "Enter size of array : ";
    // cin >> size;
    // int *array1 = new int[size];
    // cout << "Enter Elements of array : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> *(array1 + i);
    // }
    // int* array2=newarray(array1,size);
    // cout<<"\nNew Array : ";
    // for (int i = 0; i < size+1; i++)
    // {
    //     cout<<array2[i]<<" ";
    // }

    //************ 11 ***********/

    // int size;
    // cout << "Enter size of array : ";
    // cin >> size;
    // int *array1 = new int[size];
    // cout << "Enter Elements of array : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> *(array1 + i);
    // }
    // doublesizearray(array1, size);
    // delete [] array1;

    //************ 10 ***********/

    // int size;
    // cout << "Enter size of array : ";
    // cin >> size;
    // int *array1 = new int[size];
    // cout << "Enter Elements of array : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> *(array1 + i);
    // }

    // int *array2 = reversearray(array1, size);
    // cout << "Array 1 : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *(array1+i) << " ";
    // }
    // cout << endl;

    // cout << "Array 2 : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *(array2+i) << " ";
    // }

    //************ 9 ***********/

    // int size;
    // cout << "Enter The Size : ";
    // cin >> size;
    // int *array = new int[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> *(array + i);
    // }
    // double median;
    // median = mediancheck(array, size);
    // cout << "\nMedian : " << median << endl;

    //************ 8 ***********/

    // int size;
    // cout << "Enter The Size Of Array : ";
    // cin >> size;
    // int *array = new int[size];
    // cout << "Enter the Values To Find Mode : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> array[i];
    // }
    // int mode = modecheck(array, size);
    // if (mode == -1)
    // {
    //     cout << "All Values Occurs One Time So There Is No Mode." << endl;
    // }
    // else
    // {
    //     cout << "Mode : " << array[mode] << endl;
    // }

    //************ 6,7 ***********/

    // Question 6 and 7 are just book question modifications

    //************ 5 ***********/

    // int x=2;
    // int y=3;
    // int z=doSomething(&x,&y);
    // cout<<"z : "<<z<<endl;
    // cout<<"x : "<<x<<endl;
    // cout<<"y : "<<y<<endl;

    //************ 2,3,4 ***********/

    // int size, average;
    // cout << "Enter Number Of Players Scores : ";
    // cin >> size;
    // string *names = new string[size];
    // int *scores = new int[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Player " << i + 1 << " Name : ";
    //     cin >> names[i];
    //     cout << names[i] << " Test Scores : ";
    //     cin >> *(scores + i);
    //     while ((*(scores + i)) < 0)
    //     {
    //         cout << "Score Can't Be In Negative Numbers. Try Again" << endl;
    //         cout << names[i] << " Test Scores : ";
    //         cin >> *(scores + i);
    //     }
    // }
    // sorting(scores, names, size);
    // cout << "scores After Sorting :" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *(names + i) << " Scores : " << *(scores + i) << endl;
    // }
    // average = averagescores(scores, size);
    // cout << "\nAverage Scores Of All Players : " << average << endl;

    //************ 1 ***********/

    // int size;
    // cout << "Enter The Size Of Array : ";
    // cin >> size;
    // int *array = allocatearray(size);
    // for (int i = 0; i < size; i++)
    // {
    //     array[i] = i * 2;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << " ";
    // }
    // delete[] array;

    return 0;
}