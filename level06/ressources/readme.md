# Walkthrough

After examining the files in the home directory:

```
level06@SnowCrash:~$ ls -l
total 12
-rwsr-x---+ 1 flag06 level06 7503 Aug 30  2015 level06
-rwxr-x---  1 flag06 level06  356 Mar  5  2016 level06.php
```

 I came across a PHP script. Within the script, there is a function called "x" that uses a regular expression to match strings starting with "[x " and ending with "]" and captures the content in between. This captured content is then passed as an argument to the "y" function using the "e" modifier.

It's important to note that this code is susceptible to code injection attacks since the "preg_replace" function is used with the "e" modifier. This means that any replacement string can be executed as PHP code, which could potentially allow an attacker to run malicious code on the server.

so i created a file that has the string `[x {${print system($z)}}]` in it. When i run this file in my PHP program, the `system()` function will execute the command specified in the variable `$z` in the shell or command prompt, and then the output of that command will be printed to the console or terminal using the ` ${print ...} ` syntax.
