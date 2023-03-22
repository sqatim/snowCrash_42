# Walkthrough

After examining my home directory, I discovered two files: a binary file and a file named `"token"`. Upon inspecting the `token` file's contents, I found a strange string. When I tested the binary file with the token's name as its argument, it produced a different output from its initial output. To investigate further, I tested the program with a different argument, `"ABCDEF"`, and observed that the program generates a new character by adding the index of each character to its corresponding ASCII value. It then prints the resulting string made up of all the new characters. 
```
level09@SnowCrash:~$ ./level09 ABCDEF
ACEGIK
```
Inspired by this discovery, I attempted to reverse the program's purpose and applied it to the token file's contents, which turned out to be successful.

In the end, I obtained the flag and used it to connect to `"flag09"`. Then, I ran the `"geflag"` command to retrieve the flag.