# Walkthrough

To begin with, I searched for any file that could provide a hint or solution for connecting to the next flag. After conducting some research, I stumbled upon something unusual in the passwd file. This file contains a list of all the users known to the system, and normally, the password field should have an 'x' character.

```
flag00:x:3000:3000::/home/flag/flag00:/bin/bash
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
flag02:x:3002:3002::/home/flag/flag02:/bin/bash
flag03:x:3003:3003::/home/flag/flag03:/bin/bash
```

 To investigate further, I copied the file to my host using the scp command and attempted to crack it using the John the Ripper tool.
  ```
  docker run -it -v ~/Desktop/snowCrash/level01/passwd:/crackme.txt adamoss/john-the-ripper /crackme.txt
  ```
  After some successful attempts, I was able to crack the password and obtain access to flag01: `abcdefg`

Finally, I used the "getflag" command to obtain the flag.
___

## john the ripper
is a popular open-source password cracking tool used by security professionals, penetration testers, and hackers to test the strength of passwords. It supports a variety of password cracking techniques, including dictionary attacks, brute-force attacks, and hybrid attacks.
