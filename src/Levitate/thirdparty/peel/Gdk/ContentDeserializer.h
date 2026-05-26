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
class ContentDeserializer;
} /* namespace Gdk */

namespace Gio
{
class Cancellable;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ContentDeserializer> ()
{
  return gdk_content_deserializer_get_type ();
}


namespace Gdk
{
class ContentDeserializer : public Gio::AsyncResult
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

  ContentDeserializer () = delete;
  ContentDeserializer (const ContentDeserializer &) = delete;
  ContentDeserializer (ContentDeserializer &&) = delete;
  ContentDeserializer &
  operator = (const ContentDeserializer &) = delete;
  ContentDeserializer &
  operator = (ContentDeserializer &&) = delete;
  ~ContentDeserializer () = delete;
public:

  Gio::Cancellable *
  get_cancellable () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    ::GCancellable *_peel_return = gdk_content_deserializer_get_cancellable (_peel_this);
    return reinterpret_cast<Gio::Cancellable *> (_peel_return);
  }

  GObject::Type
  get_gtype () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    return gdk_content_deserializer_get_gtype (_peel_this);
  }

  peel_returns_nonnull
  Gio::InputStream *
  get_input_stream () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    ::GInputStream *_peel_return = gdk_content_deserializer_get_input_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gio::InputStream *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_mime_type () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    return gdk_content_deserializer_get_mime_type (_peel_this);
  }

  int
  get_priority () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    return gdk_content_deserializer_get_priority (_peel_this);
  }

  void *
  get_task_data () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    return gdk_content_deserializer_get_task_data (_peel_this);
  }

  void *
  get_user_data () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    return gdk_content_deserializer_get_user_data (_peel_this);
  }

  peel_returns_nonnull
  GObject::Value *
  get_value () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    ::GValue *_peel_return = gdk_content_deserializer_get_value (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::Value *> (_peel_return);
  }

  void
  return_error (peel::UniquePtr<GLib::Error> error) noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    gdk_content_deserializer_return_error (_peel_this, _peel_error);
  }

  void
  return_success () noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    gdk_content_deserializer_return_success (_peel_this);
  }

  void
  set_task_data (void *data, ::GDestroyNotify notify) noexcept
  {
    ::GdkContentDeserializer *_peel_this = reinterpret_cast<::GdkContentDeserializer *> (this);
    gdk_content_deserializer_set_task_data (_peel_this, data, notify);
  }
}; /* class ContentDeserializer */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
