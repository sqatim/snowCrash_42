# Walkthrough

After viewing the files in my home directory, I came across a binary file. I decided to attempt to reverse it. Upon reading its code, I discovered that the program was designed to obtain the value of the LOGNAME environment variable and display it. In order to test this functionality, I attempted to alter the LOGNAME value using the folowing command:
```
export LOGNAME='$(getflag)'
```
I successfully obtained the flag, which allowed me to access the next level.