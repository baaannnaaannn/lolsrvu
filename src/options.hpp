#pragma once
#include <string>
#include <cstdint>

struct Options {
    std::string protocol = "";
    std::string PlayerName = "Test";
    std::string ChampionName = "Katarina";
    int32_t SkinID = 0;
    int32_t MapID = 1;
    std::string MapName = "Map1";
    uint16_t port = 5119;
    std::string key = "GLzvuWtyCfHyGhF2";
    bool black_screen = false;
    std::uint32_t ping = 0;

    Options(int argc, char** argv);
};
