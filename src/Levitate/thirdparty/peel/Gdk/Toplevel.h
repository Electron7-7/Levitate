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
#include <peel/GLib/List.h>
#include <peel/GObject/TypeInterface.h>
#include <peel/Gdk/Surface.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Device;
class Event;
enum class FullscreenMode : std::underlying_type<::GdkFullscreenMode>::type;
enum class Gravity : std::underlying_type<::GdkGravity>::type;
class Surface;
enum class SurfaceEdge : std::underlying_type<::GdkSurfaceEdge>::type;
class Texture;
enum class TitlebarGesture : std::underlying_type<::GdkTitlebarGesture>::type;
class /* interface */ Toplevel;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Toplevel> ()
{
  return gdk_toplevel_get_type ();
}


namespace Gdk
{
class /* interface */ Toplevel : public Surface
/* requires Surface */
{
private:
  Toplevel () = delete;
  Toplevel (const Toplevel &) = delete;
  Toplevel (Toplevel &&) = delete;

  Toplevel &
  operator = (const Toplevel &) = delete;
  Toplevel &
  operator = (Toplevel &&) = delete;

protected:
  ~Toplevel () = default;

public:
  enum class Capabilities : std::underlying_type<::GdkToplevelCapabilities>::type;
  class /* record */ Layout;
  class /* record */ Size;
  enum class State : std::underlying_type<::GdkToplevelState>::type;

  peel_nonnull_args (2)
  void
  begin_move (Device *device, int button, double x, double y, uint32_t timestamp) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    gdk_toplevel_begin_move (_peel_this, _peel_device, button, x, y, timestamp);
  }

  void
  begin_resize (SurfaceEdge edge, Device *device, int button, double x, double y, uint32_t timestamp) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkSurfaceEdge _peel_edge = static_cast<::GdkSurfaceEdge> (edge);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    gdk_toplevel_begin_resize (_peel_this, _peel_edge, _peel_device, button, x, y, timestamp);
  }

  void
  focus (uint32_t timestamp) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gdk_toplevel_focus (_peel_this, timestamp);
  }

  Toplevel::Capabilities
  get_capabilities () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkToplevelCapabilities _peel_return = gdk_toplevel_get_capabilities (_peel_this);
    return static_cast<Toplevel::Capabilities> (_peel_return);
  }

  Gravity
  get_gravity () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkGravity _peel_return = gdk_toplevel_get_gravity (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  Toplevel::State
  get_state () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkToplevelState _peel_return = gdk_toplevel_get_state (_peel_this);
    return static_cast<Toplevel::State> (_peel_return);
  }

  void
  inhibit_system_shortcuts (Event *event) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gdk_toplevel_inhibit_system_shortcuts (_peel_this, _peel_event);
  }

  bool
  lower () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gboolean _peel_return = gdk_toplevel_lower (_peel_this);
    return !!_peel_return;
  }

  bool
  minimize () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gboolean _peel_return = gdk_toplevel_minimize (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  present (Toplevel::Layout *layout) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkToplevelLayout *_peel_layout = reinterpret_cast<::GdkToplevelLayout *> (layout);
    gdk_toplevel_present (_peel_this, _peel_layout);
  }

  void
  restore_system_shortcuts () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gdk_toplevel_restore_system_shortcuts (_peel_this);
  }

  void
  set_decorated (bool decorated) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gboolean _peel_decorated = static_cast<gboolean> (decorated);
    gdk_toplevel_set_decorated (_peel_this, _peel_decorated);
  }

  void
  set_deletable (bool deletable) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gboolean _peel_deletable = static_cast<gboolean> (deletable);
    gdk_toplevel_set_deletable (_peel_this, _peel_deletable);
  }

  void
  set_gravity (Gravity gravity) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkGravity _peel_gravity = static_cast<::GdkGravity> (gravity);
    gdk_toplevel_set_gravity (_peel_this, _peel_gravity);
  }

  void
  set_icon_list (GLib::ListRef<Texture * const> surfaces) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    GList *_peel_surfaces = surfaces.raw_list ();
    gdk_toplevel_set_icon_list (_peel_this, _peel_surfaces);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gdk_toplevel_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_startup_id (const char *startup_id) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gdk_toplevel_set_startup_id (_peel_this, startup_id);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gdk_toplevel_set_title (_peel_this, title);
  }

  peel_nonnull_args (2)
  void
  set_transient_for (Surface *parent) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkSurface *_peel_parent = reinterpret_cast<::GdkSurface *> (parent);
    gdk_toplevel_set_transient_for (_peel_this, _peel_parent);
  }

  peel_nonnull_args (2)
  bool
  show_window_menu (Event *event) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_return = gdk_toplevel_show_window_menu (_peel_this, _peel_event);
    return !!_peel_return;
  }

  bool
  supports_edge_constraints () noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    gboolean _peel_return = gdk_toplevel_supports_edge_constraints (_peel_this);
    return !!_peel_return;
  }

  bool
  titlebar_gesture (TitlebarGesture gesture) noexcept
  {
    ::GdkToplevel *_peel_this = reinterpret_cast<::GdkToplevel *> (this);
    ::GdkTitlebarGesture _peel_gesture = static_cast<::GdkTitlebarGesture> (gesture);
    gboolean _peel_return = gdk_toplevel_titlebar_gesture (_peel_this, _peel_gesture);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_compute_size (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Toplevel, void (Toplevel::Size *)>::_peel_connect_by_name (this, "compute-size", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_compute_size (HandlerObject *object, void (HandlerObject::*handler_method) (Toplevel *, Toplevel::Size *), bool after = false) noexcept
  {
    return Signal<Toplevel, void (Toplevel::Size *)>::_peel_connect_by_name (this, "compute-size", object, handler_method, after);
  }

  static peel::Property<Toplevel::Capabilities>
  prop_capabilities ()
  {
    return peel::Property<Toplevel::Capabilities> { "capabilities" };
  }

  static peel::Property<bool>
  prop_decorated ()
  {
    return peel::Property<bool> { "decorated" };
  }

  static peel::Property<bool>
  prop_deletable ()
  {
    return peel::Property<bool> { "deletable" };
  }

  static peel::Property<FullscreenMode>
  prop_fullscreen_mode ()
  {
    return peel::Property<FullscreenMode> { "fullscreen-mode" };
  }

  static peel::Property<Gravity>
  prop_gravity ()
  {
    return peel::Property<Gravity> { "gravity" };
  }

  static peel::Property<void *>
  prop_icon_list ()
  {
    return peel::Property<void *> { "icon-list" };
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<bool>
  prop_shortcuts_inhibited ()
  {
    return peel::Property<bool> { "shortcuts-inhibited" };
  }

  static peel::Property<const char *>
  prop_startup_id ()
  {
    return peel::Property<const char *> { "startup-id" };
  }

  static peel::Property<Toplevel::State>
  prop_state ()
  {
    return peel::Property<Toplevel::State> { "state" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<Surface>
  prop_transient_for ()
  {
    return peel::Property<Surface> { "transient-for" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface Toplevel */
static_assert (sizeof (Toplevel) == sizeof (Surface),
               "Toplevel size mismatch");
static_assert (alignof (Toplevel) == alignof (Surface),
               "Toplevel align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
