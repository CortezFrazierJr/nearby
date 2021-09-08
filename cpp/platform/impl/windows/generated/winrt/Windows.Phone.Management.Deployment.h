// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Phone_Management_Deployment_H
#define WINRT_Windows_Phone_Management_Deployment_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210825.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210825.3"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Management.Deployment.2.h"
#include "winrt/impl/Windows.Phone.Management.Deployment.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Phone_Management_Deployment_IEnterprise<D>::Id() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterprise)->get_Id(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Phone_Management_Deployment_IEnterprise<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterprise)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Phone_Management_Deployment_IEnterprise<D>::WorkplaceId() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterprise)->get_WorkplaceId(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_Phone_Management_Deployment_IEnterprise<D>::EnrollmentValidFrom() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterprise)->get_EnrollmentValidFrom(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_Phone_Management_Deployment_IEnterprise<D>::EnrollmentValidTo() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterprise)->get_EnrollmentValidTo(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Management::Deployment::EnterpriseStatus) consume_Windows_Phone_Management_Deployment_IEnterprise<D>::Status() const
    {
        winrt::Windows::Phone::Management::Deployment::EnterpriseStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterprise)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Phone::Management::Deployment::Enterprise>) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::EnrolledEnterprises() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->get_EnrolledEnterprises(&result));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Phone::Management::Deployment::Enterprise>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Management::Deployment::Enterprise) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::CurrentEnterprise() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->get_CurrentEnterprise(&result));
        return winrt::Windows::Phone::Management::Deployment::Enterprise{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::ValidateEnterprisesAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->ValidateEnterprisesAsync(&result));
        return winrt::Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::RequestEnrollmentAsync(param::hstring const& enrollmentToken) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->RequestEnrollmentAsync(*(void**)(&enrollmentToken), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentManager<D>::RequestUnenrollmentAsync(winrt::Windows::Phone::Management::Deployment::Enterprise const& enterprise) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager)->RequestUnenrollmentAsync(*(void**)(&enterprise), &result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Management::Deployment::Enterprise) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentResult<D>::EnrolledEnterprise() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult)->get_EnrolledEnterprise(&result));
        return winrt::Windows::Phone::Management::Deployment::Enterprise{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus) consume_Windows_Phone_Management_Deployment_IEnterpriseEnrollmentResult<D>::Status() const
    {
        winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::AddPackageAsync(param::hstring const& title, winrt::Windows::Foundation::Uri const& sourceLocation) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics)->AddPackageAsync(*(void**)(&title), *(void**)(&sourceLocation), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::AddPackageAsync(param::hstring const& title, winrt::Windows::Foundation::Uri const& sourceLocation, param::hstring const& instanceId, param::hstring const& offerId, winrt::Windows::Foundation::Uri const& license) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics)->AddPackagePreloadedAsync(*(void**)(&title), *(void**)(&sourceLocation), *(void**)(&instanceId), *(void**)(&offerId), *(void**)(&license), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::GetPendingPackageInstalls() const
    {
        void* items{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics)->GetPendingPackageInstalls(&items));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>{ items, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::FindPackagesForCurrentPublisher() const
    {
        void* items{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics)->FindPackagesForCurrentPublisher(&items));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ items, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics<D>::FindPackages() const
    {
        void* items{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics)->FindPackages(&items));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ items, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>::RemovePackageAsync(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::RemovalOptions const& removalOptions) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2)->RemovePackageAsync(*(void**)(&packageFullName), static_cast<uint32_t>(removalOptions), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>::RegisterPackageAsync(winrt::Windows::Foundation::Uri const& manifestUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2)->RegisterPackageAsync(*(void**)(&manifestUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Phone_Management_Deployment_IInstallationManagerStatics2<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* items{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2)->FindPackagesByNamePublisher(*(void**)(&packageName), *(void**)(&packagePublisher), &items));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ items, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Phone_Management_Deployment_IPackageInstallResult<D>::ProductId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IPackageInstallResult)->get_ProductId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageInstallState) consume_Windows_Phone_Management_Deployment_IPackageInstallResult<D>::InstallState() const
    {
        winrt::Windows::Management::Deployment::PackageInstallState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IPackageInstallResult)->get_InstallState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Phone_Management_Deployment_IPackageInstallResult2<D>::ErrorText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Management::Deployment::IPackageInstallResult2)->get_ErrorText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IEnterprise> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IEnterprise>
    {
        int32_t __stdcall get_Id(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WorkplaceId(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().WorkplaceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnrollmentValidFrom(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().EnrollmentValidFrom());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnrollmentValidTo(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().EnrollmentValidTo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Management::Deployment::EnterpriseStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager>
    {
        int32_t __stdcall get_EnrolledEnterprises(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Phone::Management::Deployment::Enterprise>>(this->shim().EnrolledEnterprises());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentEnterprise(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Phone::Management::Deployment::Enterprise>(this->shim().CurrentEnterprise());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ValidateEnterprisesAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ValidateEnterprisesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestEnrollmentAsync(void* enrollmentToken, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>>(this->shim().RequestEnrollmentAsync(*reinterpret_cast<hstring const*>(&enrollmentToken)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestUnenrollmentAsync(void* enterprise, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestUnenrollmentAsync(*reinterpret_cast<winrt::Windows::Phone::Management::Deployment::Enterprise const*>(&enterprise)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult>
    {
        int32_t __stdcall get_EnrolledEnterprise(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Phone::Management::Deployment::Enterprise>(this->shim().EnrolledEnterprise());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics>
    {
        int32_t __stdcall AddPackageAsync(void* title, void* sourceLocation, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>(this->shim().AddPackageAsync(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&sourceLocation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddPackagePreloadedAsync(void* title, void* sourceLocation, void* instanceId, void* offerId, void* license, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>(this->shim().AddPackageAsync(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&sourceLocation), *reinterpret_cast<hstring const*>(&instanceId), *reinterpret_cast<hstring const*>(&offerId), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&license)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPendingPackageInstalls(void** items) noexcept final try
        {
            clear_abi(items);
            typename D::abi_guard guard(this->shim());
            *items = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>>(this->shim().GetPendingPackageInstalls());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesForCurrentPublisher(void** items) noexcept final try
        {
            clear_abi(items);
            typename D::abi_guard guard(this->shim());
            *items = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForCurrentPublisher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackages(void** items) noexcept final try
        {
            clear_abi(items);
            typename D::abi_guard guard(this->shim());
            *items = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2>
    {
        int32_t __stdcall RemovePackageAsync(void* packageFullName, uint32_t removalOptions, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::RemovalOptions const*>(&removalOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackageAsync(void* manifestUri, void* dependencyPackageUris, uint32_t deploymentOptions, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>(this->shim().RegisterPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByNamePublisher(void* packageName, void* packagePublisher, void** items) noexcept final try
        {
            clear_abi(items);
            typename D::abi_guard guard(this->shim());
            *items = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IPackageInstallResult> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IPackageInstallResult>
    {
        int32_t __stdcall get_ProductId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProductId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageInstallState>(this->shim().InstallState());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Management::Deployment::IPackageInstallResult2> : produce_base<D, winrt::Windows::Phone::Management::Deployment::IPackageInstallResult2>
    {
        int32_t __stdcall get_ErrorText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::Management::Deployment
{
    inline auto EnterpriseEnrollmentManager::EnrolledEnterprises()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Phone::Management::Deployment::Enterprise>(*)(IEnterpriseEnrollmentManager const&), EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>([](IEnterpriseEnrollmentManager const& f) { return f.EnrolledEnterprises(); });
    }
    inline auto EnterpriseEnrollmentManager::CurrentEnterprise()
    {
        return impl::call_factory_cast<winrt::Windows::Phone::Management::Deployment::Enterprise(*)(IEnterpriseEnrollmentManager const&), EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>([](IEnterpriseEnrollmentManager const& f) { return f.CurrentEnterprise(); });
    }
    inline auto EnterpriseEnrollmentManager::ValidateEnterprisesAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncAction(*)(IEnterpriseEnrollmentManager const&), EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>([](IEnterpriseEnrollmentManager const& f) { return f.ValidateEnterprisesAsync(); });
    }
    inline auto EnterpriseEnrollmentManager::RequestEnrollmentAsync(param::hstring const& enrollmentToken)
    {
        return impl::call_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>([&](IEnterpriseEnrollmentManager const& f) { return f.RequestEnrollmentAsync(enrollmentToken); });
    }
    inline auto EnterpriseEnrollmentManager::RequestUnenrollmentAsync(winrt::Windows::Phone::Management::Deployment::Enterprise const& enterprise)
    {
        return impl::call_factory<EnterpriseEnrollmentManager, IEnterpriseEnrollmentManager>([&](IEnterpriseEnrollmentManager const& f) { return f.RequestUnenrollmentAsync(enterprise); });
    }
    inline auto InstallationManager::AddPackageAsync(param::hstring const& title, winrt::Windows::Foundation::Uri const& sourceLocation)
    {
        return impl::call_factory<InstallationManager, IInstallationManagerStatics>([&](IInstallationManagerStatics const& f) { return f.AddPackageAsync(title, sourceLocation); });
    }
    inline auto InstallationManager::AddPackageAsync(param::hstring const& title, winrt::Windows::Foundation::Uri const& sourceLocation, param::hstring const& instanceId, param::hstring const& offerId, winrt::Windows::Foundation::Uri const& license)
    {
        return impl::call_factory<InstallationManager, IInstallationManagerStatics>([&](IInstallationManagerStatics const& f) { return f.AddPackageAsync(title, sourceLocation, instanceId, offerId, license); });
    }
    inline auto InstallationManager::GetPendingPackageInstalls()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Phone::Management::Deployment::PackageInstallResult, uint32_t>>(*)(IInstallationManagerStatics const&), InstallationManager, IInstallationManagerStatics>([](IInstallationManagerStatics const& f) { return f.GetPendingPackageInstalls(); });
    }
    inline auto InstallationManager::FindPackagesForCurrentPublisher()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>(*)(IInstallationManagerStatics const&), InstallationManager, IInstallationManagerStatics>([](IInstallationManagerStatics const& f) { return f.FindPackagesForCurrentPublisher(); });
    }
    inline auto InstallationManager::FindPackages()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>(*)(IInstallationManagerStatics const&), InstallationManager, IInstallationManagerStatics>([](IInstallationManagerStatics const& f) { return f.FindPackages(); });
    }
    inline auto InstallationManager::RemovePackageAsync(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::RemovalOptions const& removalOptions)
    {
        return impl::call_factory<InstallationManager, IInstallationManagerStatics2>([&](IInstallationManagerStatics2 const& f) { return f.RemovePackageAsync(packageFullName, removalOptions); });
    }
    inline auto InstallationManager::RegisterPackageAsync(winrt::Windows::Foundation::Uri const& manifestUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions)
    {
        return impl::call_factory<InstallationManager, IInstallationManagerStatics2>([&](IInstallationManagerStatics2 const& f) { return f.RegisterPackageAsync(manifestUri, dependencyPackageUris, deploymentOptions); });
    }
    inline auto InstallationManager::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher)
    {
        return impl::call_factory<InstallationManager, IInstallationManagerStatics2>([&](IInstallationManagerStatics2 const& f) { return f.FindPackages(packageName, packagePublisher); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IEnterprise> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IEnterpriseEnrollmentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IInstallationManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IPackageInstallResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::IPackageInstallResult2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::Enterprise> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::InstallationManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Management::Deployment::PackageInstallResult> : winrt::impl::hash_base {};
#endif
}
#endif
