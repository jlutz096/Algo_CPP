/**
 * @file stack_with_arrays.cpp
 * @brief Implementation of a stack, using an array.
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int *stack;
int stack_idx = 0, stack_size;

/**
 * @brief push off stack.
 * 
 * This function pushes an element onto the stack.
 * 
 * @param int x
 * 
 * @returns void
 */

void push(int x)
{
    // if the stack is full, we want to alert to overflow
    if(stack_idx == stack_size)
    {
        std::cout << "\nOverflow";
    }
    else
    {
        stack[stack_idx++] == x;
    }

}

/**
 * @brief pop element
 * 
 * This function pops the last added element off the stack.
 * 
 * @returns void
 * 
 */
void pop()
{
    // if the stack is empty, we want to alert.
    if(stack_idx == 0)
    {
        std::cout << "\nNothing to remove!";
    }
    else
    {
        std::cout << "\n" << stack[--stack_idx] << " deleted.";
    }
}

/**
 * @brief show. show the elements of the stack.
 * 
 * 
 * @returns void
 */
void show()
{
    // if we want to show all elements of the stack.
    for(int i = 0; i < stack_idx; ++i)
    {
        std::cout << stack[i] << "\n";
    }
}
/**
 * @brief top most element.
 * 
 * Displays the top most element (last) in the stack.
 * 
 * @returns void
 */
void topmostElement()
{
    std::cout << "\nTopmost Element: " << stack[stack_idx - 1];

}

/**
 * @brief bottom element.
 * 
 * Displays the bottom element (first) in the stack.
 */
void bottomElement()
{
    std::cout << "\nBottom element: " << stack[0]; // if we neeed access to first element without using pop commmand().
}


int main()
{
    // declare stack object
stack = new int[stack_size];

// Lastly if we want to delete the stack
delete[] stack;
}