# Walkthrough

After inspecting my home directory, I found two files: one was a binary file, and the other was a file named `"token"` that I couldn't open due to lack of permissions. To work around this, I attempted to reverse-engineer the binary file. As I analyzed its code, I discovered that the program was designed to accept a file name as an argument, open the file, and print its contents. However, I realized that the program was specifically designed to prevent access to the "token" file. It did this by checking if the argument passed to it was "token" using the strstr function, and if it was, it printed the message `"You may not access token."`

To get around this limitation, I came up with the idea of creating a symbolic link to the `"token"` file but with a different name. 
```
level08@SnowCrash:~$ ln -s ~/token /tmp/indeed
level08@SnowCrash:~$ ./level08 /tmp/indeed
quif5eloekouj29ke0vouxean
```
This tricked the program into thinking that I was passing a different argument and allowed me to access the contents of the `"token"` file without triggering the `"You may not access token"` message.

In the end, I obtained the flag and used it to connect to "flag08." Then, I ran the `"geflag"` command to retrieve the flag.