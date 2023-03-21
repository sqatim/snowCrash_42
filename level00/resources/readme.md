# Walkthrough

Initially, I searched for all the files that can be accessed with the user flag00 or level00.
Later, I came across a file that had an unusual string.

```
level00@SnowCrash:~$ find / -user flag00 2>/dev/null
/usr/sbin/john
/rofs/usr/sbin/john
level00@SnowCrash:~$ cat /usr/sbin/john 
cdiiddwpgswtgt
```

I attempted to decrypt it using the [decode](https://www.dcode.fr/) website, but with little success. After several attempts, I used a string with the affine cipher, which allowed me to connect to flag00.
```
nottoohardhere
```
Finally, I used the "getflag" command to obtain the flag.
