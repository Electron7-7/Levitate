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
#include <peel/Gio/AsyncResult.h>

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
class ContentSerializer;
} /* namespace Gdk */

namespace Gio
{
class Cancellable;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ContentSerializer> ()
{
  return gdk_content_serializer_get_type ();
}


namespace Gdk
{
class ContentSerializer : public Gio::AsyncResult
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::AsyncResult */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ContentSerializer () = delete;
  ContentSerializer (const ContentSerializer &) = delete;
  ContentSerializer (ContentSerializer &&) = delete;
  ContentSerializer &
  operator = (const ContentSerializer &) = delete;
  ContentSerializer &
  operator = (ContentSerializer &&) = delete;
  ~ContentSerializer () = delete;
public:

  Gio::Cancellable *
  get_cancellable () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    ::GCancellable *_peel_return = gdk_content_serializer_get_cancellable (_peel_this);
    return reinterpret_cast<Gio::Cancellable *> (_peel_return);
  }

  GObject::Type
  get_gtype () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    return gdk_content_serializer_get_gtype (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_mime_type () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    return gdk_content_serializer_get_mime_type (_peel_this);
  }

  peel_returns_nonnull
  Gio::OutputStream *
  get_output_stream () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    ::GOutputStream *_peel_return = gdk_content_serializer_get_output_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gio::OutputStream *> (_peel_return);
  }

  int
  get_priority () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    return gdk_content_serializer_get_priority (_peel_this);
  }

  void *
  get_task_data () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    return gdk_content_serializer_get_task_data (_peel_this);
  }

  void *
  get_user_data () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    return gdk_content_serializer_get_user_data (_peel_this);
  }

  peel_returns_nonnull
  const GObject::Value *
  get_value () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    const ::GValue *_peel_return = gdk_content_serializer_get_value (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const GObject::Value *> (_peel_return);
  }

  void
  return_error (peel::UniquePtr<GLib::Error> error) noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    gdk_content_serializer_return_error (_peel_this, _peel_error);
  }

  void
  return_success () noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    gdk_content_serializer_return_success (_peel_this);
  }

  void
  set_task_data (void *data, ::GDestroyNotify notify) noexcept
  {
    ::GdkContentSerializer *_peel_this = reinterpret_cast<::GdkContentSerializer *> (this);
    gdk_content_serializer_set_task_data (_peel_this, data, notify);
  }
}; /* class ContentSerializer */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
