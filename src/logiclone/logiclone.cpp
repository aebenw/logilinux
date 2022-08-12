//
// Created by ewoodward on 4/27/22.
//

#include <memory>
#include "logiclone.h"
#include "InputDevice.h"
#include "Configuration.h"

// Macro
#define DEFAULT_CONFIG_FILE "/etc/logid.cfg"

using namespace logicopy;

// Setting Global Variables
std::shared_ptr<Configuration> logicopy::global_config;
std::unique_ptr<InputDevice> virtual_input;


struct CLIOptions {
    std::string config_fp = DEFAULT_CONFIG_FILE;
};

/*
 * Main arguments, see primer 219
 * optional
 * argsc - arg count
 *
 * args:
 * double asterisk means pointer to a pointer - https://stackoverflow.com/a/645111
 * Done usually with arrays, I think it can be written also char *args[]
 *
 * For example, if we run the program from cli:
 * logicopy -d -o ofile data0
 * argc = 5
 * argv[0] = "logicopy"
 * argv[1] = "-d";
 * argv[2] = "-o";
 * argv[3] = "ofile";
 * argv[4] = "data0";
 * argv[5] = "0";
 *
*/
#define DEFAULT_CONFIG_FILE "/etc/logid.cfg"

struct ConfigOptions {
    std::string config_file = DEFAULT_CONFIG_FILE;
};

int main(int argc, char **argv) {
    // TODO: read command line args
    ConfigOptions options {};

    global_config = std::make_shared<Configuration>(options.config_file);
    virtual_input = std::make_unique<InputDevice>("Logicopy_V_Input");

    return 0;
}