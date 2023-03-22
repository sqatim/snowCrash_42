# Walkthrough

After examining my home directory, I discovered two files: one was a binary file and the other was named `"token"`, but I couldn't access it due to insufficient permissions. To bypass this issue, I attempted to reverse-engineer the binary file, which turned out to be a straightforward program that sends files to a specified host using a socket connection. The program requires two command line arguments: the filename and the host to send it to.

The program checks if the specified file is accessible using the `access()` function. If it's not, the program exits with an error message. If the file is accessible, the program establishes a socket connection to the host and port 6969, sends a banner message, reads the contents of the specified file, and writes them to the socket. Finally, the program prints a message indicating that the file was successfully sent. However, the access condition prevented me from accessing the `"token"` file.

After researching the issue, I discovered a vulnerability called Time Of Check To Time Of Use (TOCTTOU), also known as a race condition. The main idea is to execute a symlink system call precisely between the `access()` and `open()` functions. The `access()` system call checks if the process can access a particular file. If it returns 0, the `access()` function allows the process to read/write/execute the specified file.

Using this vulnerability, I created a script that generates a symbolic link at `/tmp/token` that alternates between pointing to `/tmp/flag` and `/home/user/level10/token`. Then, I launched another script that sets up a server that listens on port 6969 and accepts incoming network connections.
```
while true; do busybox nc -lp 6969; done
```
The server runs continuously, waiting for incoming connections, and executes the file transfer program on the specified file, which is now the symbolic link. Since the symlink is alternating between pointing to the `"flag"` and `"token"` files, the program will send the contents of either file depending on which file the symlink is pointing to at the time.

In the end, I obtained the flag and used it to connect to "flag10." Then, I ran the `"geflag"` command to retrieve the flag.
