#pragma once
#include <luaaa.hpp>
#include <modules/system.h>
#include <json.hpp>

using namespace luaaa;
using nlohmann::json;

class Player
{
public:
	void init(const char*);
	void run();
private:
	std::string source;
	lua_State* L;
};

