#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace GdkPixbuf
{
class Pixbuf;
class PixbufAnimation;
struct PixbufFormat;
class PixbufLoader;
} /* namespace GdkPixbuf */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufLoader> ()
{
  return gdk_pixbuf_loader_get_type ();
}


namespace GdkPixbuf
{
class PixbufLoader : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GdkPixbufLoader) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PixbufLoader () = delete;
  PixbufLoader (const PixbufLoader &) = delete;
  PixbufLoader (PixbufLoader &&) = delete;
  PixbufLoader &
  operator = (const PixbufLoader &) = delete;
  PixbufLoader &
  operator = (PixbufLoader &&) = delete;
protected:
  ~PixbufLoader () = default;
public:

  static peel::RefPtr<PixbufLoader>
  create () noexcept
  {
    ::GdkPixbufLoader *_peel_return = gdk_pixbuf_loader_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<PixbufLoader>::adopt_ref (reinterpret_cast<PixbufLoader *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufLoader>
  create_with_mime_type (const char *mime_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbufLoader *_peel_return = gdk_pixbuf_loader_new_with_mime_type (mime_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PixbufLoader>::adopt_ref (reinterpret_cast<PixbufLoader *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufLoader>
  create_with_type (const char *image_type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbufLoader *_peel_return = gdk_pixbuf_loader_new_with_type (image_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PixbufLoader>::adopt_ref (reinterpret_cast<PixbufLoader *> (_peel_return));
  }

  bool
  close (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_loader_close (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  PixbufAnimation *
  get_animation () noexcept
  {
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_loader_get_animation (_peel_this);
    return reinterpret_cast<PixbufAnimation *> (_peel_return);
  }

  PixbufFormat *
  get_format () noexcept
  {
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    ::GdkPixbufFormat *_peel_return = gdk_pixbuf_loader_get_format (_peel_this);
    return reinterpret_cast<PixbufFormat *> (_peel_return);
  }

  Pixbuf *
  get_pixbuf () noexcept
  {
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_loader_get_pixbuf (_peel_this);
    return reinterpret_cast<Pixbuf *> (_peel_return);
  }

  void
  set_size (int width, int height) noexcept
  {
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    gdk_pixbuf_loader_set_size (_peel_this, width, height);
  }

  bool
  write (peel::ArrayRef<const uint8_t> buf, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    const guchar *_peel_buf = (_peel_count = buf.size (), reinterpret_cast<const guchar *> (buf.data ()));
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_loader_write (_peel_this, _peel_buf, _peel_count, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  write_bytes (GLib::Bytes *buffer, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    ::GBytes *_peel_buffer = reinterpret_cast<::GBytes *> (buffer);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_pixbuf_loader_write_bytes (_peel_this, _peel_buffer, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_area_prepared (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PixbufLoader, void ()>::_peel_connect_by_name (this, "area-prepared", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_area_prepared (HandlerObject *object, void (HandlerObject::*handler_method) (PixbufLoader *), bool after = false) noexcept
  {
    return Signal<PixbufLoader, void ()>::_peel_connect_by_name (this, "area-prepared", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_area_updated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PixbufLoader, void (int, int, int, int)>::_peel_connect_by_name (this, "area-updated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_area_updated (HandlerObject *object, void (HandlerObject::*handler_method) (PixbufLoader *, int, int, int, int), bool after = false) noexcept
  {
    return Signal<PixbufLoader, void (int, int, int, int)>::_peel_connect_by_name (this, "area-updated", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_closed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PixbufLoader, void ()>::_peel_connect_by_name (this, "closed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_closed (HandlerObject *object, void (HandlerObject::*handler_method) (PixbufLoader *), bool after = false) noexcept
  {
    return Signal<PixbufLoader, void ()>::_peel_connect_by_name (this, "closed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_size_prepared (Handler &&handler, bool after = false) noexcept
  {
    return Signal<PixbufLoader, void (int, int)>::_peel_connect_by_name (this, "size-prepared", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_size_prepared (HandlerObject *object, void (HandlerObject::*handler_method) (PixbufLoader *, int, int), bool after = false) noexcept
  {
    return Signal<PixbufLoader, void (int, int)>::_peel_connect_by_name (this, "size-prepared", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<PixbufLoader> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_area_prepared () noexcept
  {
    ::GdkPixbufLoaderClass *_peel_class = reinterpret_cast<::GdkPixbufLoaderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    _peel_class->area_prepared (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_area_updated (int x, int y, int width, int height) noexcept
  {
    ::GdkPixbufLoaderClass *_peel_class = reinterpret_cast<::GdkPixbufLoaderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    _peel_class->area_updated (_peel_this, x, y, width, height);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_closed () noexcept
  {
    ::GdkPixbufLoaderClass *_peel_class = reinterpret_cast<::GdkPixbufLoaderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    _peel_class->closed (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_size_prepared (int width, int height) noexcept
  {
    ::GdkPixbufLoaderClass *_peel_class = reinterpret_cast<::GdkPixbufLoaderClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufLoader *_peel_this = reinterpret_cast<::GdkPixbufLoader *> (this);
    _peel_class->size_prepared (_peel_this, width, height);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GdkPixbufLoaderClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_area_prepared ()
    {
      ::GdkPixbufLoaderClass *klass = reinterpret_cast<::GdkPixbufLoaderClass *> (this);
      klass->area_prepared = +[] (::GdkPixbufLoader *loader) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (loader);
        _peel_this->DerivedClass::vfunc_area_prepared ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_area_updated ()
    {
      ::GdkPixbufLoaderClass *klass = reinterpret_cast<::GdkPixbufLoaderClass *> (this);
      klass->area_updated = +[] (::GdkPixbufLoader *loader, int x, int y, int width, int height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (loader);
        _peel_this->DerivedClass::vfunc_area_updated (x, y, width, height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_closed ()
    {
      ::GdkPixbufLoaderClass *klass = reinterpret_cast<::GdkPixbufLoaderClass *> (this);
      klass->closed = +[] (::GdkPixbufLoader *loader) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (loader);
        _peel_this->DerivedClass::vfunc_closed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_size_prepared ()
    {
      ::GdkPixbufLoaderClass *klass = reinterpret_cast<::GdkPixbufLoaderClass *> (this);
      klass->size_prepared = +[] (::GdkPixbufLoader *loader, int width, int height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (loader);
        _peel_this->DerivedClass::vfunc_size_prepared (width, height);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GdkPixbufLoaderClass),
                 "PixbufLoader::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GdkPixbufLoaderClass),
                 "PixbufLoader::Class align mismatch");
}; /* class PixbufLoader */

static_assert (sizeof (PixbufLoader) == sizeof (::GdkPixbufLoader),
               "PixbufLoader size mismatch");
static_assert (alignof (PixbufLoader) == alignof (::GdkPixbufLoader),
               "PixbufLoader align mismatch");

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
