// lab5ExC.cpp
// ENSF 614 Fall 2023 - LAB 5 - EXERCISE C


#include <iostream>
#include <cstring>
using namespace std;

void insertion_sort(int *int_array, int n, int sort_order);
/* REQUIRES
 *    n > 0.
 *    1 <= sort_order && sort_order <= 2
 *    Array elements int_array[0] ... int_array[n - 1] exist.
 * PROMISES
 *    If sort_order == 1 values of array are rearranged in ascending order.
 *    If sort_order == 2 values of array are rearranged in descending order.
 */


int main(int argc, char **argv)
{
    if(argc > 2){
		cout << "You fucked up. Too many arguments on the command line. Please try again." << endl;
		exit(1); 
	}
	
	int sort_order = 1; // 1 for ascending order 
		
	if(argc == 2){
		if(strcmp(argv[1], "-A") == 0 || strcmp(argv[1], "-a") == 0){
			sort_order = 1;
		}
		else if (strcmp(argv[1], "-D") == 0 || strcmp(argv[1], "-d") == 0){
			sort_order = 2;
		}
		else{
			cout << "You fucked up. Invalid entry for the command line option. Please try again." << endl;
			exit(1); 
		}
	}
	
    
    int a[] = { 413, 282, 660, 171, 308, 537 };
    
    int n_elements = sizeof(a) / sizeof(int);
    
    cout << "Here is your array of integers before sorting: \n";
    for(int i = 0; i < n_elements; i++)
        cout <<  a[i] << endl;
    cout << endl;
    
    insertion_sort(a, n_elements, sort_order);
    
    if(sort_order == 1)
        cout << "Here is your array of integers after ascending sort:  \n" ;
    else if(sort_order == 2)
        cout << "Here is your array of integers after descending sorting:  \n" ;
    
    for(int i = 0; i < n_elements; i++)
        cout << a[i] << endl;

    return 0;
}

void insertion_sort(int *a, int n, int sort_order)
{
    int i;
    int j;
    int value_to_insert;
    
    if(sort_order == 1) {
        
        for (i = 1; i < n; i++) {
            value_to_insert = a[i];
            
            /* Shift values greater than value_to_insert. */
            j = i;
            while ( j > 0 && a[j - 1] > value_to_insert  ) {
                a[j] = a[j - 1];
                j--;
            }
            
            a[j] = value_to_insert;
        }
        
    }
    else {
        
        for (i = 1; i < n; i++) {
            value_to_insert = a[i];
            
            /* Shift values less than value_to_insert. */
            j = i;
            while ( j > 0 && a[j - 1] < value_to_insert  ) {
                a[j] = a[j - 1];
                j--;
            }
            
            a[j] = value_to_insert;
        }
    }
}



