//
// Created by build_machine on 09/07/18.
//

#ifndef VULKAN_BASIC_SAMPLES_HELLOTRIANGLEAPPLICATION_H
#define VULKAN_BASIC_SAMPLES_HELLOTRIANGLEAPPLICATION_H

struct QueueFamilyIndices {
    int graphicsFamily = -1;
    int presentFamily = -1;

    bool isComplete() {
        return (graphicsFamily >= 0 && presentFamily >= 0);
    }
};

struct SwapChainSupportDetails {
    VkSurfaceCapabilitiesKHR capabilities;
    std::vector<VkSurfaceFormatKHR> formats;
    std::vector<VkPresentModeKHR> presentModes;
};
#endif //VULKAN_BASIC_SAMPLES_HELLOTRIANGLEAPPLICATION_H
