Bare bones League of Legends(beta/seasson 1) server to test in game.  (slightly updated to ensure it runs on a modern Linux system)


for compiling:
```
mkdir build
cd build
cmake ..
make
```

to change character:

go to ```src/options.hpp``` and change in the ```std::string ChampionName = "Katarina";``` instead of ```Katarina``` type the name of the desired hero


to know what versions are supported in the ```build``` folder in the terminal do ```./lolsrv```

to run do ```./lolsrv "version"```
for example: ```./lolsrv 1.0.0.126```

to launch GameClient I recommend writing a short script called ```start.sh``` in the folder with ```League of Legends.exe```
it will contain:
```
#!/bin/bash
cd "path/to/the/folder/where/League of Legends.exe/is/located"
wine "./League of Legends.exe" "" "" "" "127.0.0.1 5119 GLzvuWtyCfHyGhF2 1"
```

and then run the script
