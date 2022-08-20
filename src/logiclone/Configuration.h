//
// Created by ewoodward on 4/27/22.
//

#ifndef LOGICOPY_CONFIGURATION_H
#define LOGICOPY_CONFIGURATION_H

#include <utility>
#include <libconfig.h++>
#include <memory>
#include <map>

namespace logicopy {
    class Configuration {
    public:
        Configuration() = default;
        explicit Configuration(const std::string &config_file);
    private:
        libconfig::Config _config;
        std::map<std::string, std::string> _device_paths;

    };
    extern std::shared_ptr<Configuration> global_config;

}



#endif //LOGICOPY_CONFIGURATION_H
