// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Devices_Display_2_H
#define WINRT_Windows_Devices_Display_2_H
#include "winrt/impl/Windows.Devices.Display.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Display
{
    struct __declspec(empty_bases) DisplayMonitor : winrt::Windows::Devices::Display::IDisplayMonitor,
        impl::require<DisplayMonitor, winrt::Windows::Devices::Display::IDisplayMonitor2>
    {
        DisplayMonitor(std::nullptr_t) noexcept {}
        DisplayMonitor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::IDisplayMonitor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto FromInterfaceIdAsync(param::hstring const& deviceInterfaceId);
    };
}
#endif
