using namespace std;
#include <iostream>
#include <conio.h>
#include <string.h>
#include <vector>

int main()
{
    //vector<int> vec = {1, 2, 3};  //size of vector is 3
    //cout << vec[0] << endl;       // it will print the "1" because it is the first element of the vector

    vector<int> vec1 (5, 0);
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;
    cout << vec1[3] << endl;
    cout << vec1[4] << endl;

    //we can also print each value on the indexes of the vector using for each loop
    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};
    for (char val : vec2)
    {
        cout << val << " ";           //it will print all the values of the vector
    }

    cout << "\n------------------------------------------------------------------\n";

    //SOME FUNCTIONS IN VECTORS

    //1. size() function
    cout << "Size of vec1 = " << vec1.size() << endl;
    cout << "Size of vec2 = " << vec2.size() << endl;

    cout << "------------------------------------------------------------------\n";

    //2. push_back function
    vector<int> vec3;
    vec3.push_back(0);                      // adds value at the end of the vector
    vec3.push_back(1);
    vec3.push_back(2);
    cout << "vec3 = " << vec3[0] << endl;
    cout << "Size of vec3 = " << vec3.size() << endl;           //3
    cout << "Capacity of vec3 = " << vec3.capacity() << endl;  // 4 // capacity will double after every pushback if there is space

    cout << "------------------------------------------------------------------\n";

    //3. pop_back function
    vector<string> weeks = {"Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday", "Sunday"};
    weeks.pop_back();               // deletes the value from the end of the vector
    for (string val : weeks)
    {
        cout << val << " ";
    }

    cout << "\n------------------------------------------------------------------\n";

    //4. front() function
    cout << weeks.front() << endl;  // Prints the first value of the vector

    cout << "-----------------------------------------------------------------\n";

    //5. back() function
    cout << weeks.back() << endl;  // Prints the last value of the vector

    cout << "------------------------------------------------------------------\n";

    //6. at(index of vector) function 
    cout << weeks.at(1);  // is same as weeks[1]

    return 0;
}