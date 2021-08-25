<p align="center">
    <a href=#><img src="https://raw.githubusercontent.com/jbocane6/logos/main/holberton-logo.png" alt="holberton" /></a></p>
  
  <p align="center">
    <img align="center" src="https://avatars.githubusercontent.com/u/72631957?v=4" alt="Andres Castañeda" height="100" width="100" />
    <a href="https://twitter.com/YxAndres" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="twitter Andres" height="30" width="40" /></a>
    <a href="https://www.linkedin.com/in/andres-castañeda-1426ab197/" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="Linkedin Andres" height="30" width="40" /></a>
    <a href="https://github.com/4ndr3sxy" target="blank"><img align="center" src="https://raw.githubusercontent.com/devicons/devicon/9f4f5cdb393299a81125eb5127929ea7bfe42889/icons/github/github-original.svg" alt="Github Andres" height="30" width="40" /></a>
    &emsp;&emsp;&emsp;
    <img align="center" src="https://raw.githubusercontent.com/jbocane6/logos/main/foto.png" alt="juan" />
    <a href="https://twitter.com/juanoso07555284" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="juanoso07555284" height="30" width="40" /></a>
    <a href="https://linkedin.com/in/juan-camilo-bocanegra-osorio-18b1821a6" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="juan-camilo-bocanegra-osorio-18b1821a6" height="30" width="40" /></a>
    <a href="https://github.com/jbocane6" target="blank"><img align="center" src="https://raw.githubusercontent.com/devicons/devicon/9f4f5cdb393299a81125eb5127929ea7bfe42889/icons/github/github-original.svg" alt="Github juan" height="30" width="40" /></a>
    &emsp;&emsp;&emsp;
    <img align="center" src="https://avatars.githubusercontent.com/u/37098293?v=4" alt="David Latorre" height="100" width="100" />
    <a href="https://twitter.com/DavidLa74296325" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="twitter David" height="30" width="40" /></a>
    <a href="https://www.linkedin.com/in/david-latorre-886529203/" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="Linkedin David" height="30" width="40" /></a>
    <a href="https://github.com/Byakko12" target="blank"><img align="center" src="https://raw.githubusercontent.com/devicons/devicon/9f4f5cdb393299a81125eb5127929ea7bfe42889/icons/github/github-original.svg" alt="Github David" height="30" width="40" /></a>
    </p>  
  <br>
  <p align="center">
    <a href=#><img src="https://raw.githubusercontent.com/jbocane6/logos/main/titulo3.png" alt="titulo" /></a></p>

# PRINT FORMATTED: simple_shell
shell function project performed by Andrés Felipe Castañeda, Juan Bocanegra  &amp; Juan David Latorre.



## About this Repo
#### Requirments to built it
  * Files should be compiled with gcc 4.8.4  
  * No more than 5 functions per file  
  * Files should end with a new line  
  * No global variables allowed  

### List of allowed functions and system calls
  * access (man 2 access)
  * chdir (man 2 chdir)
  * close (man 2 close)
  * closedir (man 3 closedir)
  * execve (man 2 execve)
  * exit (man 3 exit)
  * _exit (man 2 _exit)
  * fflush (man 3 fflush)
  * fork (man 2 fork)
  * free (man 3 free)
  * getcwd (man 3 getcwd)
  * getline (man 3 getline)
  * getpid (man 2 getpid)
  * isatty (man 3 isatty)
  * kill (man 2 kill)
  * malloc (man 3 malloc)
  * open (man 2 open)
  * opendir (man 3 opendir)
  * perror (man 3 perror)
  * read (man 2 read)
  * readdir (man 3 readdir)
  * signal (man 2 signal)
  * stat (__xstat) (man 2 stat)
  * lstat (__lxstat) (man 2 lstat)
  * fstat (__fxstat) (man 2 fstat)
  * strtok (man 3 strtok)
  * wait (man 2 wait)
  * waitpid (man 2 waitpid)
  * wait3 (man 2 wait3)
  * wait4 (man 2 wait4)
  * write (man 2 write)

