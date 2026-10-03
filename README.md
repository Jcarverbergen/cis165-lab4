# cis165-lab4
cis165-lab4/   average.cpp   ocean_levels.cpp   README.md   AI_REFLECTION.md
Program Plans
Plan for average.cpp
Create five separate double variables.
Store the assigned values 28, 32, 37, 24, and 33 in the variables.
Add the five variables and store the result in a variable named sum.
Divide sum by 5 and store the result in a variable named average.
Display the sum and average with clear labels.

Plan for ocean_levels.cpp
Create a named constant for the annual ocean-level increase of 1.5 millimeters.
Create three variables or named constants for 5, 7, and 10 years.
Calculate the increase for each number of years.
Store each calculation in its own result variable.
Display all three results with labels and millimeter units.

Expected Calculations
Average — Assigned Values
The five assigned values are:

28, 32, 37, 24, and 33.

The expected sum is:

28 + 32 + 37 + 24 + 33 = 154

The expected average is:

154 / 5 = 30.8

Expected results:

Sum: 154

Average: 30.8

Compile average.cpp:
g++ -std=c++17 -Wall -Wextra average.cpp -o average

Run:
./average

Compile ocean_levels.cpp:
g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels

Run:
./ocean_levels

Ocean-Level Projections — Assigned Rate
The annual rate is 1.5 millimeters per year.

After 5 years:

1.5 × 5 = 7.5 millimeters

After 7 years:

1.5 × 7 = 10.5 millimeters

After 10 years:

1.5 × 10 = 15 millimeters

Run the resulting executable using the command appropriate for your operating system.

Testing
I calculated the expected results before running the programs. I then compared the expected results with the actual program output.

Test Results

| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Average — assigned values | 28, 32, 37, 24, 33 | Sum: 154; Average: 30.8 |Sum = 154; Average = 30.8 |match|
| Average — changed values | Your five test values | Your calculations | Sum = 61; Average = 12.2 |match|
| Ocean — assigned rate | 1.5 mm/year | 5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm | Fill in after running | Fill in after checking |
| Ocean — changed rate | Your test rate | Your calculations | Fill in after running | Fill in after checking |
