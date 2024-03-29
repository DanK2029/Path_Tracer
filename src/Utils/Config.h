#pragma once
#include <string>
#include <vector>

#include "Scene/Scene.h"

class Config
{
  private:
    struct Keywords
    {
        const std::string windowHeight = "windowHeight";
        const std::string windowWidth = "windowWidth";
        const std::string fps = "fps";
        const std::string numThreads = "numThreads";
        const std::string numChildrenInBVHLeafNodes = "numChildrenInBVHLeafNodes";
        const std::string numShadowRays = "numShadowRays";
        const std::string maxRecurseLevel = "maxRecurseLevel";
    };
    Keywords m_keywrods;

  public:
    int windowHeight{};
    int windowWidth{};
    unsigned int fps;
    unsigned int numThreads;
    unsigned int numChildrenInBVHLeafNodes;
    unsigned int numShadowRays;
    unsigned int maxRecurseLevel;

  public:
    Config(std::string filePath);

  private:
    void loadConfig(std::string filePath);
};