//
// Created by ewoodward on 5/1/22.
//

#ifndef LOGICOPY_INPUTDEVICE_H
#define LOGICOPY_INPUTDEVICE_H

namespace logicopy {
    class InputDevice {
    public:
        explicit InputDevice(const char *name);
        ~InputDevice();

    private:
        const char *name;
    };
}


#endif //LOGICOPY_INPUTDEVICE_H
