/*Numbers 1-9
There is no particular pattern in the first numbers, so all we can do is spell them out and count them.

3 + 3 + 5 +4 + 4 +3 +5 +5 +4 = 36

Numbers 10-19
There is also too little pattern in the next 10 numbers that I want to make a deal out of it, so if we count those as well we get

3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8 = 70

Numbers 20-99
Now a pattern starts emerging. For each period of ten numbers, we have a prefix 10 times and then the sequence 1-9, which we have already counted.  So we need to figure out how many letters the tens contain and add 8*36.

10*(6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) + 8*36 = 748

So if we sum that up the number 1-99 will contain 36 + 70 + 74 8= 854 letters

Numbers 100-999
We will use sort of the same trick here.

If we look at one hundred and twenty two (122) and  four hundred and fifty three (453). We will see that the number 1-9 is prepended, then comes the words “hundred and” (10 letters), and last comes a number between 1 and 99.  Whole hundreds such as two hundred (200) are a special case where you have the numbers 1-9 followed by “hundred” (7 letters).

If we break it down we have the numbers 1-9 occurring 100 times each. => 36*100 = 3600

1-99 occurring 9 times => 9*854 = 7686

*/