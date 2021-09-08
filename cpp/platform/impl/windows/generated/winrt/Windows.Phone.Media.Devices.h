// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Phone_Media_Devices_H
#define WINRT_Windows_Phone_Media_Devices_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210825.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210825.3"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Phone.Media.Devices.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint) consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::GetAudioEndpoint() const
    {
        winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint endpoint{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Media::Devices::IAudioRoutingManager)->GetAudioEndpoint(reinterpret_cast<int32_t*>(&endpoint)));
        return endpoint;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::SetAudioEndpoint(winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint const& endpoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Media::Devices::IAudioRoutingManager)->SetAudioEndpoint(static_cast<int32_t>(endpoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Media::Devices::AudioRoutingManager, winrt::Windows::Foundation::IInspectable> const& endpointChangeHandler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Media::Devices::IAudioRoutingManager)->add_AudioEndpointChanged(*(void**)(&endpointChangeHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged_revoker consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Media::Devices::AudioRoutingManager, winrt::Windows::Foundation::IInspectable> const& endpointChangeHandler) const
    {
        return impl::make_event_revoker<D, AudioEndpointChanged_revoker>(this, AudioEndpointChanged(endpointChangeHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Phone::Media::Devices::IAudioRoutingManager)->remove_AudioEndpointChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints) consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AvailableAudioEndpoints() const
    {
        winrt::Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Media::Devices::IAudioRoutingManager)->get_AvailableAudioEndpoints(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Media::Devices::AudioRoutingManager) consume_Windows_Phone_Media_Devices_IAudioRoutingManagerStatics<D>::GetDefault() const
    {
        void* audioRoutingManager{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Media::Devices::IAudioRoutingManagerStatics)->GetDefault(&audioRoutingManager));
        return winrt::Windows::Phone::Media::Devices::AudioRoutingManager{ audioRoutingManager, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Media::Devices::IAudioRoutingManager> : produce_base<D, winrt::Windows::Phone::Media::Devices::IAudioRoutingManager>
    {
        int32_t __stdcall GetAudioEndpoint(int32_t* endpoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *endpoint = detach_from<winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint>(this->shim().GetAudioEndpoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAudioEndpoint(int32_t endpoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAudioEndpoint(*reinterpret_cast<winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint const*>(&endpoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AudioEndpointChanged(void* endpointChangeHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AudioEndpointChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Media::Devices::AudioRoutingManager, winrt::Windows::Foundation::IInspectable> const*>(&endpointChangeHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AudioEndpointChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEndpointChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_AvailableAudioEndpoints(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>(this->shim().AvailableAudioEndpoints());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> : produce_base<D, winrt::Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>
    {
        int32_t __stdcall GetDefault(void** audioRoutingManager) noexcept final try
        {
            clear_abi(audioRoutingManager);
            typename D::abi_guard guard(this->shim());
            *audioRoutingManager = detach_from<winrt::Windows::Phone::Media::Devices::AudioRoutingManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices
{
    constexpr auto operator|(AvailableAudioRoutingEndpoints const left, AvailableAudioRoutingEndpoints const right) noexcept
    {
        return static_cast<AvailableAudioRoutingEndpoints>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(AvailableAudioRoutingEndpoints& left, AvailableAudioRoutingEndpoints const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(AvailableAudioRoutingEndpoints const left, AvailableAudioRoutingEndpoints const right) noexcept
    {
        return static_cast<AvailableAudioRoutingEndpoints>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(AvailableAudioRoutingEndpoints& left, AvailableAudioRoutingEndpoints const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(AvailableAudioRoutingEndpoints const value) noexcept
    {
        return static_cast<AvailableAudioRoutingEndpoints>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(AvailableAudioRoutingEndpoints const left, AvailableAudioRoutingEndpoints const right) noexcept
    {
        return static_cast<AvailableAudioRoutingEndpoints>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(AvailableAudioRoutingEndpoints& left, AvailableAudioRoutingEndpoints const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto AudioRoutingManager::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Phone::Media::Devices::AudioRoutingManager(*)(IAudioRoutingManagerStatics const&), AudioRoutingManager, IAudioRoutingManagerStatics>([](IAudioRoutingManagerStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::Media::Devices::IAudioRoutingManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Media::Devices::AudioRoutingManager> : winrt::impl::hash_base {};
#endif
}
#endif
