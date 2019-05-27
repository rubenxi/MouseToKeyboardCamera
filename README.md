# mouseclick
C sub program to get clicks of Mouse and turn them into keys.
It can be used alone if you give the file the keys you want to use before executing it. 
Arguments are 2 or 7 depending if you want to use simple configuration (just two clicks) or extended one (clicks, wheel, mid click and side clicks) and an additional argument "y" to activate unclutter and hide mouse or "n" to not.

Example:
./mouseclick a b y

Will execute mouseclick as normal and will ask you which clicks to use to get "a" and "b" of output. It also activates unclutter and hides your mouse.

The same comes with 7 arguments (7 letters to use extra mode) and "-Now you can select if you want to use unclutter and make the mouse invisible, or don´t use it, or map clicks and make the mouse invisible, etc....Many combinations allowed so anyone can decide what to use.
y" or "n".

Leave empty arguments or an argument number different from 2 or 7 is not allowed and will give an error.

NOTE: As you can see in the .c code, mouseclick is not a clean program, and for sure it could be optimized a lot. This is because of my lack of knowledge, and I'll fix it as soon as I can, but if you know how to do it please let me know.This is because of my lack of knowledge, and I'll fix it as soon as I can, but if you know how to do it please let me know.
