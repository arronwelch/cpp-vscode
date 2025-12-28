
# MinGW
 - In this tutorial, you configure Visual Studio Code to use the GCC C++ compiler (g++) and GDB debugger from mingw-w64 to create programs that run on Windows.
 - https://code.visualstudio.com/docs/cpp/config-mingw
 - https://www.msys2.org/
 - msys2 download
 - msys2 install
 - msys2 terminal

 ``` bash
 pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
 ```

 - win
 - environment path
 - new
 - C:\msys64\ucrt64\bin
 - ok

 - win+r -> cmd
 ``` bash
 gcc --version
 gdb --version
 g++ --version
 ```

 - https://space.bilibili.com/80353385/channel/collectiondetail?sid=3849162