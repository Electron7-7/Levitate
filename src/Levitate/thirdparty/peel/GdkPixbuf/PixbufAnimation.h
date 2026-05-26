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
struct Error;
struct TimeVal;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace GdkPixbuf
{
class Pixbuf;
class PixbufAnimation;
class PixbufAnimationIter;
} /* namespace GdkPixbuf */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufAnimation> ()
{
  return gdk_pixbuf_animation_get_type ();
}


namespace GdkPixbuf
{
class PixbufAnimation : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PixbufAnimation () = delete;
  PixbufAnimation (const PixbufAnimation &) = delete;
  PixbufAnimation (PixbufAnimation &&) = delete;
  PixbufAnimation &
  operator = (const PixbufAnimation &) = delete;
  PixbufAnimation &
  operator = (PixbufAnimation &&) = delete;
protected:
  ~PixbufAnimation () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufAnimation>
  create_from_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_animation_new_from_file (filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PixbufAnimation>::adopt_ref (reinterpret_cast<PixbufAnimation *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufAnimation>
  create_from_resource (const char *resource_path, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_animation_new_from_resource (resource_path, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PixbufAnimation>::adopt_ref (reinterpret_cast<PixbufAnimation *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufAnimation>
  create_from_stream (Gio::InputStream *stream, Gio::Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_animation_new_from_stream (_peel_stream, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PixbufAnimation>::adopt_ref (reinterpret_cast<PixbufAnimation *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufAnimation>
  create_from_stream_finish (Gio::AsyncResult *async_result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GAsyncResult *_peel_async_result = reinterpret_cast<::GAsyncResult *> (async_result);
    ::GError *_peel_error = nullptr;
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_animation_new_from_stream_finish (_peel_async_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<PixbufAnimation>::adopt_ref (reinterpret_cast<PixbufAnimation *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (1)
  static void
  new_from_stream_async (Gio::InputStream *stream, Gio::Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
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
    gdk_pixbuf_animation_new_from_stream_async (_peel_stream, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  int
  get_height () noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    return gdk_pixbuf_animation_get_height (_peel_this);
  }

  peel_arg_in (2)
  peel::RefPtr<PixbufAnimationIter>
  get_iter (const GLib::TimeVal *start_time) noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    const ::GTimeVal *_peel_start_time = reinterpret_cast<const ::GTimeVal *> (start_time);
    ::GdkPixbufAnimationIter *_peel_return = gdk_pixbuf_animation_get_iter (_peel_this, _peel_start_time);
    peel_assume (_peel_return);
    return peel::RefPtr<PixbufAnimationIter>::adopt_ref (reinterpret_cast<PixbufAnimationIter *> (_peel_return));
  }

  peel_returns_nonnull
  Pixbuf *
  get_static_image () noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_animation_get_static_image (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pixbuf *> (_peel_return);
  }

  int
  get_width () noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    return gdk_pixbuf_animation_get_width (_peel_this);
  }

  bool
  is_static_image () noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    gboolean _peel_return = gdk_pixbuf_animation_is_static_image (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  PixbufAnimation *
  ref () noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_animation_ref (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<PixbufAnimation *> (_peel_return);
  }

  void
  unref () noexcept
  {
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    gdk_pixbuf_animation_unref (_peel_this);
  }

#ifdef GDK_PIXBUF_ENABLE_BACKEND
protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<PixbufAnimation> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (2)
  peel::RefPtr<PixbufAnimationIter>
  parent_vfunc_get_iter (const GLib::TimeVal *start_time) noexcept
  {
    ::GdkPixbufAnimationClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    const ::GTimeVal *_peel_start_time = reinterpret_cast<const ::GTimeVal *> (start_time);
    ::GdkPixbufAnimationIter *_peel_return = _peel_class->get_iter (_peel_this, _peel_start_time);
    peel_assume (_peel_return);
    return peel::RefPtr<PixbufAnimationIter>::adopt_ref (reinterpret_cast<PixbufAnimationIter *> (_peel_return));
  }

  template<typename DerivedClass>
  void
  parent_vfunc_get_size (int width, int height) noexcept
  {
    ::GdkPixbufAnimationClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    _peel_class->get_size (_peel_this, width, height);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  Pixbuf *
  parent_vfunc_get_static_image () noexcept
  {
    ::GdkPixbufAnimationClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    ::GdkPixbuf *_peel_return = _peel_class->get_static_image (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pixbuf *> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_static_image () noexcept
  {
    ::GdkPixbufAnimationClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimation *_peel_this = reinterpret_cast<::GdkPixbufAnimation *> (this);
    gboolean _peel_return = _peel_class->is_static_image (_peel_this);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GdkPixbufAnimationClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_iter ()
    {
      ::GdkPixbufAnimationClass *klass = reinterpret_cast<::GdkPixbufAnimationClass *> (this);
      klass->get_iter = +[] (::GdkPixbufAnimation *animation, const ::GTimeVal *start_time) -> ::GdkPixbufAnimationIter *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (animation);
        const GLib::TimeVal *_peel_start_time = reinterpret_cast<const GLib::TimeVal *> (start_time);
        peel::RefPtr<PixbufAnimationIter> _peel_return = _peel_this->DerivedClass::vfunc_get_iter (_peel_start_time);
        return reinterpret_cast<::GdkPixbufAnimationIter *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_size ()
    {
      ::GdkPixbufAnimationClass *klass = reinterpret_cast<::GdkPixbufAnimationClass *> (this);
      klass->get_size = +[] (::GdkPixbufAnimation *animation, int *width, int *height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (animation);
        _peel_this->DerivedClass::vfunc_get_size (width, height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_static_image ()
    {
      ::GdkPixbufAnimationClass *klass = reinterpret_cast<::GdkPixbufAnimationClass *> (this);
      klass->get_static_image = +[] (::GdkPixbufAnimation *animation) -> ::GdkPixbuf *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (animation);
        Pixbuf *_peel_return = _peel_this->DerivedClass::vfunc_get_static_image ();
        return reinterpret_cast<::GdkPixbuf *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_static_image ()
    {
      ::GdkPixbufAnimationClass *klass = reinterpret_cast<::GdkPixbufAnimationClass *> (this);
      klass->is_static_image = +[] (::GdkPixbufAnimation *animation) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (animation);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_static_image ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GdkPixbufAnimationClass),
                 "PixbufAnimation::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GdkPixbufAnimationClass),
                 "PixbufAnimation::Class align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */
}; /* class PixbufAnimation */

#ifdef GDK_PIXBUF_ENABLE_BACKEND
static_assert (sizeof (PixbufAnimation) == sizeof (::GdkPixbufAnimation),
               "PixbufAnimation size mismatch");
static_assert (alignof (PixbufAnimation) == alignof (::GdkPixbufAnimation),
               "PixbufAnimation align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GdkPixbuf/PixbufAnimationIter.h>
