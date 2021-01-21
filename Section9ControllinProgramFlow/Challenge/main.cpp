/*
This challenge is about using a collection (list) of integers and allowing the user 
to select options from a menu to perform operations on the list.

Your program should display a menu options to the user as follows:

P -Print numbers
A - Addd a number
M - Display the mean of the numbers
S - Display the smallest integer
L - Display the largest number
Q- Quit.

Enter your choice.

The program should only accept valid choices from the user, both upper and lowercase selections hsould be allowed.

If an illegal choice is made, you should display, "Unknown selection, please try again", and the menu options should be displayed again


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list. If the list is empty you should display "[] - the list is empty"

If the list is not empty then all the list elements should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]


If the user enters A or a then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
you should display, 5 added.
Duplicate entries are Ok.

If the user enters M or m you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, Unable to calculate the mean - no data.

If the user enters S or s you should display the smallest element in the list
for example, if the list contains [2 4 5 1] you should display the smallest number is 1.
If the list is empty you should display unable to determine the smallest number - the list is empty.

If the user enters L or l you should display the largest element in the list.
for example, if the list contains [2 4 5 1] you should display the largest number is 5.
if the list is empty you should display unable to determine the largest number - the list is empty.

If the user enters Q or q then you should display Goodbye and the program should terminate.

Hint: Use a vector!

Additional functionality if you wish
- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

*/


#include <iostream>
using namespace std;
 
 
int main () {
    
    return 0;
}