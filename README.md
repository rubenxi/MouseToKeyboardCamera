# mouseclick
C sub program to get clicks of Mouse and turn them into keys.
It can be used alone if you give the file the keys you want to use before executing it. 
Arguments are 2 or 7 depending if you want to use simple configuration (just two clicks) or extended one (clicks, wheel, mid click and side clicks).

Example:
./mouseclick a b

Will execute mouseclick as normal and will ask you which clicks to use to get "a" and "b" of output.
The same comes with 7 arguments (7 letters to use extra mode).

Leave empty arguments or an argument number different from 2 or 7 is not allowed and will give an error.

NOTE: As you can see in the .c code, mouseclick is not a clean program, and for sure it could be optimized a lot. This is because of my lack of knowledge, and I'll fix it as soon as I can, but if you know how to do it please let me know.This is because of my lack of knowledge, and I'll fix it as soon as I can, but if you know how to do it please let me know.
