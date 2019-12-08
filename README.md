# C Game Engine

based on tutorial from [this guide](https://prdeving.wordpress.com/2019/05/30/how-to-write-a-game-engine-in-pure-c-part-1-state-manager/)

## requirements

- sdl2

## build

`gcc -o engine $(sdl2-config --libs --cflags) src/statemanager.c src/graphics.c src/engine.c main.c`

## run

`./engine`
