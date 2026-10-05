#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Declare a map with key as int and value as string
    map<int, string> student;

    // Insertion
    student[1] = "Alice";
    student[2] = "Bob";
    student.insert(make_pair(3, "Charlie"));
    student.insert(make_pair(4, "David"));

    cout << "Map Elements (Key -> Value):" << endl;

    map<int, string>::iterator it;

    for (it = student.begin(); it != student.end(); ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    // Searching an element
    int key = 3;

    it = student.find(key);

    if (it != student.end())
    {
        cout << "\nFound: " << it->first << " -> "
             << it->second << endl;
    }
    else
    {
        cout << "\nKey " << key << " not found" << endl;
    }

    // Deleting an element
    student.erase(2);

    cout << "\nAfter deleting key 2:" << endl;

    for (it = student.begin(); it != student.end(); ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    // Size of the map
    cout << "\nSize of the map: " << student.size() << endl;

    return 0;
}
