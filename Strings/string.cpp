using namespace std;
#include<iostream>
#include<string>

int main()
{
    string s = "ABCDEFG";
    s[4] = '*';
    cout<<s<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    string s1("Hello");   // initializing strings
    string s2 = " World";  // initializing strings
    cout << s1 << s2 <<endl;

    cout<<"-------------------------------------------------------------------------\n";

    string s3(8, 'x'); //s5 contains 8 'x' characters
    cout<<s3<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    string s4(s1, 3, 2);  //str5 copies a substring of str3; it contains "lo"
    cout<<s4<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    //length of string
    string s5 = "Leon";
    cout<<s5.length()<<endl;  //4
    cout<<s5.size()<<endl;  //4

    cout<<"-------------------------------------------------------------------------\n";

    string s6 = "Apple";
    string s7 = "Banana";
    cout<< (s6 < s7) <<endl;  //Outputs 1

    cout<<"-------------------------------------------------------------------------\n";

    //concatenate Strings
    string s8 = "Robert";
    string s9 = "Soccer";
    string s10 = s8 + " " + s9;
    cout<<s10<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    //Substring Function substr():
    string s11 = "ABCD*FGHIJK";
    string s12 = s11.substr(5, 3); //changes s12 to "FGH";
    cout<<s12<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    //erase() function
    s11.erase(4, 2);  //erases *F from the string
    cout<<s11<<endl;  //ABCDGHIJK

    cout<<"-------------------------------------------------------------------------\n";

    //replace() function 
    s11.replace(5, 2, "xyz");  //adds xyz at 5th index on the position of HI
    cout<<s11<<endl;  //ABCDGxyzJK

    cout<<"-------------------------------------------------------------------------\n";

    //find() function
    //returns the index of the first occurence of given substring
    string s13 = "Mississippi River basin"; //23 characters
    cout<<s13.find("si")<<endl; //prints 3
    cout<<s13.find("so")<<endl; //prints 23, if the find() function fails, it returns the length of the string its was searching.
    
    cout<<"-------------------------------------------------------------------------\n";

    string s14 = "Talha";
    string s15 = "Taha";
    cout<<(s14 >= s15)<<endl; //prints 1

    cout<<"-------------------------------------------------------------------------\n";
    
    //input a string
    string input;
    cout<<"Enter a string: ";
    getline(cin, input);
    cout<<"You entered: "<<input<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    //Displaying Each character of a string
    string s16 = "Talha";
    for(int i=0; i<s16.length(); i++)
    {
        cout<<s16[i]<<" ";
    }
    cout<<endl;

    cout<<"-------------------------------------------------------------------------\n";

    //Or the above process can be done through for each loop
    for(char c : s16)
    {
        cout<<c<<" ";
    }


    return 0;
}