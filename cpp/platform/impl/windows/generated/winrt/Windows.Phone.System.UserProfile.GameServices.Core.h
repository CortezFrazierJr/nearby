// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Phone_System_UserProfile_GameServices_Core_H
#define WINRT_Windows_Phone_System_UserProfile_GameServices_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210825.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210825.3"
#include "winrt/Windows.Phone.System.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Phone.System.UserProfile.GameServices.Core.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::ServiceUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->get_ServiceUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetGamerProfileAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetGamerProfileAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetInstalledGameItemsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetInstalledGameItemsAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetPartnerTokenAsync(winrt::Windows::Foundation::Uri const& audienceUri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetPartnerTokenAsync(*(void**)(&audienceUri), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<hstring>) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GetPrivilegesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GetPrivilegesAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<hstring>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GrantAchievement(uint32_t achievementId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GrantAchievement(achievementId));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::GrantAvatarAward(uint32_t avatarAwardId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->GrantAvatarAward(avatarAwardId));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService<D>::PostResult(uint32_t gameVariant, winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, winrt::Windows::Storage::Streams::IBuffer const& buffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService)->PostResult(gameVariant, static_cast<int32_t>(scoreKind), scoreValue, static_cast<int32_t>(gameOutcome), *(void**)(&buffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2<D>::NotifyPartnerTokenExpired(winrt::Windows::Foundation::Uri const& audienceUri) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2)->NotifyPartnerTokenExpired(*(void**)(&audienceUri)));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameService2<D>::GetAuthenticationStatus() const
    {
        uint32_t status{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2)->GetAuthenticationStatus(&status));
        return status;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IInspectable>) consume_Windows_Phone_System_UserProfile_GameServices_Core_IGameServicePropertyCollection<D>::GetPropertyAsync(param::hstring const& propertyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection)->GetPropertyAsync(*(void**)(&propertyName), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IInspectable>{ operation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService> : produce_base<D, winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService>
    {
        int32_t __stdcall get_ServiceUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().ServiceUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetGamerProfileAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>>(this->shim().GetGamerProfileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInstalledGameItemsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>>(this->shim().GetInstalledGameItemsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPartnerTokenAsync(void* audienceUri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetPartnerTokenAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&audienceUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPrivilegesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetPrivilegesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GrantAchievement(uint32_t achievementId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GrantAchievement(achievementId);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GrantAvatarAward(uint32_t avatarAwardId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GrantAvatarAward(avatarAwardId);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PostResult(uint32_t gameVariant, int32_t scoreKind, int64_t scoreValue, int32_t gameOutcome, void* buffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostResult(gameVariant, *reinterpret_cast<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const*>(&scoreKind), scoreValue, *reinterpret_cast<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const*>(&gameOutcome), *reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&buffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2> : produce_base<D, winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2>
    {
        int32_t __stdcall NotifyPartnerTokenExpired(void* audienceUri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyPartnerTokenExpired(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&audienceUri));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAuthenticationStatus(uint32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<uint32_t>(this->shim().GetAuthenticationStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection> : produce_base<D, winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection>
    {
        int32_t __stdcall GetPropertyAsync(void* propertyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IInspectable>>(this->shim().GetPropertyAsync(*reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::System::UserProfile::GameServices::Core
{
    inline auto GameService::ServiceUri()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Uri(*)(IGameService const&), GameService, IGameService>([](IGameService const& f) { return f.ServiceUri(); });
    }
    inline auto GameService::GetGamerProfileAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>(*)(IGameService const&), GameService, IGameService>([](IGameService const& f) { return f.GetGamerProfileAsync(); });
    }
    inline auto GameService::GetInstalledGameItemsAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection>(*)(IGameService const&), GameService, IGameService>([](IGameService const& f) { return f.GetInstalledGameItemsAsync(); });
    }
    inline auto GameService::GetPartnerTokenAsync(winrt::Windows::Foundation::Uri const& audienceUri)
    {
        return impl::call_factory<GameService, IGameService>([&](IGameService const& f) { return f.GetPartnerTokenAsync(audienceUri); });
    }
    inline auto GameService::GetPrivilegesAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<hstring>(*)(IGameService const&), GameService, IGameService>([](IGameService const& f) { return f.GetPrivilegesAsync(); });
    }
    inline auto GameService::GrantAchievement(uint32_t achievementId)
    {
        impl::call_factory<GameService, IGameService>([&](IGameService const& f) { return f.GrantAchievement(achievementId); });
    }
    inline auto GameService::GrantAvatarAward(uint32_t avatarAwardId)
    {
        impl::call_factory<GameService, IGameService>([&](IGameService const& f) { return f.GrantAvatarAward(avatarAwardId); });
    }
    inline auto GameService::PostResult(uint32_t gameVariant, winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        impl::call_factory<GameService, IGameService>([&](IGameService const& f) { return f.PostResult(gameVariant, scoreKind, scoreValue, gameOutcome, buffer); });
    }
    inline auto GameService::NotifyPartnerTokenExpired(winrt::Windows::Foundation::Uri const& audienceUri)
    {
        impl::call_factory<GameService, IGameService2>([&](IGameService2 const& f) { return f.NotifyPartnerTokenExpired(audienceUri); });
    }
    inline auto GameService::GetAuthenticationStatus()
    {
        return impl::call_factory_cast<uint32_t(*)(IGameService2 const&), GameService, IGameService2>([](IGameService2 const& f) { return f.GetAuthenticationStatus(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameService2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> : winrt::impl::hash_base {};
#endif
}
#endif
