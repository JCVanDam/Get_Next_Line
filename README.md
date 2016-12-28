# Get_Next_Line

Get_Next_Line is a function which takes in parameter an integer named fd and a pointer on string named line. For each call of this function, a line of a file which has fd value as file descriptor is copied in line variable. Function retunrs 1 while there are something to read, 0 when the read is finished and -1 if an error occured.  
