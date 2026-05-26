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
#include <peel/GObject/Object.h>
#include <peel/Gdk/Drag.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
struct Value;
} /* namespace GObject */

namespace Gdk
{
class /* record */ ContentFormats;
class Device;
class Display;
class Drag;
class Drop;
class Surface;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Drop> ()
{
  return gdk_drop_get_type ();
}


namespace Gdk
{
class Drop : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Drop () = delete;
  Drop (const Drop &) = delete;
  Drop (Drop &&) = delete;
  Drop &
  operator = (const Drop &) = delete;
  Drop &
  operator = (Drop &&) = delete;
  ~Drop () = delete;
public:

  void
  finish (Drag::Action action) noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkDragAction _peel_action = static_cast<::GdkDragAction> (action);
    gdk_drop_finish (_peel_this, _peel_action);
  }

  Drag::Action
  get_actions () noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkDragAction _peel_return = gdk_drop_get_actions (_peel_this);
    return static_cast<Drag::Action> (_peel_return);
  }

  peel_returns_nonnull
  Device *
  get_device () noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkDevice *_peel_return = gdk_drop_get_device (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Device *> (_peel_return);
  }

  peel_returns_nonnull
  Display *
  get_display () noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkDisplay *_peel_return = gdk_drop_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Display *> (_peel_return);
  }

  Drag *
  get_drag () noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkDrag *_peel_return = gdk_drop_get_drag (_peel_this);
    return reinterpret_cast<Drag *> (_peel_return);
  }

  peel_returns_nonnull
  ContentFormats *
  get_formats () noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkContentFormats *_peel_return = gdk_drop_get_formats (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<ContentFormats *> (_peel_return);
  }

  peel_returns_nonnull
  Surface *
  get_surface () noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkSurface *_peel_return = gdk_drop_get_surface (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  template<typename AsyncReadyCallback>
  void
  read_async (peel::StrvRef mime_types, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    const char **_peel_mime_types = const_cast<const char **> (mime_types.data ());
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gdk_drop_read_async (_peel_this, _peel_mime_types, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  peel::RefPtr<Gio::InputStream>
  read_finish (Gio::AsyncResult *result, const char **out_mime_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = gdk_drop_read_finish (_peel_this, _peel_result, out_mime_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Gio::InputStream>::adopt_ref (reinterpret_cast<Gio::InputStream *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  read_value_async (GObject::Type type, int io_priority, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        Gio::AsyncResult *_peel_res = reinterpret_cast<Gio::AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    gdk_drop_read_value_async (_peel_this, type, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  const GObject::Value *
  read_value_finish (Gio::AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    const ::GValue *_peel_return = gdk_drop_read_value_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<const GObject::Value *> (_peel_return);
  }

  void
  status (Drag::Action actions, Drag::Action preferred) noexcept
  {
    ::GdkDrop *_peel_this = reinterpret_cast<::GdkDrop *> (this);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    ::GdkDragAction _peel_preferred = static_cast<::GdkDragAction> (preferred);
    gdk_drop_status (_peel_this, _peel_actions, _peel_preferred);
  }

  static peel::Property<Drag::Action>
  prop_actions ()
  {
    return peel::Property<Drag::Action> { "actions" };
  }

  static peel::Property<Device>
  prop_device ()
  {
    return peel::Property<Device> { "device" };
  }

  static peel::Property<Display>
  prop_display ()
  {
    return peel::Property<Display> { "display" };
  }

  static peel::Property<Drag>
  prop_drag ()
  {
    return peel::Property<Drag> { "drag" };
  }

  static peel::Property<ContentFormats>
  prop_formats ()
  {
    return peel::Property<ContentFormats> { "formats" };
  }

  static peel::Property<Surface>
  prop_surface ()
  {
    return peel::Property<Surface> { "surface" };
  }
}; /* class Drop */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/InputStream.h>
