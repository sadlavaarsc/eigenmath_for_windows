## Introduction

This project is the windows-edition of [eigenmath](https://github.com/georgeweigt/eigenmath).

Want to learn more about the original project and learn about how to use it? Here is the original project and README.md.

[georgeweigt/eigenmath: Symbolic math app (github.com)](https://github.com/georgeweigt/eigenmath)

[Original README](./ORIGINAL_README.md)

## Change:

1. add simplified unistd.h for windows.
2. add win_defs.h to fix some constant and type missing.
3. simply adjust engenmath.c to include the newly-added files.
4. add xmake.lua allowing to compile the project with [xmake](https://github.com/xmake-io/xmake).
5. change default prompt from '?' to '$' (because when I first see it, I used to regarded is as a code error!) and also provide a macro to change the prompt.

## How to build

You can compile the project with xmake easily just using the following command in Terminal:

```bash
xmake
```

If you use mingw or something else, you can simply use command like that:

```bash
gcc eigenmath.c -o eigemath.exe
```

And you can also compile it with msvc by creating a new visual studio project or just using command. No further elabration.