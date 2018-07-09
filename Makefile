VULKAN_SDK_PATH = /home/build_machine/source/1.1.77.0/x86_64
CFLAGS = -std=c++11 -I$(VULKAN_SDK_PATH)/include
LDFLAGS = -L$(VULKAN_SDK_PATH)/lib `pkg-config --static --libs glfw3` -lvulkan


VulkanTest: HelloTriangleApplication.cpp
	g++ $(CFLAGS) -o VulkanTest HelloTriangleApplication.cpp $(LDFLAGS)


debug: CFLAGS += -DDEBUG -g
debug: VulkanTest

.PHONY: test clean

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest
