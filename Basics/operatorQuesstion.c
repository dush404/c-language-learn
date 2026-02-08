#include <stdio.h>

int main()
{

    questionAns();
    return 0;
}
//? 1. Integer Division vs. Float Division
// Question: What is the output of 5/2 stored in an integer versus a float, and how does 5.0/2 differ?
// • Code  :
int questionAns01()
{
    printf("%d", 5 / 2); // ans is 2 becoz only int / int gives intiger .
    return 0;
}
// • Explanation:
//     ◦ When dividing two integers (5/2), the result is an integer (2). The decimal part is discarded,.
//*     ◦ Even if stored in a float variable (float z = 5/2), the calculation happens as integers first, resulting in 2.000000.
//     ◦ To get a decimal result (2.5), at least one operand must be a float (5.0/2 or 5/2.0)


//? Question: Take a float input and print only the fractional part of that real number (e.g., if input is 5.7, output 0.7).
// • Code:
int questionAns02()
{
    float n = 5.7;
    int N = 5.7; // it gives 5
    printf("%f", n - N);
    return 0;
}
// • Explanation:
//     ◦ When a float (5.7) is stored in an integer variable (int y), it automatically truncates the decimal part, storing only 5.
//     ◦ Subtracting this integer from the original float yields the fractional part

//? 3. Character Data Type and ASCII Values
//? Question: What happens if you print a char variable using the %d format specifier instead of %c?
// • Code:
int questionAns03()
{
  char firstLetter = "D" ;
  printf("%d",firstLetter);// it gives ASCII value of 'D' -> 68

}
// • Explanation:
//     ◦ Every character is mapped to an integer value called an ASCII value. 'A' is 65 and 'Z' is 90, 'a' is 97,.
//     ◦ Using %d prints the ASCII integer value, while %c prints the actual character

//? MCQ: Which of the following is NOT a character constant?
// • Options:
//     1. 'Thank You'
//     2. 'Enter values of P, R'
//     3. '2.555'
//     4. All of the above
// • Answer: All of the above.

//? 4. Data Type Range and Overflow (Short vs. Int)
//? Question: What is the output if you try to store 32768 in a short variable?
// • Code:
// • Answer: -32768 (in older systems or specific behaviors).
// • Explanation:
//     ◦ The short data type occupies 2 bytes (16 bits) and has a range of -32768 to +32767,.
//     ◦ Storing 32768 exceeds the positive limit, causing an overflow that wraps around to the negative limit -32768