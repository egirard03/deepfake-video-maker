// main.cpp — entry point. Wires config and subsystems together.

#include "deepfakevideomaker/settings.h"
#include "deepfakevideomaker/swap.h"
#include "deepfakevideomaker/frames.h"
#include "deepfakevideomaker/render.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    deepfakevideomaker::Settings settings = deepfakevideomaker::Settings::load_default();
    deepfakevideomaker::Swap swap(settings.store_path);
    deepfakevideomaker::Frames frames(settings.store_path);
    deepfakevideomaker::Render render(settings.store_path);
    std::fprintf(stderr, "[deepfake-video-maker] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
