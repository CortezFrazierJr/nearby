// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_UI_UIAutomation_Core_H
#define WINRT_Windows_UI_UIAutomation_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210825.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210825.3"
#include "winrt/Windows.UI.UIAutomation.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.UIAutomation.2.h"
#include "winrt/impl/Windows.UI.UIAutomation.Core.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus) consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>::Status() const
    {
        winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>::ErrorLocation() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult)->get_ErrorLocation(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>::HasOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult)->HasOperand(impl::bind_in(operandId), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>::GetOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult)->GetOperand(impl::bind_in(operandId), &result));
        return winrt::Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>::IsOpcodeSupported(uint32_t opcode) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation)->IsOpcodeSupported(opcode, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>::ImportElement(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, winrt::Windows::UI::UIAutomation::AutomationElement const& element) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation)->ImportElement(impl::bind_in(operandId), *(void**)(&element)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>::ImportTextRange(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, winrt::Windows::UI::UIAutomation::AutomationTextRange const& textRange) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation)->ImportTextRange(impl::bind_in(operandId), *(void**)(&textRange)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>::AddToResults(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation)->AddToResults(impl::bind_in(operandId)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult) consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>::Execute(array_view<uint8_t const> bytecodeBuffer) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation)->Execute(bytecodeBuffer.size(), get_abi(bytecodeBuffer), &result));
        return winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult> : produce_base<D, winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorLocation(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ErrorLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall HasOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId operandId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().HasOperand(*reinterpret_cast<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const*>(&operandId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId operandId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().GetOperand(*reinterpret_cast<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const*>(&operandId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation> : produce_base<D, winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>
    {
        int32_t __stdcall IsOpcodeSupported(uint32_t opcode, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsOpcodeSupported(opcode));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportElement(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId operandId, void* element) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImportElement(*reinterpret_cast<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const*>(&operandId), *reinterpret_cast<winrt::Windows::UI::UIAutomation::AutomationElement const*>(&element));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ImportTextRange(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId operandId, void* textRange) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImportTextRange(*reinterpret_cast<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const*>(&operandId), *reinterpret_cast<winrt::Windows::UI::UIAutomation::AutomationTextRange const*>(&textRange));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddToResults(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId operandId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToResults(*reinterpret_cast<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const*>(&operandId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Execute(uint32_t __bytecodeBufferSize, uint8_t* bytecodeBuffer, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>(this->shim().Execute(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(bytecodeBuffer), reinterpret_cast<uint8_t const *>(bytecodeBuffer) + __bytecodeBufferSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation::Core
{
    inline CoreAutomationRemoteOperation::CoreAutomationRemoteOperation() :
        CoreAutomationRemoteOperation(impl::call_factory_cast<CoreAutomationRemoteOperation(*)(winrt::Windows::Foundation::IActivationFactory const&), CoreAutomationRemoteOperation>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CoreAutomationRemoteOperation>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation> : winrt::impl::hash_base {};
#endif
}
#endif
