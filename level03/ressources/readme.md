# Walkthrough

While listing the files in my home directory, I came across a binary file that had both SUID and SGID permissions.
```
level03@SnowCrash:~$ ls -l
total 12
-rwsr-sr-x 1 flag03 level03 8627 Mar  5  2016 level03
```
When I executed it, a message that said "Exploit me" was printed. 

I decided to extract all the strings in the file, and upon doing so, I noticed that it used the `echo` command without a full path. Since the file had SUID permission, I came up with an idea to create a script named `echo`, make some modifications to the PATH environment variable,
 and then run it as a flag03 user.
 ```
export PATH=/tmp/folder:$PATH
 ```
___
## SUID:
stands for Set User ID, and when this permission is set on an executable file, it allows the user who executes the file to do so with the permissions of the file's owner, rather than their own permissions.

## SGID:
SGID stands for Set Group ID, and when this permission is set on an executable file, it allows the user who executes the file to do so with the permissions of the file's group owner, rather than their own group permissions. 