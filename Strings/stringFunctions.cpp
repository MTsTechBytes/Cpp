using namespace std;
#include<iostream>
#include<string>

int main()
{
    //assign function()
    string s1 = "Talha";
    string s2;
    s2.assign(s1);  //same as s2 = s1;
    cout<<s2<<endl; //prints, Talha
    
    string myString;
    //mystring.assign(string to be assigned, startin index, number of characters)    
    myString.assign(s1, 2, 3);
    cout<<myString<<endl; //prints, lha

    cout<<"-----------------------------------------------------\n";

    //Range checking , .at(index), returns character at specific index 
    string s3 = "Leon";
    cout<<s3.at(2)<<endl; //prints, o

    cout<<"-----------------------------------------------------\n";

    //Concatenation
    //str.append("any string");
    //or str = str + "pet";
    string s4;
    s4.append("pet");
    s4 += " animal";
    cout<<s4<<endl;  //prints, pet amimal

    cout<<"-----------------------------------------------------\n";

    //Comparing strings
    //By overloaded operators ==, !=, <, >, <=, >=, returns bool
    //or By s1.compare(s2); returns (-1, 0, 1)
    cout<<s3.compare(s4)<<endl; //prints, -1

    //s1.compare(start, length, s2, start, length)
    //Compare portions of s1 and s2

    //s1.compare(start, length, s2)
    //Compare portion of s1 with all of s2

    cout<<"------------------------------------------------------\n";
    string s5 = "ABCD*FGHIJK";
    string s6 = s5.substr(5, 3); //changes s12 to "FGH";
    cout<<s6<<endl;  //prints, FGH

    cout<<"------------------------------------------------------\n";

    //Swaping Strings
    string s7 = " Pakistan ";
    string s8 = " Zindabad ";
    s7.swap(s8);  //Switch contents of two strings
    cout<<s7<<s8<<endl;

    cout<<"------------------------------------------------------\n";

    //String Characteristics
    //Member functions
    string s9 = "Batman";
    //Number of characters in a string
    cout<<s9.size()<<endl <<s9.length()<<endl;

    //Number of elements that can be stored without reallocation
    cout<<s9.capacity()<<endl;
    
    //Maximum possible string size
    cout<<s9.max_size()<<endl;

    //Maximum possible string size
    cout<<s9.empty()<<endl;

    //Resizes string to newlength
    // cout<<s9.resize(10)<<endl;
    // cout<<s9.size()<<endl;

    cout<<"------------------------------------------------------\n";
    
    //Find functions return index if found.
    string s10 = "Muhammad", s11 = "Talha";
    cout<<s10.find(s11)<<endl;

    //Searches right-to-left
    cout<<s10.rfind(s11)<<endl;
    
    //Returns first occurrence of any character of s10 in s11
    cout<<s10.find_first_of(s11)<<endl;
    
    //Returns index of first 'a', 'b', 'c' or 'd'
    cout<<s11.find_first_of( "abcd" )<<endl;

    cout<<"------------------------------------------------------\n";

    //Replace function .replace()
    //s1.replace( begin, N, s2, index, num )
    s10.replace(4, 4, s11, 2, 3);
    cout<<s10<<endl;

    cout<<"------------------------------------------------------\n";

    string s12 = "Muhammad", s13 = "Talha";
    //Insertin Characters into a string
    //s1.insert( index, s2, index2, N );
    s12.insert(8, s13, 0, 5);
    cout<<s12<<endl;

    cout<<"------------------------------------------------------\n";

    //Conversion to C-Style char*
    //Conversion functions
    //Strings are not necessarily null-terminated
    //s1.copy( ptr, N, index )
    //Copies N characters into the array ptr
    //Starts at location index
    //Need to null terminate

    char str[8];
    string s14 = "cathode";
    s14.copy(str, 5, 2); //copy 5 characters into str, starting at index 2

    //str[5] = '\0';        //this is required
    cout << "str = " << str << endl;    
    cout << "s14 = " << s14 << endl; 
}