# cis165-lab6

A BMI of exactly 18.5 or exactly 25.0 belongs in the optimal category because that category includes all BMI values greater than or equal to 18.5 and values less than and equal to 25.0.

| Program | Inputs: first color, second color | Expected result | Actual results |
|-|-|-|-|
| BMI | weight 100, height 70 | 14.35 — Underweight | 14.35 — Underweight |
| BMI | weight 150, height 70 | 21.52 — Optimal weight | 21.52 — Optimal weight |
| BMI | weight 200, height 70 | 28.69 — Overweight | 28.69 — Overweight |
| BMI | weight 150, height 0 | Error: weight and height must be positive | Error: weight and height must be positive |
| BMI | weight -150, height 70 | Error: weight and height must be positive | Error: weight and height must be positive |
| BMI | weight 1, height -1 | Error: weight and height must be positive | Error: weight and height must be positive |
| Color mixer | red, blue | purple | purple |
| Color mixer | red, yellow | orange | orange |
| Color mixer | blue, yellow | green | green |
| Color mixer | blue, red | purple | purple |
| Color mixer | red, red | red | red |
| Color mixer | orange, blue | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. |
| Color mixer | red, orange | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. |

The BMI formula uses pounds and inches to calculate the BMI by a formula. height * height is needed to enter the square of the height in the formula because C++ doesn't use ^ for squaring.

The conditions handle exactly 18.5 and exactly 25.0 by passing by the first check and finally matching the second condition, meaning they fall into the "optimal" category. The order of these conditions matters, because only if the value passes by the first check should it proceed to the next. The conditions avoid gaps by using <= (less than or equal to) to handle both endpoints.

The program checks weight and height before calculating BMI so that if the user-entered values are invalid, the program terminates instead of performing calculations with invalid input.

The unrounded BMI is classified for a precise classification and rounded only its displayed value for a simple readable output.

For equal text, strcmp returns the text itself. == is not the correct comparison for character-array contents because that only works with numerical values.

Each mixture works in either input order because I accounted for this with adequate conditions. The program handles two identical primary colors by comparing first_color and second_color, then displaying first_color if they match.

The program checks for an invalid color in either input position by checking if either input is something other than "red", "blue", or "yellow".

Named constants and result variables make the programs easier to read and check by clearly labeling the parts of the programs, making it easier to read what values they should be allowed to hold.
