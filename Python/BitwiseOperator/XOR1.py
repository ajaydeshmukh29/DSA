######################################################################################################################
##
##   Accept a decimal number from user, apply bitwise XOR operation with iMask, and display the updated number.
##
##   iMask = 0X00000084
##
######################################################################################################################

iNo = 0;
iMask = 0X00000084;
iAns = 0;

iNo = int(input("Enter Number : "));

iAns = iNo ^ iMask;

print("Updated Number is : ",iAns);