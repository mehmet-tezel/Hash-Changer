# Hash-Changer
Change the hash code of any executable application.

The application opens the target file in binary mode and appends a NULL value to the end of the file. This process causes all the hash values of the file to change. The file is updated as if it were a new file and continues to function. Any desired amount of NULL bytes can be appended to the file. The amount of NULL values added can vary depending on your system's speed. NULL values added through the program will not corrupt your running program in any way and your program will continue to run as it is.

USAGE: 
> ./nullwriter.exe target.exe 1
> 
> ./nullwriter.exe target.exe 682622976 (651 MB)
