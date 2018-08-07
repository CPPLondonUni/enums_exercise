
# C++ London Uni Enumerations Exercise #

This project contains a snippet from an imaginary drawing program.

The class `text_element` represents some text which the user can draw
on the screen. In this simplified example, the text is simply printed
to the console.

The user can choose the *colour* of the text element using the `set_colour()`
member function, which takes three arguments for the red, green and blue
intensities respectively.

## Exercise 1 ##

 * In `drawing.hpp`, add an `enum class` named `colour` which has enumerators named `red`,
`green` and `blue`.

 * In class `text_element`, add an *overload* of `set_colour()` which takes a
   `colour` as an argument
   
 * In your implementation of `set_colour()`, perform the following actions:
 
   - If the given colour is `colour::red`, call `set_colour(255, 0, 0)`
   - If the given colour is `colour::green`, call `set_colour(0, 255, 0)`
   - If the given colour is `colour::blue`, call `set_colour(0, 0, 255)`
   
 * In `main.cpp`, check that your new `set_colour()` overload is working correctly
 
 
## Exercise 2 ##

 * Use a `switch` statement to simplify your implementation of `set_colour()`
 
