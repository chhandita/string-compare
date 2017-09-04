# string-compare
The following code consists of my code from HackerRank : Hash tables - Ransom Note tutorial

# Problem statement
A kidnapper wrote a ransom note but is worried it will be traced back to him. He found a magazine and wants to know if he can cut out whole words from it and use them to create an untraceable replica of his ransom note. The words in his note are case-sensitive and he must use whole words available in the magazine, meaning he cannot use substrings or concatenation to create the words he needs.

Given the words in the magazine and the words in the ransom note, print Yes if he can replicate his ransom note exactly using whole words from the magazine; otherwise, print No.

# input format
The first line contains two space-separated integers describing the respective values of m(the number of words in the magazine) and n (the number of words in the ransom note). 
The second line contains m space-separated strings denoting the words present in the magazine. 
The third line contains n space-separated strings denoting the words present in the ransom note.

# Output format
Print Yes if he can use the magazine to create an untraceable replica of his ransom note; otherwise, print No.

# Sample input 1
6 4
give me one grand today night
give one grand today

# Expected output
Yes

# Sample input 2
6 5
two times three is not four
two times two is four

# Expected output
No
(as two does not occur two times in the magazine)
