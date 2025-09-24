# C Programming Exercises – UTFPR

This repository contains a collection of introductory C programming exercises developed as part of the **Industrial Automation Technologist course at UTFPR**.  
Each program focuses on practicing fundamental programming concepts such as input/output, conditionals, loops, mathematical operations, and the use of libraries like `math.h`.

---

## Exercises

### 1. Distance Between Two Points
Reads the coordinates of two points `(x1, y1)` and `(x2, y2)` and calculates the distance between them using the formula:
<br/>`d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))`


### 2. Solving a 2x2 System of Linear Equations
Reads the coefficients `a, b, c, d, e, f` and solves the system:
<br/>`ax + by = c`
<br/>`dx + ey = f`

with the solution:
<br/>`x = (ce - bf) / (ae - bd)`
<br/>`y = (af - cd) / (ae - bd)`


### 3. Number Decomposition
Reads an integer of up to 4 digits and prints its decomposition into thousands, hundreds, tens, and units.  
Example: `1280 → 1 thousand, 2 hundreds, 8 tens, 0 units`.

### 4. Time Conversion
Reads a number of seconds and converts it to **hours, minutes, and seconds**.

### 5. Average of Three Grades
Reads the grades of three exams, calculates the average, and prints:
- `"Approved"` if the average ≥ 6  
- `"Failed"` otherwise  

### 6. Final Grade and Attendance
Reads:
- The final average grade  
- The total number of classes  
- The number of absences  

The student is:
- `"Approved"` if average ≥ 6 **and** attendance ≥ 75%  
- `"Failed"` otherwise  

### 7. Ideal Weight
Calculates the ideal weight of a person based on their height and gender:  
- For men: `72.7 × height – 58`  
- For women: `62.1 × height – 44.7`

### 8. Cable Factory Production
A factory produces **0.75 meters of cable per second**, packed in boxes of **300 meters** each.  
The program reads a time interval (in minutes) and prints:
- Total cable produced  
- Number of full boxes  
- Remaining cable that does not fill a complete box  

### 9. Distance Converter (km ↔ miles)
Converts a distance between kilometers and miles, using: 1 mile = 1.609344 km


### 10. Pollution Index Control
Reads a pollution index and displays which industry groups must stop their activities:  
- ≤ 0.25 → Acceptable (no groups stop)  
- ≥ 0.30 → Group 1 stops  
- ≥ 0.40 → Groups 1 and 2 stop  
- ≥ 0.50 → Groups 1, 2, and 3 stop  

---

## Requirements
- C compiler (e.g., GCC)  

## How to Run
Compile using GCC:
```bash
gcc example.c -o example
./example
