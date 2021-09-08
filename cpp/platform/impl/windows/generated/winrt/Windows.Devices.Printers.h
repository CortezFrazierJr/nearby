// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Devices_Printers_H
#define WINRT_Windows_Devices_Printers_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210825.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210825.3"
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Printers.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Printers::PrintSchema) consume_Windows_Devices_Printers_IPrint3DDevice<D>::PrintSchema() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Printers::IPrint3DDevice)->get_PrintSchema(&value));
        return winrt::Windows::Devices::Printers::PrintSchema{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Printers::Print3DDevice>) consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Printers::IPrint3DDeviceStatics)->FromIdAsync(*(void**)(&deviceId), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Printers::Print3DDevice>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>::GetDeviceSelector() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Printers::IPrint3DDeviceStatics)->GetDeviceSelector(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>) consume_Windows_Devices_Printers_IPrintSchema<D>::GetDefaultPrintTicketAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Printers::IPrintSchema)->GetDefaultPrintTicketAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>) consume_Windows_Devices_Printers_IPrintSchema<D>::GetCapabilitiesAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Printers::IPrintSchema)->GetCapabilitiesAsync(*(void**)(&constrainTicket), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>) consume_Windows_Devices_Printers_IPrintSchema<D>::MergeAndValidateWithDefaultPrintTicketAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Printers::IPrintSchema)->MergeAndValidateWithDefaultPrintTicketAsync(*(void**)(&deltaTicket), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>{ operation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Printers::IPrint3DDevice> : produce_base<D, winrt::Windows::Devices::Printers::IPrint3DDevice>
    {
        int32_t __stdcall get_PrintSchema(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Printers::PrintSchema>(this->shim().PrintSchema());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> : produce_base<D, winrt::Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        int32_t __stdcall FromIdAsync(void* deviceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Printers::Print3DDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelector(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Printers::IPrintSchema> : produce_base<D, winrt::Windows::Devices::Printers::IPrintSchema>
    {
        int32_t __stdcall GetDefaultPrintTicketAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().GetDefaultPrintTicketAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCapabilitiesAsync(void* constrainTicket, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().GetCapabilitiesAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&constrainTicket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MergeAndValidateWithDefaultPrintTicketAsync(void* deltaTicket, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().MergeAndValidateWithDefaultPrintTicketAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&deltaTicket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    inline auto Print3DDevice::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<Print3DDevice, IPrint3DDeviceStatics>([&](IPrint3DDeviceStatics const& f) { return f.FromIdAsync(deviceId); });
    }
    inline auto Print3DDevice::GetDeviceSelector()
    {
        return impl::call_factory_cast<hstring(*)(IPrint3DDeviceStatics const&), Print3DDevice, IPrint3DDeviceStatics>([](IPrint3DDeviceStatics const& f) { return f.GetDeviceSelector(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Devices::Printers::IPrint3DDevice> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Printers::IPrintSchema> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Printers::Print3DDevice> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Printers::PrintSchema> : winrt::impl::hash_base {};
#endif
}
#endif
