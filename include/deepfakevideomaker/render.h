// render — part of deepfake-video-maker.

#pragma once

#include <string>
#include <vector>

namespace deepfakevideomaker {

class Render {
public:
    explicit Render(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace deepfakevideomaker
