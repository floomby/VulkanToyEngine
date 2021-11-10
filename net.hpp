#pragma once

#include <atomic>
#include <thread>

class Net {
public:
    Net();
    ~Net();
    void start();
    std::atomic<int> unprocessedSeverTicks;
    static constexpr uint msPerTick = 33;
    static constexpr float ticksPerSecond = 1000.0f / (float)msPerTick;
private:
    std::atomic<bool> toExit;
    std::thread pretendServerThread;
    void ticker();
};