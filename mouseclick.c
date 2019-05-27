#include <stdio.h>
#include <X11/Xlib.h>
#include <stdlib.h>	//to use system()
#include <string.h> //to use strcpy()
#include <unistd.h>
#include <signal.h>

// Compile with "gcc -lX11 mouseclick.c -o mouseclick"



void exhandler(int ex) {
   system ("killall mouseclick");
   system ("killall unclutter");
   kill(getpid(), 1);
   
}


int main(int argc, char *argv[])
{
        signal(SIGINT, exhandler);
        if (argc != 8 && argc != 3){
        system("xdotool key I N C O R R E C T space A R G U M E N T S space P L E A S E space P A S S space 2 space O R space 7 space L E T T E R S space T O space M O U S E C L I C K key Return");
        system ("killall mouseclick");
        kill(getpid(), 1);
        }
        sleep (1);
        system("xdotool key W E L C O M E space T O space M O U S E C L I C K Return N O T E space T H A T space T H I S space I S space A space W I P space S C R I P T space S O space P L E A S E space D O N T space C L I C K space B E F O R E space T H E space P R O G R A M space T O L D space Y O U space T O comma space A N D space T R Y space N O T space T O space M O V E space T H E space M O U S E space W H I L E space C O N F I G U R I N G space C L I C K S space A N D space D O N T space D O space C T R L C space B E F O R E space T H E space P R O G R A M space T O L D space Y O U space T O key Return");
    
    sleep (3);
    system("xdotool key o sleep 1 key o sleep 1 key o sleep 1 key Return");
    
    
      //Long version
   if ( argc == 8 ) {
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
    

    //keys assignment
    

    int izquierdaid;
    int derechaid;
    int centroid;
    int ruedaarribaid;
    int ruedaabajoid;
    int botonlateral1id;
    int botonlateral2id;
    int watch = 0;
    
    sleep (3);
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space L E F T space B U T T O N  ");
    
    sleep(1);
    while (watch == 0){
        XNextEvent(display, &xevent);
     switch (xevent.type) {
                     
             
       case ButtonPress:
           izquierdaid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
    sleep(1);
           break;
                        }
                    }
        watch=0;
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space R I G H T space B U T T O N  ");
    
    sleep(1);
    
        while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           derechaid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
           break;
                        }
                    }
     
        watch=0;
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space W H E E L space U P space B U T T O N  ");
    
    sleep(1);
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
            
           ruedaarribaid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
            
           break;
                        }
                    }
        watch=0;
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space W H E E L space D O W N space B U T T O N  ");
    
    sleep(1);
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           if (xevent.xbutton.button != ruedaarribaid){
           ruedaabajoid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
           }
           break;
                        }
                    }
                    
    watch=0;
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space M I D D L E space B U T T O N  ");
    
    sleep(1);
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           if ( xevent.xbutton.button != ruedaabajoid && xevent.xbutton.button != ruedaarribaid ){
           centroid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
           }
           break;
                        }
                    }
        watch=0;
        
        
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space E X T R A B U T T O N 1 space B U T T O N  ");
    
    sleep(1);
            while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
            if ( xevent.xbutton.button != ruedaabajoid && xevent.xbutton.button != ruedaarribaid ){
           botonlateral1id = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
            }
           break;
                        }
                    }
        watch=0;
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space E X T R A B U T T O N 2 space B U T T O N  ");
    
    sleep(1);
    
        while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
              if ( xevent.xbutton.button != ruedaabajoid && xevent.xbutton.button != ruedaarribaid ){
           botonlateral2id = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
              }
           break;
                        }
                    }
        watch=0;
    system("xdotool key C O N F I G U R A T I O N space F I N I S H E D key Return ");
    system("xdotool key C H A N G E space T O space G A M E space T A B space N O W key Return ");
    system("xdotool key D O space A space C T R L space C space I N space T H I S space W I N D O W space T O space E X I T key Return");
    
    
    
    
    
    
    
    
    

    
    
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
    
    
   }
   
   //Short version
   
   else if (argc == 3) {
       
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
    
    //keys assignment
    

    int izquierdaid;
    int derechaid;

    int watch = 0;
    
    
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space L E F T space B U T T O N  ");
    
    sleep(1);
    while (watch == 0){
        XNextEvent(display, &xevent);
     switch (xevent.type) {
                     
             
       case ButtonPress:
           izquierdaid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
    sleep(1);
           break;
                        }
                    }
        watch=0;
    system("xdotool key C L I C K space A space K E Y space I N space M O U S E space F O R space R I G H T space B U T T O N  ");
    
    sleep(1);
    
        while (watch == 0){
                     XNextEvent(display, &xevent);
     switch (xevent.type) {
             
       case ButtonPress:
           derechaid = xevent.xbutton.button;
           watch = 1;
    system ("xdotool key Return");
    system("xdotool key D O N E ");
    system ("xdotool key Return");
           break;
                        }
                    }
        watch=0;  
        system("xdotool key C O N F I G U R A T I O N space F I N I S H E D key Return ");
    system("xdotool key C H A N G E space T O space G A M E space T A B space N O W key Return ");
    system("xdotool key D O space A space C T R L space C space I N space T H I S space W I N D O W space T O space E X I T key Return");
    
    
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
                    
 
                break; //break buttonrelease
               
     }
     
       } //while end
    

   }
    
    return 0;
}
