// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210825.3

#pragma once
#ifndef WINRT_Windows_Graphics_H
#define WINRT_Windows_Graphics_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210825.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210825.3"
#include "winrt/impl/Windows.Graphics.2.h"
namespace winrt::impl
{
    template <typename D>
    struct produce<D, winrt::Windows::Graphics::IGeometrySource2D> : produce_base<D, winrt::Windows::Graphics::IGeometrySource2D>
    {
    };
}
WINRT_EXPORT namespace winrt::Windows::Graphics
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Graphics::IGeometrySource2D> : winrt::impl::hash_base {};
#endif
}
#endif
