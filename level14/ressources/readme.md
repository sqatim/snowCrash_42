# Walkthrough

Despite extensive research, I was unable to find any clues to help me locate the flag.

 As a last resort, I decided to attempt to reverse engineer the "getflag" binary file. Upon analyzing the code, I first modified the "ptrace" function to prevent it from returning the message "You should not reverse this" if I attempted to reverse it.

 ```
 set $eax=0x1
 ```

  Next, I changed the return value of the "getuid()" function from the ID of the "level14" user to the UID of the "flag14", as this was the desired outcome.

  ```
  set $eax=0xbc6
  ```

   After making these changes, the program successfully produced the flag.
