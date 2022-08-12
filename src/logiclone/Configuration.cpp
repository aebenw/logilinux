//
// Created by ewoodward on 4/27/22.
//

#include <iostream>
#include "Configuration.h"

using namespace logicopy;
using namespace libconfig;
using namespace std;

Configuration::Configuration(const std::string &config_fp) {

    _config.readFile(config_fp.c_str());

    const Setting &root = _config.getRoot();

    auto& devices = root["devices"];

    for(int i = 0; i < devices.getLength(); i++) {
        const Setting& device = devices[i];
        std::string name;
        device.lookupValue("name", name);
        _device_paths.insert({name, device.getPath()});

    }

}

