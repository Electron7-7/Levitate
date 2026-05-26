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
struct TimeVal;
} /* namespace GLib */

namespace GdkPixbuf
{
class Pixbuf;
class PixbufAnimationIter;
} /* namespace GdkPixbuf */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufAnimationIter> ()
{
  return gdk_pixbuf_animation_iter_get_type ();
}


namespace GdkPixbuf
{
class PixbufAnimationIter : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PixbufAnimationIter () = delete;
  PixbufAnimationIter (const PixbufAnimationIter &) = delete;
  PixbufAnimationIter (PixbufAnimationIter &&) = delete;
  PixbufAnimationIter &
  operator = (const PixbufAnimationIter &) = delete;
  PixbufAnimationIter &
  operator = (PixbufAnimationIter &&) = delete;
protected:
  ~PixbufAnimationIter () = default;
public:

  peel_arg_in (2)
  bool
  advance (const GLib::TimeVal *current_time) noexcept
  {
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    const ::GTimeVal *_peel_current_time = reinterpret_cast<const ::GTimeVal *> (current_time);
    gboolean _peel_return = gdk_pixbuf_animation_iter_advance (_peel_this, _peel_current_time);
    return !!_peel_return;
  }

  int
  get_delay_time () noexcept
  {
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    return gdk_pixbuf_animation_iter_get_delay_time (_peel_this);
  }

  peel_returns_nonnull
  Pixbuf *
  get_pixbuf () noexcept
  {
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    ::GdkPixbuf *_peel_return = gdk_pixbuf_animation_iter_get_pixbuf (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pixbuf *> (_peel_return);
  }

  bool
  on_currently_loading_frame () noexcept
  {
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    gboolean _peel_return = gdk_pixbuf_animation_iter_on_currently_loading_frame (_peel_this);
    return !!_peel_return;
  }

#ifdef GDK_PIXBUF_ENABLE_BACKEND
protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<PixbufAnimationIter> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (2)
  bool
  parent_vfunc_advance (const GLib::TimeVal *current_time) noexcept
  {
    ::GdkPixbufAnimationIterClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationIterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    const ::GTimeVal *_peel_current_time = reinterpret_cast<const ::GTimeVal *> (current_time);
    gboolean _peel_return = _peel_class->advance (_peel_this, _peel_current_time);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_delay_time () noexcept
  {
    ::GdkPixbufAnimationIterClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationIterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    return _peel_class->get_delay_time (_peel_this);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  Pixbuf *
  parent_vfunc_get_pixbuf () noexcept
  {
    ::GdkPixbufAnimationIterClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationIterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    ::GdkPixbuf *_peel_return = _peel_class->get_pixbuf (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pixbuf *> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_on_currently_loading_frame () noexcept
  {
    ::GdkPixbufAnimationIterClass *_peel_class = reinterpret_cast<::GdkPixbufAnimationIterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GdkPixbufAnimationIter *_peel_this = reinterpret_cast<::GdkPixbufAnimationIter *> (this);
    gboolean _peel_return = _peel_class->on_currently_loading_frame (_peel_this);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GdkPixbufAnimationIterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_advance ()
    {
      ::GdkPixbufAnimationIterClass *klass = reinterpret_cast<::GdkPixbufAnimationIterClass *> (this);
      klass->advance = +[] (::GdkPixbufAnimationIter *iter, const ::GTimeVal *current_time) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (iter);
        const GLib::TimeVal *_peel_current_time = reinterpret_cast<const GLib::TimeVal *> (current_time);
        bool _peel_return = _peel_this->DerivedClass::vfunc_advance (_peel_current_time);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_delay_time ()
    {
      ::GdkPixbufAnimationIterClass *klass = reinterpret_cast<::GdkPixbufAnimationIterClass *> (this);
      klass->get_delay_time = +[] (::GdkPixbufAnimationIter *iter) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (iter);
        return _peel_this->DerivedClass::vfunc_get_delay_time ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_pixbuf ()
    {
      ::GdkPixbufAnimationIterClass *klass = reinterpret_cast<::GdkPixbufAnimationIterClass *> (this);
      klass->get_pixbuf = +[] (::GdkPixbufAnimationIter *iter) -> ::GdkPixbuf *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (iter);
        Pixbuf *_peel_return = _peel_this->DerivedClass::vfunc_get_pixbuf ();
        return reinterpret_cast<::GdkPixbuf *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_on_currently_loading_frame ()
    {
      ::GdkPixbufAnimationIterClass *klass = reinterpret_cast<::GdkPixbufAnimationIterClass *> (this);
      klass->on_currently_loading_frame = +[] (::GdkPixbufAnimationIter *iter) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (iter);
        bool _peel_return = _peel_this->DerivedClass::vfunc_on_currently_loading_frame ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GdkPixbufAnimationIterClass),
                 "PixbufAnimationIter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GdkPixbufAnimationIterClass),
                 "PixbufAnimationIter::Class align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */
}; /* class PixbufAnimationIter */

#ifdef GDK_PIXBUF_ENABLE_BACKEND
static_assert (sizeof (PixbufAnimationIter) == sizeof (::GdkPixbufAnimationIter),
               "PixbufAnimationIter size mismatch");
static_assert (alignof (PixbufAnimationIter) == alignof (::GdkPixbufAnimationIter),
               "PixbufAnimationIter align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
