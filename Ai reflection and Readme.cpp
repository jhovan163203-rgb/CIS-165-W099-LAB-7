READ.me
AI REFLECTION

Gemini was used for checking the code and making sure there were no errors that caused the code to fail 



Gemini said to combine the dimension inputs and validation into separate functions to keep it cleaner but I didn't because the rules state that additional functions are not required



a specific check I used was for Gemini to check the triangle area formula behavior with base =5 height =3  



using 1/2 x base x height made 0.0 cause of integer division 






Initial Plan

Inputs / Starting Data
 choice: Integer input representing menu choice (1 to 4).
 Shape dimensions: radius, length, width, base, height.

Variables & Constants
 PI: (double PI = 3.14159).
 choice: int
radius, length, width, base, height, area: double

Calculations & Logic Checks
- Selection structure: if-else if-else chain to process choices 1 through 4.
- Check 1: Menu selection validity choice  1 to choice  4

 Area Calculations:
  Circle= area = PI x radius x radius
  Rectangle= area = length x width
  Triangle= area = base x height x 0.5

Expected Output
- Choice 1-3: Display calculated area with label if input is non-negative, otherwise it will display an error.
- Choice 4: Program ends without prompt or calculation.
- Invalid Menu Choice: Error message


Test Log Summary
Test / Input Data
Expected Result
Actual Output
Status
 
Choice 1, radius = 2
Area = 12.56636
Area: 12.56636
Pass
Choice 2, length = 3, width = 4.5
Area = 13.50000
Area: 13.50000
Pass
Choice 3, base = 5, height = 3
Area = 7.50000
Area: 7.50000
Pass
Choice 4
Quit 
Program exited
Pass
Choice 0
Invalid menu choice 
Error: Invalid menu choice please select a choice between 1 and 4 
Pass
Choice 5
Invalid menu choice 
Error: Invalid menu choice please- 
Pass
Choice 1, radius = -1
Error: Negative radius rejected
Error: Radius cannot be negative.
Pass
Choice 2, length = -1, width = 4
Error: Negative length rejected
Error: Length and width cannot be negative.
Pass
Choice 2, length = 3, width = -1
Error: Negative width rejected
Error: Length and width cannot be negative.
Pass
Choice 3, base = -1, height = 3
Error: Negative base rejected
Error: Base and height cannot be negative.
Pass
Choice 3, base = 5, height = -1
Error: Negative height rejected
Error: Base and height cannot be negative.
Pass
Choice 1, radius = 0
Area = 0.00000
Area: 0.00000
Pass
Additional Test: Choice 3 (base=8.4, height=2.5)
Area = 10.50000
Area: 10.50000
Pass


