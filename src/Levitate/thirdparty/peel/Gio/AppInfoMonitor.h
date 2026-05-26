#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class AppInfoMonitor;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::AppInfoMonitor> ()
{
  return g_app_info_monitor_get_type ();
}


namespace Gio
{
class AppInfoMonitor : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AppInfoMonitor () = delete;
  AppInfoMonitor (const AppInfoMonitor &) = delete;
  AppInfoMonitor (AppInfoMonitor &&) = delete;
  AppInfoMonitor &
  operator = (const AppInfoMonitor &) = delete;
  AppInfoMonitor &
  operator = (AppInfoMonitor &&) = delete;
  ~AppInfoMonitor () = delete;
public:

  static peel::RefPtr<AppInfoMonitor>
  get () noexcept
  {
    ::GAppInfoMonitor *_peel_return = g_app_info_monitor_get ();
    peel_assume (_peel_return);
    return peel::RefPtr<AppInfoMonitor>::adopt_ref (reinterpret_cast<AppInfoMonitor *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<AppInfoMonitor, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (AppInfoMonitor *), bool after = false) noexcept
  {
    return Signal<AppInfoMonitor, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }
}; /* class AppInfoMonitor */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
