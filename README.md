# Hanged Man Game
## Running environmemnt
UNIX / LINUX

## Compile environment
g++, with curses lib installed

## How to compile
```
cd [folder_path]
make
```

## How to play
- Run hanged_man.out
- Player 1:
  - Use `Tab` to shift the tabs
  - For hardness: `1`: simple, `2`: middle, `3`: hard
  - Word and hint only support small case character, word support 20 character MAX, hint support 100 char MAX 
  - After fill the question, shift to tab “Finish” and press `return`
- Player 2:
  - Press A...Z keys. If the char you pressed is in the word, all the chars in the word will appear; If the char you pressed is NOT in the word, one more stroke will be drawn on the man.
  - If all charts filled, you win; If all strokes of the man drawn, you DIE.