**C files**  


**Header**  
holberton.h: This file contains prototypes for all the functions and the struct for data and function relation.  

**Man-page**  
man_1_simple_shell : .

To access the Man Page. ` man_1_simple_shell ` directly in a terminal, download the file and move it to the directory /usr/share/man/man1 where the system stores man pages for User shell commands.  
You can view it by typing the following command: ` man `  Otherwise into the project directory by typing `./man_1_simple_shell `..


### How to use this project
  1. Please clone this repo into your sandbox or local terminal.  
  2. Access to the directory and compile all C files with the command: ` gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c - o hsh ` ( hsh is a suggested name, not mandatory)  
  3. Typing ./hsh shows all cases set in the ` main.c ` file. 
  4. For another test, please modify the main.c file considering the man-page description.  

Example of main.c file:
>
>
>

Expected results after compiling and executing:

>
>
>


### Flowchart
This project was thought to compile previous concepts such as Loops, Structures, and Functions.
For better understanding you can access the logic behind the program as follows:

**The core function is `s` in the file `s`**


<flowchart _printf>
<a href=#><img src="https://raw.githubusercontent.com/jbocane6/logos/main/simple%20shell.png" /></a>

<flowchart _printspecials>


<flowchart _printmod>

## Examples output Command
**Example 1**
```
Username@your-regular-prompt:~$ ./hsh
$ pwd
/home/username/
$ ^D
Username@your-regular-prompt:~$
```
**Example 2**
```
Username@your-regular-prompt:~$ ./hsh
$ ls -l /tmp 
total 32
drwxrwxrwt 2 root  root  4096 Aug 25 09:48 VMwareDnD
-rw------- 1 david david    0 Aug 25 09:48 config-err-s3YwHE
drwx------ 2 david david 4096 Aug 25 09:48 ssh-Ppgn6h3jc6sn
drwx------ 3 root  root  4096 Aug 25 09:48 systemd-private-0bde9b23c6e84583bcac785b52a31f5e-ModemManager.service-r7gSkf
drwx------ 3 root  root  4096 Aug 25 09:49 systemd-private-0bde9b23c6e84583bcac785b52a31f5e-colord.service-RhWvhg
drwx------ 3 root  root  4096 Aug 25 09:48 systemd-private-0bde9b23c6e84583bcac785b52a31f5e-systemd-logind.service-NzQp8h
drwx------ 3 root  root  4096 Aug 25 09:48 systemd-private-0bde9b23c6e84583bcac785b52a31f5e-systemd-resolved.service-VYkvQg
drwx------ 3 root  root  4096 Aug 25 09:48 systemd-private-0bde9b23c6e84583bcac785b52a31f5e-systemd-timesyncd.service-b5oJUf
drwx------ 3 root  root  4096 Aug 25 09:49 systemd-private-0bde9b23c6e84583bcac785b52a31f5e-upower.service-xgNMih
$ ^D
Username@your-regular-prompt:~$
```
### Exmples Builtin

**Example env and exit**
```
Username@your-regular-prompt:~$ ./hsh
$ env
SHELL=/bin/bash
SESSION_MANAGER=local/david-VirtualBox:@/tmp/.ICE-unix/876,unix/david-VirtualBox:/tmp/.ICE-unix/876
WINDOWID=71303171
QT_ACCESSIBILITY=1
COLORTERM=truecolor
XDG_CONFIG_DIRS=/etc/xdg/xdg-xubuntu:/etc/xdg:/etc/xdg
XDG_SESSION_PATH=/org/freedesktop/DisplayManager/Session0
XDG_MENU_PREFIX=xfce-
TERM_PROGRAM_VERSION=1.59.1
..
$ exit
Username@your-regular-prompt:~$
```


### AUTHORS
Juan Bocanegra, Andres Castañeda, Juan Latorre.