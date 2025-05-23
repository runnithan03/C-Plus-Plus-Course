/*C++ Exception Handling 
Exception Handling in C++ is a process to handle runtime errors.

In C++, an exception is an event or object which is thorwn at runtime. 
*All exceptions are derived from std::exception class. It is a runtime error which can be handled.
*If we don't handle the exception, it prints exception message and terminates the program.


exception classes in C++ are derived from std:: exception class. 

Exception                     Description 
std::exception                It is an exception and parent class of all standard C++ exceptions. 
std::logic_failure            It is an exception that can be detected by reading a code. 
std::runtime_error            It is an exception that cannot be detected by reading a code.
std::bad_exception            It is used to handle the unexpected exceptions in a c++ program. 
std::bad_cast                 This exception is generally thrown by dynamic_cast. 
std::bad_typeid               This exception is generally thrown by typeid. 
std::bad_alloc                This exception is generally thrown by new. 

C++ Exception Handling Keywords
In C++, we use 3 keywords to perform exception handling:

try 
catch, and 
throw 
*/ 
