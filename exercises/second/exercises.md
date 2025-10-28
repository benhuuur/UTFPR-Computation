## Second List – Exercises

### 1. Sum of Odd Numbers Between 101 and 195  
Write a program in C that sums all **odd numbers** between 101 and 195.

---

### 2. Series Calculation  
Calculate the value of the following series:  
<br/>`S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50`

---

### 3. Factorial of a Number  
Read an integer and print its **factorial**.  
<br/>Example: `5! = 5 × 4 × 3 × 2 × 1 = 120`

---

### 4. Successive Division by Two  
Read a number and divide it by **two repeatedly** until the result is less than 1.  
Display the **result of the last division** and the **number of divisions** performed.

---

### 5. Racing Lap Times  
Read the lap times of a racing driver until the input time is zero.  
Display:  
- The **best lap time** (lowest)  
- The **lap number** where it occurred  
- The **average lap time**  

> Note: The zero value is used only to stop the program and should **not** be included in the average.

---

### 6. Power Consumption Analysis  
Use a loop to read the **monthly electricity consumption (KWh)** of a residence.  
The user informs how many months to consider.  
The program must display:  
- The **average consumption**  
- The **highest consumption**  
- The **lowest consumption**

---

### 7. Magic Number Game  
Generate a random number between **0 and 500** and ask the user to guess it.  
For each attempt, indicate whether the guess is **higher or lower** than the magic number.  
When the user guesses correctly, display their luck level:  
- 1–3 attempts → *Very lucky*  
- 4–6 attempts → *Lucky*  
- 7–10 attempts → *Normal*  
- More than 10 → *Unlucky*  

> Use `rand()` and `srand(time(NULL))` for random number generation.

---

### 8. Sorting 20 Numbers  
Generate **20 random numbers**, calculate their **average**, and display:  
- The **largest value**  
- The **second largest value**

---

### 9. Intern Working Hours  
Read the **entry and exit times** of an intern for **5 workdays**, and calculate the **total hours worked**.  
Ask the user how many **working days exist in the month**, and use it to project the total hours.  
Display whether the intern has **extra hours** or **hours to make up**, assuming a 4-hour daily workload.

---

### 10. Multiplication Table Game  
Create a multiplication table learning program for children.  
The program randomly selects a **multiplication table** and tracks **correct and wrong answers**.  
At the end, display the total and print a message according to performance:  
- ≤ 3 errors → “You’re doing great!”  
- ≤ 5 errors → “Good, but you should study more!”  
- > 5 errors → “You need to study more.”
