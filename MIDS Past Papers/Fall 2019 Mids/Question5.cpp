//Q.No.5 (15min): A container can hold multiple cookie boxes and each box has multiple cookies. Write a program that prompts the user to enter the total number of cookies, the number of cookies in a box, and the number of cookie boxes in a container. The program then outputs the number of boxes and the number of containers to ship the cookies. Note that each box must contain the specified number of cookies, and each container must contain the specified number of boxes. If the last box of cookies contains less than the number of specified cookies, you can discard it and output the number of leftover cookies. Similarly, if the last container contains less than the number of specified boxes, you can discard it and output the number of leftover boxes. Example: If a box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies. And if user enters 4024 cookies then output is: No of Boxes to ship=166, No of Leftover Cookies=16, No of Containers to ship=2, No of Leftover boxes=17

using namespace std;
#include <iostream>
#include <conio.h>
int main()
{
    int container, cookieboxes, cookies, cookiebox_limit, container_limit, leftover_cookies, leftover_boxes;
    cout << "Enter the total number of cookies: " << endl;
    cin >> cookies;

    cout << "Enter the maximum number of cookies in a box: " << endl;
    cin >> cookiebox_limit;

    cout << "Enter the maximum number of cookieboxes in a container: " << endl;
    cin >> container_limit;

    cookieboxes = cookies / cookiebox_limit;
    leftover_cookies = cookies % cookiebox_limit;

    container = cookieboxes / container_limit;
    leftover_boxes = cookieboxes % container_limit;

    cout << "No. of boxes to ship: " << cookieboxes << endl;
    cout << "No. of leftover cookies: " << leftover_cookies << endl;
    cout << "No. of containers to ship: " << container << endl;
    cout << "No. of leftover boxes: " << leftover_boxes;
}