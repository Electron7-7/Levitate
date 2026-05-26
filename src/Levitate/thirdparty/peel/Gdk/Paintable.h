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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* interface */ Paintable;
class Snapshot;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Paintable> ()
{
  return gdk_paintable_get_type ();
}


namespace Gdk
{
class /* interface */ Paintable : public GObject::Object
/* requires GObject::Object */
{
private:
  Paintable () = delete;
  Paintable (const Paintable &) = delete;
  Paintable (Paintable &&) = delete;

  Paintable &
  operator = (const Paintable &) = delete;
  Paintable &
  operator = (Paintable &&) = delete;

protected:
  ~Paintable () = default;

public:
  enum class Flags : std::underlying_type<::GdkPaintableFlags>::type;

  static peel::RefPtr<Paintable>
  create_empty (int intrinsic_width, int intrinsic_height) noexcept
  {
    ::GdkPaintable *_peel_return = gdk_paintable_new_empty (intrinsic_width, intrinsic_height);
    peel_assume (_peel_return);
    return peel::RefPtr<Paintable>::adopt_ref (reinterpret_cast<Paintable *> (_peel_return));
  }

  peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (6, 7)
  void
  compute_concrete_size (double specified_width, double specified_height, double default_width, double default_height, double *concrete_width, double *concrete_height) noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    gdk_paintable_compute_concrete_size (_peel_this, specified_width, specified_height, default_width, default_height, concrete_width, concrete_height);
  }

  peel::RefPtr<Paintable>
  get_current_image () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkPaintable *_peel_return = gdk_paintable_get_current_image (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Paintable>::adopt_ref (reinterpret_cast<Paintable *> (_peel_return));
  }

