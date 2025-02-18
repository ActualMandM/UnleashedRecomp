#pragma once

#include <api/SWA.h>
#include <user/config.h>

class App
{
public:
    static inline bool s_isInit;
    static inline bool s_isMissingDLC;
    static inline bool s_isLoading;
    static inline bool s_isSaving;
    static inline bool s_isWerehog;
    static inline bool s_isSaveDataCorrupt;

    static inline SWA::CGameModeStage* s_pGameModeStage;
    static inline SWA::Player::CEvilSonicContext* s_pEvilSonicContext;

    static inline ELanguage s_language;

    static inline double s_deltaTime;
    static inline double s_time = 0.0; // How much time elapsed since the game started.

    static void Restart(std::vector<std::string> restartArgs = {});
    static void Exit();
};

