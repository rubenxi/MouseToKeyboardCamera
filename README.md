# MouseToKeyboardCamera
Simple bash (and c) script which allow you to use mouse as joystick in emulators or games with no mouse support

Script in bash and c to get mouse movement and turn it into a key click
It requires xdotool.

Optionally, if you want to hide the mouse and click while using the script, you can install unclutter and the script will ask you which keys to use when clicking.

To use it, just execute ./MouseToKeyCamera in a terminal opened in the script location where you have to put mouseclick too if you want to use unclutter to hide the mouse and click. When the script is executed, it asks you for keys to use, and when you set them all just do a tab change to the window of the game you want to play.

To exit the script just do a tab change to the window the script is executing in and do a ctrl+c.

This script was designed and tested to being used when playng Monster Hunter XX in Citra, but can be used in any game which allow you to use keyboard but not mouse.
