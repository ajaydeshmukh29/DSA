###########################################################
##
##   Application which Check the 4 th bit is ON or OFF
##
############################################################

iNo = 0;
iMask = 8;
iAns = 0;

iNo = int (input("Enter Number : "))

iAns = iNo & iMask

if iAns == iMask:

  print("4th Bit is ON")

else:

  print("4th Bit is OFF")


