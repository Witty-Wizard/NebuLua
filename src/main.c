#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"
#include <stdio.h>
#include <stdlib.h>

int hello_world(lua_State *L) {
  printf("Hello World\n");
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <script.lua>\n", argv[0]);
    return EXIT_FAILURE;
  }

  lua_State *L = luaL_newstate();
  luaL_openlibs(L);

  lua_pushcfunction(L, hello_world);
  lua_setglobal(L, "hello_world");

  if (luaL_dofile(L, argv[1])) {
    fprintf(stderr, "Lua error: %s\n", lua_tostring(L, -1));
    lua_pop(L, 1);
  }

  lua_close(L);
  return EXIT_SUCCESS;
}
