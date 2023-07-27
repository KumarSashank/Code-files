#Digital graphics tools often make available a "bucket fill" tool that will only paint adjacent cells . In one fill, a modified bucket tool recolors adjacent cells (connected horizontally or vertically but not diagonally) that have the same color. Given a picture represented as a 2-dimensional array of letters representing colors, find the minimum number of fills to completely repaint the picture.

#For example, given the following picture:

#YGB
#YBY
#RRR

#The minimum number of fills is 3. One way to do this is:

#YGB -> YGB -> YGB -> YGB

#Function Description

#Complete the function minimumFills in the editor below. The function must return an integer that represents the minimum number of fills required to completely repaint the picture.

#minimumFills has the following parameter(s):

#picture[picture[0]...picture[n-1]]:  an array of strings representing the picture

#Constraints

#1 ≤ n ≤ 100

#1 ≤ m ≤ 100

#Each picture[i] contains only uppercase letters from the English alphabet.

#Input Format for Custom Testing

#The first line contains an integer, n, the number of rows in the picture.

#Each of the next n lines contains a string of uppercase letters representing the colors in the picture.

#Sample Case 0

#Sample Input For Custom Testing

#STDIN Function

#----- --------
#3 → picture[] size n = 3
#YGB → picture = ["YGB", "YBY", "RRR"]
#YBY        
#RRR

#Sample Output

#3

#Explanation

#The minimum number of fills is 3. One way to do this is:

#YGB -> YGB -> YGB -> YGB

#Sample Case 1

#Sample Input For Custom Testing

#STDIN Function

#----- --------
#3 → picture[] size n = 3

#YGB → picture = ["YGB", "YBY", "RRR"]

#YBY

#RRR

#Sample Output

#3

#Explanation

#The minimum number of fills is 3. One way to do this is:

#YGB -> YGB -> YGB -> YGB

#Sample Case 2

#Sample Input For Custom Testing

#STDIN Function

#----- --------
#3 → picture[] size n = 3

