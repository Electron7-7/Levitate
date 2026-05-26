#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gdk/gdk.h>
#include <peel/Gio/AppLaunchContext.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class AppLaunchContext;
class Display;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ Icon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::AppLaunchContext> ()
{
  return gdk_app_launch_context_get_type ();
}


namespace Gdk
{
class AppLaunchContext : public Gio::AppLaunchContext
/* non-derivable */
{
private:
  using Gio::AppLaunchContext::create;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AppLaunchContext () = delete;
  AppLaunchContext (const AppLaunchContext &) = delete;
  AppLaunchContext (AppLaunchContext &&) = delete;
  AppLaunchContext &
  operator = (const AppLaunchContext &) = delete;
  AppLaunchContext &
  operator = (AppLaunchContext &&) = delete;
  ~AppLaunchContext () = delete;
public:

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkAppLaunchContext *_peel_this = reinterpret_cast<::GdkAppLaunchContext *> (this);
    ::GdkDisplay *_peel_return = gdk_app_launch_context_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  void
  set_desktop (int desktop) noexcept
  {
    ::GdkAppLaunchContext *_peel_this = reinterpret_cast<::GdkAppLaunchContext *> (this);
    gdk_app_launch_context_set_desktop (_peel_this, desktop);
  }

  void
  set_icon (Gio::Icon *icon) noexcept
  {
    ::GdkAppLaunchContext *_peel_this = reinterpret_cast<::GdkAppLaunchContext *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    gdk_app_launch_context_set_icon (_peel_this, _peel_icon);
  }

  void
  set_icon_name (const char *icon_name) noexcept
  {
    ::GdkAppLaunchContext *_peel_this = reinterpret_cast<::GdkAppLaunchContext *> (this);
    gdk_app_launch_context_set_icon_name (_peel_this, icon_name);
  }

  void
  set_timestamp (uint32_t timestamp) noexcept
  {
    ::GdkAppLaunchContext *_peel_this = reinterpret_cast<::GdkAppLaunchContext *> (this);
    gdk_app_launch_context_set_timestamp (_peel_this, timestamp);
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }
}; /* class AppLaunchContext */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
