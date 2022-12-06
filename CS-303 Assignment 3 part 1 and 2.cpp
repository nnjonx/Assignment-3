#include <iostream>
#include <queue>
#include <set>
#include "part1_2.h"
using namespace std;
//code checking if a string is a palindrome
bool isPalindrome(string s)
{
    //if statement for checking if the length of the string entered is less than or equal to 1, if that case is true, then the string is automatically deemed a palindrome.
    //An example would be "Is 'a' a palindrome? Yes. (disregarding arguments for if a single letter can be a palindrome)
    if (s.length() <= 1)
    {
        return true;
    }

    //If statement checking if each character in the string at index and (length-index) is the exact same confirming if the entire string is a palindrome returning true. 
    //If not, then it returns false.
    if (s[0] == s[s.length() - 1])
    {
        return isPalindrome(s.substr(1, s.length() - 2));
    }
    return false;
}
//code for moving elements to the rear from the front
void move_to_rear(queue<int> a) {
    //pushes the element in the front of the queue into the rear and then pops it, removing the element in the front of the queue.
    a.push(a.front()); 
    a.pop(); 
    while (!a.empty()) {
        cout << a.front() << " ";
        a.pop();
    }

}
int main() {
    //initializing integers
    queue<int> a;
    int b, c, d, e;

    cout << "Enter four elements in your queue: " << endl;
    cin >> b >> c >> d >> e;
    a.push(b);
    a.push(c);
    a.push(d);
    a.push(e);
    cout << "After moving the element currently in front to the rear, the queue is now: ";
    move_to_rear(a);
    
    cout << endl << "Enter your word to check if it's a palindrome: ";
    string s = "";
    cin >> s;
    if (isPalindrome(s))
    {
        cout << s << " is palindrome." << endl;
    }
    else
    {
        cout << s << " is not a palindrome." << endl;
    }
}