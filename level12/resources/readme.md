# Walkthrough

While examining my home directory, I came across a perl script that receives input from users through HTTP GET parameters and performs a search operation on a file located at /tmp/xd.The script then displays the search results as dots on the console.

After analyzing the code, I had an idea to redirect the output of getflag to a file using the first argument. However, this did not work because the script converts the input to uppercase. After testing with the egrep command, I realized I could run a script inside the argument of egrep. But the challenge was the folder name where I needed to put and run the script because the script converts folder names to uppercase when searching for them.

 After some research, I had the idea to use a wildcard in the folder name. To complete the process, I simply needed to convert the parameter `$(/*/SCRIPT)` to Unicode, and then it worked.
```
http://ip:4646/?x=%24%28%2F%2A%2FSCRIPT%29
```
