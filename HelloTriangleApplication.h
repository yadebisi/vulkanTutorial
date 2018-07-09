//
// Created by build_machine on 09/07/18.
//

#ifndef VULKAN_BASIC_SAMPLES_HELLOTRIANGLEAPPLICATION_H
#define VULKAN_BASIC_SAMPLES_HELLOTRIANGLEAPPLICATION_H

struct QueueFamilyIndices {
    int graphicsFamily = -1;

    bool isComplete() {
        return graphicsFamily >= 0;
    }
};
#endif //VULKAN_BASIC_SAMPLES_HELLOTRIANGLEAPPLICATION_H
