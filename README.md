# MouseToKeyboardCamera
Simple bash (and c) script which allow you to use mouse as joystick in emulators or games with no mouse support in Linux.

It gets mouse movement and turn it into a key click.
It requires xdotool.


It supports up to 7 mouse buttons (may be increased in the future) from 2.0 version. 1.2 version reccommended if you want to use only two clicks due to the tedious of configuring more buttons in latest versions.

Optionally, if you want to hide the mouse and click while using the script, you can install unclutter and the script will ask you which keys to use when clicking.

You need to give execution permissions to both mouseclick and MouseToKeyCamera files with "sudo chmod +x ./mouseclick" and "sudo chmod +x ./MouseToKeyCamera".

To use it, just execute ./MouseToKeyCamera in a terminal opened in the script location where you have to put mouseclick too if you want to use unclutter to hide the mouse and click. When the script is executed, it asks you for keys to use and speed, and when you set them all, just do a tab change to the window of the game you want to play.

For speed it´s recommended to set default (0.001) to play Monster Hunter games in Citra, and set 0.01 to play Super Mario Odyssey in Yuzu.
To exit the script, just do a tab change to the terminal the script is executing in, and do a ctrl+c.

This script was designed and tested to being used when playng Monster Hunter XX in Citra, but can be used in any game which allow you to use keyboard but not mouse. It´s really useful if you don´t have a gamepad or just don´t want to use it.


NOTE: If you get an error with mouseclick, please compile it yourself with "gcc -lX11 mouseclick.c -o mouseclick" and put the mouseclick file output in the same folder as MouseToKeyboardCamera.
