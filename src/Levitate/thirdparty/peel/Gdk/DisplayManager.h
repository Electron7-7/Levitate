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
#include <peel/GLib/SList.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
class DisplayManager;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DisplayManager> ()
{
  return gdk_display_manager_get_type ();
}


namespace Gdk
{
class DisplayManager : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DisplayManager () = delete;
  DisplayManager (const DisplayManager &) = delete;
  DisplayManager (DisplayManager &&) = delete;
  DisplayManager &
  operator = (const DisplayManager &) = delete;
  DisplayManager &
  operator = (DisplayManager &&) = delete;
  ~DisplayManager () = delete;
public:

  peel_returns_nonnull
  static DisplayManager *
  get () noexcept
  {
    ::GdkDisplayManager *_peel_return = gdk_display_manager_get ();
    peel_assume (_peel_return);
    return reinterpret_cast<DisplayManager *> (_peel_return);
  }

  Display *
  get_default_display () noexcept
  {
    ::GdkDisplayManager *_peel_this = reinterpret_cast<::GdkDisplayManager *> (this);
    ::GdkDisplay *_peel_return = gdk_display_manager_get_default_display (_peel_this);
    return reinterpret_cast<Display *> (_peel_return);
  }

  GLib::SList<Display *>
  list_displays () noexcept
  {
    ::GdkDisplayManager *_peel_this = reinterpret_cast<::GdkDisplayManager *> (this);
    GSList *_peel_return = gdk_display_manager_list_displays (_peel_this);
    return GLib::SList<Display *>::adopt_list (_peel_return);
  }

  Display *
  open_display (const char *name) noexcept
  {
    ::GdkDisplayManager *_peel_this = reinterpret_cast<::GdkDisplayManager *> (this);
    ::GdkDisplay *_peel_return = gdk_display_manager_open_display (_peel_this, name);
    return reinterpret_cast<Display *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_default_display (Display *display) noexcept
  {
    ::GdkDisplayManager *_peel_this = reinterpret_cast<::GdkDisplayManager *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    gdk_display_manager_set_default_display (_peel_this, _peel_display);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_display_opened (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DisplayManager, void (Display *)>::_peel_connect_by_name (this, "display-opened", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_display_opened (HandlerObject *object, void (HandlerObject::*handler_method) (DisplayManager *, Display *), bool after = false) noexcept
  {
    return Signal<DisplayManager, void (Display *)>::_peel_connect_by_name (this, "display-opened", object, handler_method, after);
  }

  static peel::Property<Display>
  prop_default_display ()
  {
    return peel::Property<Display> { "default-display" };
  }
}; /* class DisplayManager */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Display.h>
