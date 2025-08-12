#include <iostream>
#include <cctype>
#include <cstring>
#include <climits>
#include <fstream>
#include <string>
using namespace std;

//************ 1 ***************/

// int numberofcharacters(const char *string1)
// {
//     int count = 0;
//     while (string1[count] != '\0')
//     {
//         count++;
//     }
//     return count;
// }

//************ 2 ***************/

// void backward(const char *string1)
// {
//     char last = '\0';
//     int count = 0;
//     while (string1[count] != '\0')
//     {
//         count++;
//     }

//     for (int i = count; i > 0; i--)
//     {
//         cout << string1[i - 1];
//     }
// }

//************ 3,4,5 ***************/

// int numberofwords(char *string1)
// {
//     int count = 0;
//     int count_characters = 0;

//     for (int i = 0; string1[i] != '\0'; i++)
//     {

//         if (i == 0 && string1[0] != ' ')
//         {
//             string1[0] = toupper(string1[0]);
//             cout << string1[0] << endl;
//             count++;
//         }

//         if (string1[i] == ' ' && string1[i + 1] != ' ' && string1[i + 1] != '\0')
//         {
//             // string1[i + 1] = toupper(string1[i + 1]);
//             count++;
//         }
//         if (string1[i] == '.' && string1[i + 2] != ' ' && string1[i + 2] != '\0')
//         {
//             string1[i + 2] = toupper(string1[i + 2]);
//         }
//         if (string1[i] == '\0')
//         {
//             break;
//         }
//         if (string1[i] != ' ')
//         {
//             count_characters++;
//         }
//     }

//     double average = count_characters / count;
//     cout << "Average Letters In Each Word : " << average << endl;

//     return count;
// }

// int numberofwords(string &string1)
// {
//     int count = 0;
//     int count_characters = 0;

//     for (int i = 0; i < string1.length(); i++)
//     {
//         if (i == 0 && string1[0] != ' ')
//         {
//             string1[0] = toupper(string1[0]);
//             count++;
//         }

//         if (string1[i] == ' ' && string1[i + 1] != ' ' && string1[i + 1] != '\0')
//         {
//             // string1[i + 1] = toupper(string1[i + 1]);

//             count++;
//         }
//         if (string1[i] == '.' && string1[i + 2] != ' ' && string1[i + 2] != '\0')
//         {
//             string1[i + 2] = toupper(string1[i + 2]);
//         }
//         if (string1[i] != ' ')
//         {
//             count_characters++;
//         }
//     }

//     double average = count_characters / count;
//     cout << "Average Letters In Each Word : " << average << endl;
//     return count;
// }

//************ 6 ***************/

// int numberofvowels(char *string1)
// {
//     int count = 0;
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         string1[i] = tolower(string1[i]);
//         if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u')
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int numberofconsonents(char *string1)
// {
//     int count = 0;
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         string1[i] = tolower(string1[i]);
//         if (string1[i] == 'b' || string1[i] == 'c' || string1[i] == 'c' || string1[i] == 'd' || string1[i] == 'f' || string1[i] == 'g' || string1[i] == 'h' || string1[i] == 'j' || string1[i] == 'k' || string1[i] == 'l' || string1[i] == 'm' || string1[i] == 'n' || string1[i] == 'p' || string1[i] == 'q' || string1[i] == 'r' || string1[i] == 's' || string1[i] == 't' || string1[i] == 'v' || string1[i] == 'w' || string1[i] == 'x' || string1[i] == 'y' || string1[i] == 'z')
//         {
//             count++;
//         }
//     }
//     return count;
// }

//************ 9 ***************/

// char mostfrequestchar(char *string1)
// {
//     int count = 0;
//     int countch = 0;
//     int index;
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         char ch = string1[i];
//         for (int j = 0; string1[j] != '\0'; j++)
//         {
//             if (string1[j] == string1[i])
//             {
//                 count++;
//             }
//         }
//         if (count > countch)
//         {
//             countch = count;
//             index = i;
//         }
//         count = 0;
//     }
//     cout << "Occurs " << countch << " Times, ";
//     return string1[index];
// }

//************ 11 ***************/

// void upper(char *string1)
// {
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         if (isalpha(string1[i]))
//         {
//             string1[i] = toupper(string1[i]);
//         }
//     }
//     // cout << string1 << endl;
// }
// void lower(char *string1)
// {
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         if (isalpha(string1[i]))
//         {
//             string1[i] = tolower(string1[i]);
//         }
//     }
//     // cout << string1 << endl;
// }

