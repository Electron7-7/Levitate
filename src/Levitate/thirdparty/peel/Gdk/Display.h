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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gdk
{
class AppLaunchContext;
class Clipboard;
class Device;
class Display;
class /* record */ DmabufFormats;
class Event;
class GLContext;
struct KeymapKey;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
class Monitor;
class Seat;
class Surface;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Display> ()
{
  return gdk_display_get_type ();
}


namespace Gdk
{
class Display : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Display () = delete;
  Display (const Display &) = delete;
  Display (Display &&) = delete;
  Display &
  operator = (const Display &) = delete;
  Display &
  operator = (Display &&) = delete;
  ~Display () = delete;
public:

  static Display *
  get_default () noexcept
  {
    ::GdkDisplay *_peel_return = gdk_display_get_default ();
    return reinterpret_cast<Display *> (_peel_return);
  }

  static Display *
  open (const char *display_name) noexcept
  {
    ::GdkDisplay *_peel_return = gdk_display_open (display_name);
    return reinterpret_cast<Display *> (_peel_return);
  }

  void
  beep () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gdk_display_beep (_peel_this);
  }

  void
  close () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gdk_display_close (_peel_this);
  }

  peel::RefPtr<GLContext>
  create_gl_context (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GError *_peel_error = nullptr;
    ::GdkGLContext *_peel_return = gdk_display_create_gl_context (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLContext>::adopt_ref (reinterpret_cast<GLContext *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  device_is_grabbed (Device *device) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    gboolean _peel_return = gdk_display_device_is_grabbed (_peel_this, _peel_device);
    return !!_peel_return;
  }

  void
  flush () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gdk_display_flush (_peel_this);
  }

  peel::RefPtr<AppLaunchContext>
  get_app_launch_context () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkAppLaunchContext *_peel_return = gdk_display_get_app_launch_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<AppLaunchContext>::adopt_ref (reinterpret_cast<AppLaunchContext *> (_peel_return));
  }

  peel_returns_nonnull
  Clipboard *
  get_clipboard () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkClipboard *_peel_return = gdk_display_get_clipboard (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Clipboard *> (_peel_return);
  }

  Seat *
  get_default_seat () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkSeat *_peel_return = gdk_display_get_default_seat (_peel_this);
    return reinterpret_cast<Seat *> (_peel_return);
  }

  peel_returns_nonnull
  DmabufFormats *
  get_dmabuf_formats () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkDmabufFormats *_peel_return = gdk_display_get_dmabuf_formats (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DmabufFormats *> (_peel_return);
  }

  peel_nonnull_args (2)
  Monitor *
  get_monitor_at_surface (Surface *surface) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    ::GdkMonitor *_peel_return = gdk_display_get_monitor_at_surface (_peel_this, _peel_surface);
    return reinterpret_cast<Monitor *> (_peel_return);
  }

  peel_returns_nonnull
  Gio::ListModel *
  get_monitors () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GListModel *_peel_return = gdk_display_get_monitors (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    return gdk_display_get_name (_peel_this);
  }

  peel_returns_nonnull
  Clipboard *
  get_primary_clipboard () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkClipboard *_peel_return = gdk_display_get_primary_clipboard (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Clipboard *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  get_setting (const char *name, GObject::Value *value) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gboolean _peel_return = gdk_display_get_setting (_peel_this, name, _peel_value);
    return !!_peel_return;
  }

  const char *
  get_startup_notification_id () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    return gdk_display_get_startup_notification_id (_peel_this);
  }

  bool
  is_closed () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gboolean _peel_return = gdk_display_is_closed (_peel_this);
    return !!_peel_return;
  }

  bool
  is_composited () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gboolean _peel_return = gdk_display_is_composited (_peel_this);
    return !!_peel_return;
  }

  bool
  is_rgba () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gboolean _peel_return = gdk_display_is_rgba (_peel_this);
    return !!_peel_return;
  }

  GLib::List<Seat *>
  list_seats () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    GList *_peel_return = gdk_display_list_seats (_peel_this);
    return GLib::List<Seat *>::adopt_list (_peel_return);
  }

  bool
  map_keycode (unsigned keycode, peel::UniquePtr<KeymapKey[]> *keys, peel::UniquePtr<unsigned[]> *keyvals) noexcept
  {
    int _peel_n_entries;
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkKeymapKey *_peel_keys;
    guint *_peel_keyvals;
    gboolean _peel_return = gdk_display_map_keycode (_peel_this, keycode, keys ? &_peel_keys : nullptr, keyvals ? &_peel_keyvals : nullptr, &_peel_n_entries);
    if (keys)
      *keys = peel::UniquePtr<KeymapKey[]>::adopt_ref (reinterpret_cast<KeymapKey *> (_peel_keys), _peel_n_entries);
    if (keyvals)
      *keyvals = peel::UniquePtr<unsigned[]>::adopt_ref (reinterpret_cast<unsigned *> (_peel_keyvals), _peel_n_entries);
    return !!_peel_return;
  }

  bool
  map_keyval (unsigned keyval, peel::UniquePtr<KeymapKey[]> *keys) noexcept
  {
    int _peel_n_keys;
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkKeymapKey *_peel_keys;
    gboolean _peel_return = gdk_display_map_keyval (_peel_this, keyval, &_peel_keys, &_peel_n_keys);
    *keys = peel::UniquePtr<KeymapKey[]>::adopt_ref (reinterpret_cast<KeymapKey *> (_peel_keys), _peel_n_keys);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  notify_startup_complete (const char *startup_id) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gdk_display_notify_startup_complete (_peel_this, startup_id);
  }

  bool
  prepare_gl (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_display_prepare_gl (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  put_event (Event *event) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gdk_display_put_event (_peel_this, _peel_event);
  }

  bool
  supports_input_shapes () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gboolean _peel_return = gdk_display_supports_input_shapes (_peel_this);
    return !!_peel_return;
  }

  bool
  supports_shadow_width () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gboolean _peel_return = gdk_display_supports_shadow_width (_peel_this);
    return !!_peel_return;
  }

  void
  sync () noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    gdk_display_sync (_peel_this);
  }

  peel_arg_out (5) peel_arg_out (6) peel_arg_out (7) peel_arg_out (8)
  bool
  translate_key (unsigned keycode, ModifierType state, int group, unsigned *keyval, int *effective_group, int *level, ModifierType *consumed) noexcept
  {
    ::GdkDisplay *_peel_this = reinterpret_cast<::GdkDisplay *> (this);
    ::GdkModifierType _peel_state = static_cast<::GdkModifierType> (state);
    guint *_peel_keyval = reinterpret_cast<guint *> (keyval);
    ::GdkModifierType *_peel_consumed = reinterpret_cast<::GdkModifierType *> (consumed);
    gboolean _peel_return = gdk_display_translate_key (_peel_this, keycode, _peel_state, group, _peel_keyval, effective_group, level, _peel_consumed);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_closed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Display, void (bool)>::_peel_connect_by_name (this, "closed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_closed (HandlerObject *object, void (HandlerObject::*handler_method) (Display *, bool), bool after = false) noexcept
  {
    return Signal<Display, void (bool)>::_peel_connect_by_name (this, "closed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_opened (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Display, void ()>::_peel_connect_by_name (this, "opened", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_opened (HandlerObject *object, void (HandlerObject::*handler_method) (Display *), bool after = false) noexcept
  {
    return Signal<Display, void ()>::_peel_connect_by_name (this, "opened", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_seat_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Display, void (Seat *)>::_peel_connect_by_name (this, "seat-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_seat_added (HandlerObject *object, void (HandlerObject::*handler_method) (Display *, Seat *), bool after = false) noexcept
  {
    return Signal<Display, void (Seat *)>::_peel_connect_by_name (this, "seat-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_seat_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Display, void (Seat *)>::_peel_connect_by_name (this, "seat-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_seat_removed (HandlerObject *object, void (HandlerObject::*handler_method) (Display *, Seat *), bool after = false) noexcept
  {
    return Signal<Display, void (Seat *)>::_peel_connect_by_name (this, "seat-removed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_setting_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Display, void (const char *)>::_peel_connect_by_name (this, "setting-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_setting_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Display *, const char *), bool after = false) noexcept
  {
    return Signal<Display, void (const char *)>::_peel_connect_by_name (this, "setting-changed", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_composited ()
  {
    return peel::Property<bool> { "composited" };
  }

  static peel::Property<DmabufFormats>
  prop_dmabuf_formats ()
  {
    return peel::Property<DmabufFormats> { "dmabuf-formats" };
  }

  static peel::Property<bool>
  prop_input_shapes ()
  {
    return peel::Property<bool> { "input-shapes" };
  }

  static peel::Property<bool>
  prop_rgba ()
  {
    return peel::Property<bool> { "rgba" };
  }

  static peel::Property<bool>
  prop_shadow_width ()
  {
    return peel::Property<bool> { "shadow-width" };
  }
}; /* class Display */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gdk/AppLaunchContext.h>
#include <peel/Gdk/GLContext.h>
#include <peel/Gdk/KeymapKey.h>
#include <peel/Gdk/Seat.h>
