#include <iostream>
using namespace std;
int main()
{
    int finalResult = 0;
    char playAgain;
    int playQuiz(void);
play:
    finalResult = playQuiz();
    cout << "Your score is " << finalResult << endl;

    if (finalResult >= 6)
    {
        cout << "You Passed the Quiz" << endl;
        cout << "Do you want to play again y or n" << endl;
        cin >> playAgain;
        if (playAgain == 'y' || playAgain == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "ThankYou For Playing Quiz" << endl;
        }
    }
    else
    {
        cout << "You Failed the Quiz" << endl;
        cout << "Do you want to play again y or n" << endl;
        cin >> playAgain;
        if (playAgain == 'y' || playAgain == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "ThankYou For Playing Quiz" << endl;
        }
    }
}

int playQuiz()
{
    char c;
    char option;
    int score = 0;
playfromstart:
    cout << "----------Welcome to Quiz Game------------" << endl;
    cout << "------Please follow the instructions------" << endl;
    cout << "Step 1 : Quiz contains total 10 questions" << endl;
    cout << "Step 2 : You will be given 1 mark for each right answer" << endl;
    cout << "Step 3 : There will be no negative marking" << endl;
    cout << "Step 4 : Please select 1 option from a, b, c, d" << endl;
    cout << "Step 5 : If your score is more then 6, you will pass the quiz" << endl;
    cout << "Step 6 : Please press S to start the quiz" << endl;
    cin >> c;
    //  Question 1
    if (c == 's' || c == 'S')
    {
        cout << "Q1. Which of the following is a correct way to declare a pointer in C++?" << endl;
        cout << "(a) int ptr*;" << endl
             << "(b) int* ptr;" << endl
             << "(c) ptr int*;" << endl
             << "(d) int ptr;" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 2
        cout << "Q2. What does the following C++ statement mean? " << endl;
        cout << "(a) a is an integer." << endl
             << "(b) a is an array of 10 integers." << endl
             << "(c) a is a pointer to an integer." << endl
             << "(d) a is a reference to 10 integers." << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 3
        cout << "Q.3 What is the purpose of a constructor in C++?" << endl;
        cout << "(a) To destroy an object" << endl
             << "(b) To initialize an object" << endl
             << "(c) To allocate memory for an object" << endl
             << "(d) To define a function" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 4
        cout << "Q4. Which of the following is not a valid access specifier in C++?" << endl;
        cout << "(a) private" << endl
             << "(b) protected" << endl
             << "(c) public" << endl
             << "(d) internal" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 5
        cout << "Q5. What is the correct way to allocate memory dynamically for an integer in C++?" << endl;
        cout << "(a) int *ptr = malloc(sizeof(int));" << endl
             << "(b) int ptr = new int;" << endl
             << "(c) int *ptr = new int;" << endl
             << "(d) int ptr = new int();" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 6
        cout << "Q6. Which of the following is used to terminate a function in C++?" << endl;
        cout << "(a) stop" << endl
             << "(b) exit" << endl
             << "(c) return" << endl
             << "(d) break" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 7
        cout << "Q7. What is the default return type of the main() function in C++?" << endl;
        cout << "(a) void" << endl
             << "(b) int;" << endl
             << "(c) float" << endl
             << "(d) char" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 8
        cout << "Q8. Which of the following is not a feature of object-oriented programming in C++?" << endl;
        cout << "(a) Encapsulation" << endl
             << "(b) Abstraction" << endl
             << "(c) Procedural programming" << endl
             << "(d) Polymorphism" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 9
        cout << "Q9. What is the size of a bool type in C++?" << endl;
        cout << "(a) 1 byte" << endl
             << "(b) 2 bytes" << endl
             << "(c) 4 bytes" << endl
             << "(d) Compiler-dependent" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        //  Question 10
        cout << "Q10. Which keyword is used to inherit a class in C++?" << endl;
        cout << "(a) derive" << endl
             << "(b) inherit" << endl
             << "(c) extends" << endl
             << "(d) : (colon)" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }
    else
    {
        cout << "You have entered wrong value, please enter valid value to start the quiz" << endl;
        goto playfromstart;
    }

    return score;
}
