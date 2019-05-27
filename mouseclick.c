#include <stdio.h>
#include <X11/Xlib.h>
#include <stdlib.h>	//to use system()
#include <string.h> //to use strcpy()
#include <unistd.h>





int main(int argc, char *argv[])
{
   
char * x=argv[1]; //left
char xdoXdown[100];
char xdoXup[100];
sprintf(xdoXdown, "xdotool keydown %s", x);
sprintf(xdoXup, "xdotool keyup %s", x);

char * a=argv[2]; //right
char xdoAdown[100];
char xdoAup[100];
sprintf(xdoAdown, "xdotool keydown %s", a);
sprintf(xdoAup, "xdotool keyup %s", a);

char * midb=argv[3]; //midb
char xdomiddown[100];
char xdomidup[100];
sprintf(xdomiddown, "xdotool keydown %s", midb);
sprintf(xdomidup, "xdotool keyup %s", midb);

char * wheelup=argv[4]; //wheelup 
char xdowheelupdown[100];
char xdowheelupup[100];
sprintf(xdowheelupdown, "xdotool keydown %s", wheelup);
sprintf(xdowheelupup, "xdotool keyup %s", wheelup);

char * wheeldown=argv[5]; //wheeldown
char xdowheeldowndown[100];
char xdowheeldownup[100];
sprintf(xdowheeldowndown, "xdotool keydown %s", wheeldown);
sprintf(xdowheeldownup, "xdotool keyup %s", wheeldown);

char * extra1=argv[6]; //extra1
char xdoextra1down[100];
char xdoextra1up[100];
sprintf(xdoextra1down, "xdotool keydown %s", extra1);
sprintf(xdoextra1up, "xdotool keyup %s", extra1);

char * extra2=argv[7]; //extra2
char xdoextra2down[100];
char xdoextra2up[100];
sprintf(xdoextra2down, "xdotool keydown %s", extra2);
sprintf(xdoextra2up, "xdotool keyup %s", extra2);


printf("bien");










    Display *display;
    XEvent xevent;
    Window window;

    if( (display = XOpenDisplay(NULL)) == NULL )
        return -1;


    window = DefaultRootWindow(display);
    XAllowEvents(display, AsyncBoth, CurrentTime);

    XGrabPointer(display, 
                 window,
                 1, 
                 PointerMotionMask | ButtonPressMask | ButtonReleaseMask , 
                 GrabModeAsync,
                 GrabModeAsync, 
                 None,
                 None,
                 CurrentTime);
    
    //asignacion teclas
    

    int izquierdaid = 0;
    int derechaid;
    int centroid;
    int ruedaarribaid;
    int ruedaabajoid;
    int botonlateral1id;
    int botonlateral2id;
    int watch = 0;
    
    while (watch == 0){
        XNextEvent(display, &xevent);
     switch (xevent.type) {
                     
             
       case ButtonPress:
           izquierdaid = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
        
    
        while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           derechaid = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
    
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           centroid = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
    
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           ruedaarribaid = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
    
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           ruedaabajoid = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
    
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           botonlateral1id = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
    
    
                while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           botonlateral2id = xevent.xbutton.button;
           watch = 1;
           break;
                        }
                    }
        watch=0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
       while( 1 == 1 ) {
    
     XNextEvent(display, &xevent);
    
    
     switch (xevent.type) {
             
           
            case ButtonPress:
                
                if (xevent.xbutton.button == izquierdaid) {
                    
                         system(xdoXdown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                }
                    
                    
               
                   else if (xevent.xbutton.button ==  derechaid){
                         system(xdoAdown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
               
                  else  if (xevent.xbutton.button ==  centroid){
                         system(xdomiddown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
       }
                    
                    
                
                   else if (xevent.xbutton.button ==  ruedaarribaid){
                         system(xdowheelupdown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                        }
                    
                    
           
                  else  if (xevent.xbutton.button ==  ruedaabajoid){
                         system(xdowheeldowndown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                        }
                    
                    
              
                  else  if (xevent.xbutton.button ==  botonlateral1id){
                         system(xdoextra1down);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
            
                   else if (xevent.xbutton.button ==  botonlateral2id){
                         system(xdoextra2down);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                
                    
               break; //break buttonpress
               
               
                    case ButtonRelease:
                        
                          
                   if (xevent.xbutton.button ==  izquierdaid){
                         system(xdoXup);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
               
                   else if (xevent.xbutton.button ==  derechaid){
                         system(xdoAup);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                else    if (xevent.xbutton.button ==  centroid){
                         system(xdomidup);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                  else  if (xevent.xbutton.button ==  ruedaarribaid){
                         system(xdowheelupup);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                  else  if (xevent.xbutton.button ==  ruedaabajoid){
                         system(xdowheeldownup);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                   else if (xevent.xbutton.button ==  botonlateral1id){
                         system(xdoextra1up);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                   else if (xevent.xbutton.button ==  botonlateral2id){
                         system(xdoextra2up);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
                    }
                    
                    
                
                
                break; //break buttonrelease
               
     }
     
       } //while end
    
    
    
    
    
    
    
   /* while( 1 == 1 ) {

        XNextEvent(display, &xevent);

        switch (xevent.type) {
             
           
            case ButtonPress:
               if ( xevent.xbutton.button == 1 ){
                system(xdoXdown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");

                
               }
               else if ( xevent.xbutton.button == 3 ){
                system(xdoAdown);
                system("killall unclutter");
                system("/usr/bin/unclutter -idle 0 -jitter 100000000 &");
               }
                break;
                
            case ButtonRelease:
                 if ( xevent.xbutton.button == 1 ){
                     
                system(xdoXup);
               }
               else if ( xevent.xbutton.button == 3 ){
                system(xdoAup);
               }
                
              
                break;
            
           
        }
        
            
    }*/
    
    return 0;
}