  Paintable::Flags
  get_flags () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkPaintableFlags _peel_return = gdk_paintable_get_flags (_peel_this);
    return static_cast<Paintable::Flags> (_peel_return);
  }

  double
  get_intrinsic_aspect_ratio () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return gdk_paintable_get_intrinsic_aspect_ratio (_peel_this);
  }

  int
  get_intrinsic_height () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return gdk_paintable_get_intrinsic_height (_peel_this);
  }

  int
  get_intrinsic_width () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return gdk_paintable_get_intrinsic_width (_peel_this);
  }

  void
  invalidate_contents () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    gdk_paintable_invalidate_contents (_peel_this);
  }

  void
  invalidate_size () noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    gdk_paintable_invalidate_size (_peel_this);
  }

  peel_nonnull_args (2)
  void
  snapshot (Snapshot *snapshot, double width, double height) noexcept
  {
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    gdk_paintable_snapshot (_peel_this, _peel_snapshot, width, height);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_invalidate_contents (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paintable, void ()>::_peel_connect_by_name (this, "invalidate-contents", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_invalidate_contents (HandlerObject *object, void (HandlerObject::*handler_method) (Paintable *), bool after = false) noexcept
  {
    return Signal<Paintable, void ()>::_peel_connect_by_name (this, "invalidate-contents", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_invalidate_size (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Paintable, void ()>::_peel_connect_by_name (this, "invalidate-size", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_invalidate_size (HandlerObject *object, void (HandlerObject::*handler_method) (Paintable *), bool after = false) noexcept
  {
    return Signal<Paintable, void ()>::_peel_connect_by_name (this, "invalidate-size", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel::RefPtr<Paintable>
  parent_vfunc_get_current_image () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Paintable> ())->peek_parent ());
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkPaintable *_peel_return = _peel_iface->get_current_image (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Paintable>::adopt_ref (reinterpret_cast<Paintable *> (_peel_return));
  }

  peel::RefPtr<Paintable>
  default_vfunc_get_current_image () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Paintable> ()));
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkPaintable *_peel_return = _peel_iface->get_current_image (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Paintable>::adopt_ref (reinterpret_cast<Paintable *> (_peel_return));
  }

  template<typename DerivedClass>
  Paintable::Flags
  parent_vfunc_get_flags () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Paintable> ())->peek_parent ());
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkPaintableFlags _peel_return = _peel_iface->get_flags (_peel_this);
    return static_cast<Paintable::Flags> (_peel_return);
  }

  Paintable::Flags
  default_vfunc_get_flags () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Paintable> ()));
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkPaintableFlags _peel_return = _peel_iface->get_flags (_peel_this);
    return static_cast<Paintable::Flags> (_peel_return);
  }

  template<typename DerivedClass>
  double
  parent_vfunc_get_intrinsic_aspect_ratio () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Paintable> ())->peek_parent ());
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return _peel_iface->get_intrinsic_aspect_ratio (_peel_this);
  }

  double
  default_vfunc_get_intrinsic_aspect_ratio () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Paintable> ()));
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return _peel_iface->get_intrinsic_aspect_ratio (_peel_this);
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_intrinsic_height () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Paintable> ())->peek_parent ());
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return _peel_iface->get_intrinsic_height (_peel_this);
  }

  int
  default_vfunc_get_intrinsic_height () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Paintable> ()));
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return _peel_iface->get_intrinsic_height (_peel_this);
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_intrinsic_width () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Paintable> ())->peek_parent ());
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return _peel_iface->get_intrinsic_width (_peel_this);
  }

  int
  default_vfunc_get_intrinsic_width () noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Paintable> ()));
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    return _peel_iface->get_intrinsic_width (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_snapshot (Snapshot *snapshot, double width, double height) noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Paintable> ())->peek_parent ());
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    _peel_iface->snapshot (_peel_this, _peel_snapshot, width, height);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_snapshot (Snapshot *snapshot, double width, double height) noexcept
  {
    ::GdkPaintableInterface *_peel_iface = reinterpret_cast<::GdkPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Paintable> ()));
    ::GdkPaintable *_peel_this = reinterpret_cast<::GdkPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    _peel_iface->snapshot (_peel_this, _peel_snapshot, width, height);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GdkPaintableInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_current_image ()
    {
      ::GdkPaintableInterface *klass = reinterpret_cast<::GdkPaintableInterface *> (this);
      klass->get_current_image = +[] (::GdkPaintable *paintable) -> ::GdkPaintable *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        peel::RefPtr<Paintable> _peel_return = _peel_this->DerivedClass::vfunc_get_current_image ();
        return reinterpret_cast<::GdkPaintable *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_flags ()
    {
      ::GdkPaintableInterface *klass = reinterpret_cast<::GdkPaintableInterface *> (this);
      klass->get_flags = +[] (::GdkPaintable *paintable) -> ::GdkPaintableFlags
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        Paintable::Flags _peel_return = _peel_this->DerivedClass::vfunc_get_flags ();
        return static_cast<::GdkPaintableFlags> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_intrinsic_aspect_ratio ()
    {
      ::GdkPaintableInterface *klass = reinterpret_cast<::GdkPaintableInterface *> (this);
      klass->get_intrinsic_aspect_ratio = +[] (::GdkPaintable *paintable) -> double
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        return _peel_this->DerivedClass::vfunc_get_intrinsic_aspect_ratio ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_intrinsic_height ()
    {
      ::GdkPaintableInterface *klass = reinterpret_cast<::GdkPaintableInterface *> (this);
      klass->get_intrinsic_height = +[] (::GdkPaintable *paintable) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        return _peel_this->DerivedClass::vfunc_get_intrinsic_height ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_intrinsic_width ()
    {
      ::GdkPaintableInterface *klass = reinterpret_cast<::GdkPaintableInterface *> (this);
      klass->get_intrinsic_width = +[] (::GdkPaintable *paintable) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        return _peel_this->DerivedClass::vfunc_get_intrinsic_width ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_snapshot ()
    {
      ::GdkPaintableInterface *klass = reinterpret_cast<::GdkPaintableInterface *> (this);
      klass->snapshot = +[] (::GdkPaintable *paintable, ::GdkSnapshot *snapshot, double width, double height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        Snapshot *_peel_snapshot = reinterpret_cast<Snapshot *> (snapshot);
        _peel_this->DerivedClass::vfunc_snapshot (_peel_snapshot, width, height);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GdkPaintableInterface),
                 "Paintable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GdkPaintableInterface),
                 "Paintable::Iface align mismatch");
}; /* interface Paintable */
static_assert (sizeof (Paintable) == sizeof (GObject::Object),
               "Paintable size mismatch");
static_assert (alignof (Paintable) == alignof (GObject::Object),
               "Paintable align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
