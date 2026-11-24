// swap.cpp — part of deepfake-video-maker.

#include "deepfakevideomaker/swap.h"

#include <cstdio>

namespace deepfakevideomaker {

Swap::Swap(const std::string& config_path)
    : config_path_(config_path) {}

void Swap::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Swap::run() {
    if (verbose_) std::fprintf(stderr, "[deepfake-video-maker] swap: run\n");
    // core logic lives here
    return true;
}

}  // namespace deepfakevideomaker
