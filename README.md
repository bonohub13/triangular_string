# tri-echo

## ::::: Instructions :::::
- Run the either one of the commands to install tri-echo.
1. Easy way:
    
    Run ```chmod +x setup.bash``` to make the _setup.bash_ executable.

    And then, run ```./setup.bash``` to compile and install.
2. Manually install
    
    Make a new directory _build_ under _tri-echo_. Then, inside _build_ run ```cmake ..; make``` to compile and with root permission move or copy the binary _triangle\_echo_ to _/usr/local/bin_ with ```"mv or cp" triangle_echo /usr/local/bin``` for easy access.
    Finally, add an alias for tri-echo into .bashrc with ```echo 'alias tri-echo=". /usr/local/bin/triangle_echo"'```.

- - -

## ::::: How to Use :::::
```tri-echo Hello World!```