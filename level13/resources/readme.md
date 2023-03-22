# Walkthrough

After inspecting the home directory, I discovered a binary file. I decided to reverse engineer it by examining the assembly code.

 From my analysis of the code, I determined that it checks the UID of the user running the program using the `getuid()` function. If the UID matches a specific value (0x1092), the program will print a message containing an encrypted token using a function called ft_des(). However, if the UID does not match the expected value, the program will print a different message indicating that it was started with an unexpected UID.

Based on this analysis, I concluded that in order to successfully run the program, I needed to set the return value of the `getuid() `function to `0x1092`. After doing so, the program worked as intended.

```
set $eax=0x1092
```