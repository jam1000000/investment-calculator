Program takes user input for an initial investment, a reinvestment amount, a period integer, 
and an interest percentage yield per period.

These input values are then stored in their respective variables, 
and the interest percentage is divided by 100, and is converted to a coefficient for calculation.

A new variable is created for the total investment amount after calculation, 
the for() loop multiplies the investment amount by the interest coefficient, 
and then adds the reinvestment amount to the new total.

This process repeats a "per" amount of times.

A "yield" variable is created to calculate the yield amount, 
this is done by taking the total investment after periods, 
and subtracting the inital investment and the reinvestment amount times the period integer.

The program prints the investment amount after "per" periods, the "totalinv", the initial investment, and the "yield".
