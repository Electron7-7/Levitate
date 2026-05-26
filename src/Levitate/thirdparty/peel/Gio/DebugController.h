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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/Initable.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ DebugController;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DebugController> ()
{
  return g_debug_controller_get_type ();
}


namespace Gio
{
class /* interface */ DebugController : public Initable
/* requires Initable */
{
private:
  DebugController () = delete;
  DebugController (const DebugController &) = delete;
  DebugController (DebugController &&) = delete;

  DebugController &
  operator = (const DebugController &) = delete;
  DebugController &
  operator = (DebugController &&) = delete;

protected:
  ~DebugController () = default;

public:

  bool
  get_debug_enabled () noexcept
  {
    ::GDebugController *_peel_this = reinterpret_cast<::GDebugController *> (this);
    gboolean _peel_return = g_debug_controller_get_debug_enabled (_peel_this);
    return !!_peel_return;
  }

  void
  set_debug_enabled (bool debug_enabled) noexcept
  {
    ::GDebugController *_peel_this = reinterpret_cast<::GDebugController *> (this);
    gboolean _peel_debug_enabled = static_cast<gboolean> (debug_enabled);
    g_debug_controller_set_debug_enabled (_peel_this, _peel_debug_enabled);
  }

  static peel::Property<bool>
  prop_debug_enabled ()
  {
    return peel::Property<bool> { "debug-enabled" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

  static_assert (sizeof (Iface) == sizeof (::GDebugControllerInterface),
                 "DebugController::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDebugControllerInterface),
                 "DebugController::Iface align mismatch");
}; /* interface DebugController */
static_assert (sizeof (DebugController) == sizeof (Initable),
               "DebugController size mismatch");
static_assert (alignof (DebugController) == alignof (Initable),
               "DebugController align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
