#include "player.h"

void Player::init(const char* _app) {
    json j = json::parse("{\"@\":\"made with Kirby Lua Compiler 2022 & love. see this? run 'HELLO22' in the kernel\",\"$metadata\":{\"name\":\"Name\",\"type\":\"x\",\"author\":\"Kirby Corporation\"},\"$misc\":{\"klc\":22,\"cert\":\"\"},\"$data\":\"system:print('from app')\"}");
    source = j["$data"];
    L = luaL_newstate();

    luaL_dostring(L, "system = System.new('0')");
}

void Player::run() {
    luaL_dostring(L, source.data());
}