// void reverse(char *string1)
// {
//     for (int i = 0; string1[i] != '\0'; i++)
//     {
//         if (isalpha(string1[i]))
//         {
//             if (islower(string1[i]))
//             {
//                 string1[i] = toupper(string1[i]);
//             }
//             else if (isupper(string1[i]))
//             {
//                 string1[i] = tolower(string1[i]);
//             }
//         }
//     }
//     // cout << string1 << endl;
// }

//************ 13 ***************/

// void printdate(char *date)
// {
//     int month, day, year;
//     string months[] = {"January",
//                        "February",
//                        "March",
//                        "April",
//                        "May",
//                        "June",
//                        "July",
//                        "August",
//                        "September",
//                        "October",
//                        "November",
//                        "December"};
//     sscanf(date, "%d/%d/%d", &month, &day, &year);
//     if (month <= 12 && month >= 1)
//     {
//         if (day <= 31 && day >= 1)
//         {
//             cout << months[month - 1] << " " << day << ", " << year << endl;
//         }
//         else
//         {
//             cout << "Invalid Input (Days can't be more than 31)" << endl;
//         }
//     }
//     else
//     {
//         cout << "Invalid Input (Months can't be more than 12)" << endl;
//     }
// }

int main()
{
    //************ 18 ***************/

    char *info[11] = {
        "Alejandra Cruz, 555-1223",
        "Joe Looney, 555-0097",
        "Geri Palmer, 555-8787",
        "Li Chen, 555-1212",
        "Holly Gaddis, 555-8878",
        "Sam Wiggins, 555-0998",
        "Bob Kain, 555-8712",
        "Tim Haynes, 555-7676",
        "Warren Gaddis, 555-9037",
        "Jean James, 555-4939",
        "Ron Palmer, 555-2783"
    };
    const int size = 20;
    char name[size];
    cout << "Enter Name : ";
    cin.getline(name, size);
    int index;
    for (int i = 0; i < 11; i++)
    {
        if (strstr((info[i]), name))
        {
            cout << info[i] << endl;
        }
    }

    //************ 15 ***************/

    // const int size = 501;
    // char string1[size];

    // ifstream fin("text.txt");
    // char c;
    // int count=0;
    // fin>>string1;
    // cout<<string1<<endl;

    // int countu = 0, countl = 0, countd = 0;
    // for (int i = 0; string1[i] != '\0'; i++)
    // {
    //     if (isupper(string1[i]))
    //     {
    //         countu++;
    //     }
    //     else if (islower(string1[i]))
    //     {
    //         countl++;
    //     }
    //     else if (isdigit(string1[i]))
    //     {
    //         countd++;
    //     }
    // }
    // cout<<"Number of Digits : "<<countd<<endl;
    // cout<<"Number of Upper Case Letters : "<<countu<<endl;
    // cout<<"Number of Lower Case Letters : "<<countl<<endl;

    //************ 17 ***************/

    // const int size = 201;
    // char morsechar[size] = {' ', ',', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    // string code[size] = {"space", "--..--", "-----", ".----", "..--", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    // char string1[size];
    // cout << "Enter A Sentence : ";
    // cin.getline(string1, size);
    // char comp;
    // cout << "Morse Code Of Given String : ";

    // for (int i = 0; i < strlen(string1); i++)
    // {
    //     comp = toupper(string1[i]);
    //     if (isalpha(string1[i]) || isdigit(string1[i]) || string1[i] == ',' || string1[i] == ' ')
    //     {

    //         for (int i = 0; i < strlen(morsechar); i++)
    //         {
    //             if (comp == morsechar[i])
    //             {
    //                 cout << code[i];
    //                 continue;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         cout << "\nChar '" << comp << "' Is Not In The Scope." << endl;
    //     }
    // }

    //************ 14 ***************/

    // const int size = 201;
    // char string1[size];
    // cout << "Enter A Sentence(All Words Run Together) : ";
    // cin.getline(string1, size);
    // char string2[size];
    // int j=1;
    // string2[0] = toupper(string1[0]);
    // for (int i = 1; string1[i] != '\0'; i++)
    // {
    //     if (isupper(string1[i]))
    //     {
    //        string2[j]=' ';
    //        j++;
    //        string2[j]=tolower(string1[i]);
    //        j++;
    //     }
    //     else{
    //         string2[j]=string1[i];
    //         j++;
    //     }

    // }
    // string2[j]='\0';
    // cout<<"String 2 Lenth : "<<strlen(string2)<<endl;
    // cout<<string2<<endl;

    //************ 13 ***************/

    // const int size = 11;
    // char string1[size];

    // cout << "Enter Date (mm/dd/yyyy) : ";
    // cin.getline(string1, size);
    // printdate(string1);

    //************ 12 ***************/

    // const int size = 20;
    // char string1[size];
    // int count;
    // do
    // {
    //     count = 0;
    //     cout << "Set The Password : ";
    //     cin.getline(string1, size);
    //     for (int i = 0; string1[i] != '\0'; i++)
    //     {
    //         count++;
    //     }

    //     int upperch = 0;
    //     int lowerch = 0;
    //     int digit = 0;
    //     for (int i = 0; string1[i] != '\0'; i++)
    //     {
    //         if (isalpha(string1[i]))
    //         {
    //             if (islower(string1[i]))
    //             {
    //                 lowerch++;
    //             }
    //             if (isupper(string1[i]))
    //             {
    //                 upperch++;
    //             }
    //         }
    //         if (isdigit(string1[i]))
    //         {
    //             digit++;
    //         }
    //     }

    //     if (count >= 6)
    //     {
    //         if (digit < 1 || upperch < 1 || lowerch < 1)
    //         {
    //             cout << "Password Should Have At Least " << endl
    //                  << "1 Upper Case Character " << endl
    //                  << "1 Lower Case Character " << endl
    //                  << "1 Digit Character " << endl;
    //             cout << "Try Again" << endl;
    //             continue;
    //         }
    //         else
    //         {
    //             cout << "Password Meets The Criteria." << endl;
    //             break;
    //         }
    //     }
    //     else

    //     {
    //         cout << "Password Should Be At Least 6 Characters." << endl;
    //         cout << "Enter Again" << endl;
    //     }

    // } while (true);

    //************ 11 ***************/

    // const int size = 201;
    // char string1[size];
    // cout << "Enter C String : ";
    // cin.getline(string1, size);

    // reverse(string1);
    // cout << "After reverse: " << string1 << endl;

    // lower(string1);
    // cout << "After lower: " << string1 << endl;

    // upper(string1);
    // cout << "After upper: " << string1 << endl;

    //************ 9 ***************/

    // const int size = 201;
    // char string1[size];
    // // string string1;
    // cout << "Enter C String : ";
    // cin.getline(string1, size);
    // // cin>>string1;
    // char frequent = mostfrequestchar(string1);
    // // char frequent = mostfrequestchar(string1);
    // cout << "Most Frequent Character : " << frequent << endl;

    //************ 8 ***************/

    // const int size = 201;
    // char string1[size];
    // cout << "Enter A String : ";
    // cin.getline(string1, size);
    // int total = 0;
    // int highest = INT_MIN;
    // int lowest = INT_MAX;
    // int digit;
    // for (int i = 0; string1[i] != '\0'; i++)
    // {
    //     if (isdigit(string1[i]))
    //     {

    //         digit = string1[i]-'0';
    //         total += digit;
    //         if (highest < digit)
    //         {
    //             highest = digit;
    //         }
    //         if (lowest > digit)
    //         {
    //             lowest = digit;
    //         }
    //     }
    // }
    // cout << "Total : " << total << endl;
    // cout << "Highest : " << highest << endl;
    // cout << "Lowest : " << lowest << endl;

    //************ 7 CHAT-GPT ***************/

    // const int size = 50; // Size for each name array
    // char firstName[size], middleName[size], lastName[size];
    // char arrangedName[3 * size + 4]; // Enough size to hold all names plus additional characters

    // // Get the user's first, middle, and last names
    // cout << "Enter your first name: ";
    // cin.getline(firstName, size);

    // cout << "Enter your middle name: ";
    // cin.getline(middleName, size);

    // cout << "Enter your last name: ";
    // cin.getline(lastName, size);

    // // Arrange the name as "Last, First Middle"
    // strcpy(arrangedName, lastName);
    // strcat(arrangedName, ", ");
    // strcat(arrangedName, firstName);
    // strcat(arrangedName, " ");
    // strcat(arrangedName, middleName);

    // // Display the arranged name
    // cout << "Arranged Name: " << arrangedName << endl;

    //************ 7 ***************/

    // const int size = 20;
    // char first[size];
    // char middle[size];
    // char last[size];
    // cout << "First Name : ";
    // cin.getline(first, size);
    // cout << "Middle Name : ";
    // cin.getline(middle, size);
    // cout << "Last Name : ";
    // cin.getline(last, size);

    // char full_name[size * 2];
    // int count = 0;
    // for (int i = 0; i < strlen(last); i++)
    // {
    //     last[0] = toupper(last[0]);
    //     full_name[i] = last[i];
    //     count++;
    // }
    // full_name[count] = ',';
    // count++;
    // full_name[count] = ' ';
    // count++;
    // cout << "Count : " << count << endl;
    // int z = count;
    // for (int i = 0; i < strlen(first); i++)
    // {
    //     first[0] = toupper(first[0]);
    //     full_name[z + i] = first[i];
    //     count++;
    // }
    // cout << "Count : " << count << endl;
    // full_name[count] = ' ';
    // count++;
    // z = count;

    // for (int i = 0; i < strlen(middle); i++)
    // {
    //     middle[0] = toupper(middle[0]);
    //     full_name[z + i] = middle[i];
    //     count++;
    // }
    // full_name[count]='\0';
    // cout << "Number Of Characters : " << count << endl;
    // cout << "Full name length : " << strlen(full_name) << endl;

    // cout << full_name << endl;

    //************ 6 ***************/

    // const int size = 151;
    // char string1[size];
    // cout << "Enter A String (letter < 150) : ";
    // cin.getline(string1, size);
    // int vowels, consonenets;
    // char choice;
    // do
    // {

    //     cout << "A) Count the number of vowels in the string " << endl
    //          << "B) Count the number of consonants in the string " << endl
    //          << "C) Count both the vowels and consonants in the string" << endl
    //          << "D) Enter another string" << endl
    //          << "E) Exit the program" << endl
    //          << "Select One From The Above : ";
    //     cin >> choice;
    //     choice = tolower(choice);

    //     while (choice == 'd')
    //     {
    //         cout << "Enter A String Again (letter < 150) : ";
    //         cin.getline(string1, size);
    //         cin.ignore();
    //         cout << "A) Count the number of vowels in the string " << endl
    //              << "B) Count the number of consonants in the string " << endl
    //              << "C) Count both the vowels and consonants in the string" << endl
    //              << "D) Enter another string" << endl
    //              << "E) Exit the program" << endl
    //              << "Select One From The Above : ";
    //         cin >> choice;
    //         if (cin.fail())
    //         {
    //             cin.clear();
    //             cin.ignore();
    //         }
    //         choice = tolower(choice);
    //     }
    //     if (choice == 'e')
    //     {
    //         exit(0);
    //     }
    //     if (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'e')
    //     {
    //         cout << "Only Select From Option (a,b,c,d,e)" << endl;
    //     }

    // } while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'e');

    // if (choice == 'a')
    // {
    //     vowels = numberofvowels(string1);
    //     cout << "Number Of Vowels In Given String : " << vowels << endl;
    // }
    // else if (choice == 'b')
    // {
    //     consonenets = numberofconsonents(string1);
    //     cout << "Number Of Consonents In Given String : " << consonenets << endl;
    // }

    // else
    // {
    //     vowels = numberofvowels(string1);
    //     cout << "Number Of Vowels In Given String : " << vowels << endl;
    //     consonenets = numberofconsonents(string1);
    //     cout << "Number Of Consonents In Given String : " << consonenets << endl;
    // }

    //************ 3,4,5 ***************/

    // cout<<"*********** CHARACTER STRING *************"<<endl;

    // const int size = 101;
    // char string1[size];
    // cout << "Enter The String 1 (Letters < 100) : ";
    // cin.getline(string1, size);
    // int number_of_cwords = numberofwords(string1);
    // cout << "Number Of Words : " << number_of_cwords << endl;

    // cout << "String 1 After Capitalization : " << endl;
    // cout << string1 << endl;

    // cout<<"\n*********** STRING *************"<<endl;
    // string string2;
    // cout << "Enter String 2 : ";
    // getline(cin, string2);
    // int number_of_swords = numberofwords(string2);
    // cout << "Number Of Words In String : " << number_of_swords << endl;
    // cout << "String 2 After Capitalization : " << endl;
    // cout << string2 << endl;

    //************ 2 ***************/

    // const int size = 101;
    // char string1[size];
    // cout << "Enter The String (Letters < 100) : ";
    // cin.getline(string1, size);
    // backward(string1);

    //************ 1 ***************/

    // const int size = 151;
    // char string1[size];
    // cout << "Enter The C String (Letter<150) : ";
    // cin.getline(string1, size);
    // cout << string1 << endl;
    // int total_characters = numberofcharacters(string1);
    // cout << "Number Of Characters : " << total_characters << endl;

    //************PROGRAMMING CHALLENGES***************/

    //***********************************************************************/
    // const int size=20;
    // char array[size];
    // cout<<"Enter Character String : ";
    // cin.getline(array,size);
    // cout<<"\nOutput : ";
    // // int length=strlen(array);
    // // for (int i = 0; i < length; i++)
    // // {
    // //     cout<<array[i];
    // // }
    // cout<<array;

    // int num=atoi(array);
    // cout<<endl<<num<<endl;

    // int number = 99;
    // string output = to_string(number);
    // cout << output;

    //***********************************************************************/

    // int length;
    // const int size = 20;
    // char line1[size];
    // cout << "Enter Line 1 : " << endl;
    // cin.getline(line1, size);
    // length = strlen(line1);
    // cout << "Line1 Length : " << length << endl;

    // char line2[size];
    // cout << "Enter Line 2 : " << endl;
    // cin.getline(line2, size - 5);
    // length = strlen(line2);
    // cout << "Line2 Length : " << length << endl;
    // int maxchars;
    // maxchars = sizeof(line1) - (strlen(line1) + 1);
    // // strcat(line1, line2);
    // // strncat(line1,line2,maxchars);
    // // cout << "After Catenation Line1 Becomes : ";
    // // cout << line1;

    // // strcpy(line2, line1);
    // // cout << "\nAfter Copy Line2 Becomes : ";
    // // cout << line2;

    // char *strptr = nullptr;
    // strptr = strstr(line1, line2);
    // cout << "Search Results : " << endl;
    // if (strptr != nullptr)
    // {
    //     cout << "Found : " << strptr << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    // if (strcmp(line1, line2) == 0)
    // {
    //     cout << "You entered the same string twice.\n";
    // }
    // else
    // {
    //     cout << "The strings are not the same.\n";
    // }

    // cout << "Check Alphabatically " << endl;
    // if (strcmp(line1, line2) < 0)
    // {
    //     cout << line1 << endl
    //          << line2;
    // }
    // else if (strcmp(line1, line2) > 0)
    // {
    //     cout << line2 << endl
    //          << line1;
    // }
    // else
    // {
    //     cout << "You entered the same name twice!\n";
    // }

    //***********************************************************************/

    // const int size = 80;
    // char line[size];
    // cout << "Enter A line Not More Than " << size-1 << " Characters." << endl;
    // cin.getline(line, size);
    // int count = 0;
    // while (line[count] != '\0')
    // {
    //     cout << line[count];
    //     count++;
    // }
    // cout << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << line[i];
    //     if (line[i] == '\0')
    //     {
    //         break;
    //     }
    // }

    //***********************************************************************/

    // char choice;
    // do
    // {
    //     cout << "Do You Want To Repeat This Program? (Y/N)";
    //     cin >> choice;
    //     while (tolower(choice) != 'y' && tolower(choice) != 'n')
    //     {
    //         cout << "Please Enter 'y' or 'n' ";
    //         cin >> choice;
    //     }

    // } while (tolower(choice) == 'y');

    // char c;
    // cout << "Enter A Character : ";
    // cin >> c;
    // char d=tolower(c);
    // cout<<" d : "<<d<<endl;
    // char e=toupper(c);
    // cout<<" e : "<<e<<endl;

    // if (isalpha(c))
    // {
    //     cout << "That's An Alphabatic Character." << endl;
    // }
    // if (isdigit(c))
    // {
    //     cout << "That's An Numeric Digit." << endl;
    // }
    // if (isupper(c))
    // {
    //     cout << "That's Upper Case An Alphabatic Character." << endl;
    // }
    // if (islower(c))
    // {
    //     cout << "That's Lower Case An Alphabatic Character." << endl;
    // }
    // if (isspace(c))
    // {
    //     cout << "That's White Space Character." << endl;
    // }

    /*

    isalpha--> Returns true (a nonzero number) if the argument is a letter of the alphabet.
               Returns 0 if the argument is not a letter.
    isalnum--> Returns true (a nonzero number) if the argument is a letter of the alphabet
               or a digit. Otherwise it returns 0.
    isdigit--> Returns true (a nonzero number) if the argument is a digit from 0 through 9.
               Otherwise it returns 0.
    islower--> Returns true (a nonzero number) if the argument is a lowercase letter.
               Otherwise, it returns 0.
    isprint--> Returns true (a nonzero number) if the argument is a printable character
               (including a space). Returns 0 otherwise.
    ispunct--> Returns true (a nonzero number) if the argument is a printable character
               other than a digit, letter, or space. Returns 0 otherwise.
    isupper--> Returns true (a nonzero number) if the argument is an uppercase letter.
               Otherwise, it returns 0.
    isspace--> Returns true (a nonzero number) if the argument is a whitespace character.
               Whitespace characters are any of the following:
               space '' vertical tab ' \v '
               newline ' \n ' tab ' \t '
               Otherwise, it returns 0.

    */

    return 0;
}