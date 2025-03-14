# NebuLua

NebuLua is a Game emulator for running games written in lua.

> [!NOTE]
> Going on vacation till Feburary 2026,maybe never start again on this project ever again.
> If you are reading this and want to complete it please do. refer to [To-Do List](./TO-DO.md)

## Scope of the Project

- Create a game emulator to run games written in lua.
- The purpose of using lua is so that the emulator can be ported for embedded enviornments like `ESP32` or `STM32` and run games their directly.
- For now the major scope is to create a game emulator for x86 architecture, that can load lua games.
- I have a game written in lua that works on [EdgeTX Radio](https://edgetx.org/): [Dino Game](https://github.com/Witty-Wizard/Dino-Game), the goal is to get this running on my computer.
- After that has been achieved, write drivers for embedded systems.

## Development

> [!Note]
> The project is currently in development phase, if you want to try it on your own you can clone the repo and build it on your own.

### 1. Cloning the repository

> [!IMPORTANT]
> The project includes lua as a submodule, so don't forget to recurse the submodules

**Clone the repository with submodules:**

```sh
git clone https://github.com/Witty-Wizard/NebuLua.git --recursive
```

### 2. Building the Source Code

## TL;DR

> [!IMPORTANT]
> I am too lazy to write the `README`, be a good sport and read the code to see how it compiles, it uses `CMake` so it should not be that difficult.
