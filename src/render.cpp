// render.cpp — part of deepfake-video-maker.

#include "deepfakevideomaker/render.h"

#include <cstdio>

namespace deepfakevideomaker {

Render::Render(const std::string& config_path)
    : config_path_(config_path) {}

void Render::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Render::run() {
    if (verbose_) std::fprintf(stderr, "[deepfake-video-maker] render: run\n");
    // core logic lives here
    return true;
}

}  // namespace deepfakevideomaker
