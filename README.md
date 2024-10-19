# Coursera Specialization: Object Oriented Programming
[Specialization Link](https://www.coursera.org/specializations/object-oriented-programming-s12n)
### Introduction
5-course specialization that teaches programming skills in C++. Learning objectives:
- Use control flow to build interactive, multi-branched, iterated programs.
- Data types selection based on application
- convert algorithms in pseudo-code to C++ & testing
- Multiple module code creation.

### Specialization Courses
1. [Introduction to Object-Oriented Programming in
   C++](https://github.com/jkp09x/certifications/blob/main/Coursera_Specialization_Object-OrientedProgramming_IntroToObject-OrientedProgramming.pdf) ✅
2. C++ Programming: Classes and Data
3. Object-Oriented Programming in C++: Functions
4. Working with Objects in C++
5. Use C++ to build a Crypto Trading Platform: Final System

### Lessons Learned
#### Function Pointers
In Course 01 - assignment 02. I was able to understand and learn the syntax of how to use function pointers. An example of the implementation can be seen [here](https://github.com/jkp09x/coursera-specializations-ObjectOrientedProgramming/blob/819cf47dc5c9d9817ea055977bf20f9acc3e02c1/course01_IntroToOOP/code/src/main.cpp#L67).
<details>
   <summary>Click to expand</summary>
   
   ```c++
   #include <map>
   void processMenuOption(const int &userInput)
   {
       // Using function pointers stored in a map
       std::map<int, void (*)()> menu;
       menu[0] = printInvalidOption;
       menu[1] = printHelp;
       menu[2] = printMarketStats;
       menu[3] = placeOffer;
       menu[4] = placeBid;
       menu[5] = printWallet;
       menu[6] = goToNextTimeframe;
   
       if (userInput >= 1 && userInput <= 6)
           menu[userInput]();
       else
           printInvalidOption();
   }
   ```
</details>
