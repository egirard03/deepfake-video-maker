// frames.cpp — part of deepfake-video-maker.

#include "deepfakevideomaker/frames.h"

#include <cstdio>

namespace deepfakevideomaker {

Frames::Frames(const std::string& config_path)
    : config_path_(config_path) {}

void Frames::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Frames::run() {
    if (verbose_) std::fprintf(stderr, "[deepfake-video-maker] frames: run\n");
    // core logic lives here
    return true;
}

}  // namespace deepfakevideomaker
