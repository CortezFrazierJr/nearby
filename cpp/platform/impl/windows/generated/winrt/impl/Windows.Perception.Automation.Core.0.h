// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Perception_Automation_Core_0_H
#define WINRT_Windows_Perception_Automation_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IGetActivationFactory;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core
{
    struct ICorePerceptionAutomationStatics;
    struct CorePerceptionAutomation;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation> = L"Windows.Perception.Automation.Core.CorePerceptionAutomation";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> = L"Windows.Perception.Automation.Core.ICorePerceptionAutomationStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ 0x0BB04541,0x4CE2,0x4923,{ 0x9A,0x76,0x81,0x87,0xEC,0xC5,0x91,0x12 } }; // 0BB04541-4CE2-4923-9A76-8187ECC59112
    template <> struct abi<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetActivationFactoryProvider(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics
    {
        WINRT_IMPL_AUTO(void) SetActivationFactoryProvider(winrt::Windows::Foundation::IGetActivationFactory const& provider) const;
    };
    template <> struct consume<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics<D>;
    };
}
#endif
