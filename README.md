# fgetln.h
C
Simple function for pulling whole lines from files with dynamically allocated string. Stores the new line character in line.
Should be used by assigning a char* pointer with this function, otherwise memory can leak.
Remember to free memory pointed by your pointer.
