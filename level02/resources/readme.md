# Walkthrough

I began by listing the files in the home directory and noticed a file with the pcap format. 
```
level02@SnowCrash:~$ ls
level02.pcap
```
I decided to analyze it using the Wireshark tool. After some investigation, I discovered that a user attempted to connect to a service or application. By examining the data sent, I observed that the user attempted to type `ft_wandr...NDRel.L0L` Further investigation revealed that the dots between "wandr" and "NDRel" were non-printable characters, potentially indicating the presence of backspaces. After confirming this, I was able to determine that the actual password was `ft_waNDReL0L`.