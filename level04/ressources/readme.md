# Walkthrough

I observed a Perl-formatted file owned by the user flag04 while listing the files in the home directory.

```
level04@SnowCrash:~$ ls -l
total 4
-rwsr-sr-x 1 flag04 level04 152 Mar  5  2016 level04.pl

```

 Upon reading its contents, I discovered that it's a Perl script utilizing the CGI module to retrieve a singular parameter named "x" via a CGI interface. It proceeds to execute a shell command utilizing the value of the "x" parameter and outputs the result as a text/html page to the browser. I then made the decision to pass a " \`getflag\` " command to the parameter, but before doing so, I need to encode it with Unicode.

 ```
http://ip/?x=%60getflag%60
 ```
