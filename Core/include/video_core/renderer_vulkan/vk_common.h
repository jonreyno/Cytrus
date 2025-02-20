// Copyright 2023 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

// Include vulkan-hpp header
#define VK_ENABLE_BETA_EXTENSIONS
#define VK_NO_PROTOTYPES
#define VULKAN_HPP_DISPATCH_LOADER_DYNAMIC 1
#define VULKAN_HPP_NO_CONSTRUCTORS
#define VULKAN_HPP_NO_STRUCT_SETTERS

#ifdef __IPHONE_OS_VERSION_MAX_ALLOWED
#    define VK_USE_PLATFORM_IOS_MVK                1
#endif

#ifdef __MAC_OS_X_VERSION_MAX_ALLOWED
#    define VK_USE_PLATFORM_MACOS_MVK            1
#endif

#include <vulkan/vulkan.hpp>

#define VMA_STATIC_VULKAN_FUNCTIONS 0
#define VMA_DYNAMIC_VULKAN_FUNCTIONS 1
