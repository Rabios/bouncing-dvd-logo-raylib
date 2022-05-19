# bouncing-dvd-logo-raylib

"Bouncing DVD Logo" Screensaver challenge from Amir Rajan.

This is port of "Bouncing DVD Logo" from DragonRuby GTK, Based on [this](https://gist.github.com/amirrajan/83c368bfc4f153abdfba995458d8943a) gist, Using [raylib](https://github.com/raysan5/raylib) with C99!

<img src="bouncing_dvd_logo.png"><br><br>

### Build and Run

First, You should have [raylib](https://github.com/raysan5/raylib) built for a platform with `make`, Then edit makefile to set path of gcc and raylib (And to suit your preferences...)

If you don't know about building raylib, See "Development Platforms" in [raylib wiki](https://github.com/raysan5/raylib/wiki)

Then...

```
make                # Make, And also set platform (Example: PLATFORM=PLATFORM_DESKTOP)
./bouncing_dvd_logo # Or just bouncing_dvd_logo on Windows instead...
```

### License

See [`LICENSE.txt`](https://github.com/Rabios/bouncing-dvd-logo-raylib/blob/master/LICENSE.txt) for repo license and [`LICENSE.txt`](https://github.com/Rabios/bouncing-dvd-logo-raylib/blob/master/LICENSE.txt) for third party licenses...

### Q&A

#### How many proud lines of code did you have to write?

I've written over 120 lines of code, And i'm very proud of this!

#### How many different game engine concepts (eg: physics bodies, matrices, events, transforms, camera) did you have to be knowledgeable of before you could build your implementation?

The only concept needed was collision detection, The logic was simple and easy btw! :)

#### Did you have to use classes, inheritance, structs or any other overly complex data structures? Why does the engine you are using require these complexities for such a trivial game?

Nothing was complex, But for better management i used `Rectangle` struct, It's very simple and easy...

Colors was done and changed from array, So yes nothing was hard to do...

#### How many times did you have to start and stop execution? What was the feedback loop like when you were developing?

Not a lot, Depending on times i compile after doing edits if needed, And it was fine due to being C a compiled language...

#### Were you required to use a dedicated IDE? How long did it take you to get familiar with the IDE when you first started off?

No, Notepad++ and then `make` :)

#### Is the source code for the game easily sharable? If you have to share more than just one file and some sprites, what else did you have to provide? What do these ancillary files represent?

Yes, I also did it without sprites so everything will be in just one executable...

#### How difficult was it to set up a 720p canvas?

raylib is designed to be very freaking simple, So i just use `InitWindow(width, height, title)` to initialize window with dimensions with no need for a canvas...

#### How difficult was it to export to "all the platforms"?

Working for desktop platforms is very easy through, But compilation for non-desktop like Web and Android would be somehow difficult. (cause Makefiles maybe not updated?)

#### What was the output binary size?

It gave me one executable with size of 0.5 MB as i used C99 to write this using raylib, Due to being small i can pack anything in freaking small size...

#### Be sensitive to what pains the engine of your choice puts you through to build the simplest of 2D game and ask yourself if it's acceptable. What could the engine have done better?

I didn't have pains while doing stuff with raylib (Due to being very simple...)

### Challenge of "Bouncing DVD Logo with Pausing" content

1. When the game starts up, show a sprite - that’s 50x50 pixels in size - at the center of the screen that has a resolution of 1280x720.
2. The box should start moving in a random x and y direction at a rate of 1 pixel per simulation tick (the x and y directions should be either 1.0, -1.0 chosen randomly at start). The speed of your box simulation should be 60 hertz (60 "ticks" per second).
3. The box should bounce around within the bounds of the 1280x720 canvas.
4. When the box hits the edge, it should change to a different random color (the box should not be the same color after hitting an edge).
5. If you press the space key, the box should stop moving. When you press the space key again, the box should resume moving in the direction it was going.
6. Your game should support PC, Mac, Linux, Web at least (iOS, and Android for extra credit).
7. The exe/binary icon for the game should be a square with the color of your choosing.
8. Release your game to Itch.io (PC, Mac, Linux, Web); and for extra credit Test Flight (iOS); and Google Play Beta Testing (Android). If you can't deploy to all platforms, make note of that in the readme.
