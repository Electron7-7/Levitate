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
#include <gtk/gtk.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Adjustment;
struct Border;
class /* interface */ Scrollable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Scrollable> ()
{
  return gtk_scrollable_get_type ();
}


namespace Gtk
{
class /* interface */ Scrollable : public GObject::Object
/* requires GObject::Object */
{
private:
  Scrollable () = delete;
  Scrollable (const Scrollable &) = delete;
  Scrollable (Scrollable &&) = delete;

  Scrollable &
  operator = (const Scrollable &) = delete;
  Scrollable &
  operator = (Scrollable &&) = delete;

protected:
  ~Scrollable () = default;

public:
  enum class Policy : std::underlying_type<::GtkScrollablePolicy>::type;

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_border (Border *border) noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkBorder *_peel_border = reinterpret_cast<::GtkBorder *> (border);
    gboolean _peel_return = gtk_scrollable_get_border (_peel_this, _peel_border);
    return !!_peel_return;
  }

  Adjustment *
  get_hadjustment () noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkAdjustment *_peel_return = gtk_scrollable_get_hadjustment (_peel_this);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  Scrollable::Policy
  get_hscroll_policy () noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkScrollablePolicy _peel_return = gtk_scrollable_get_hscroll_policy (_peel_this);
    return static_cast<Scrollable::Policy> (_peel_return);
  }

  Adjustment *
  get_vadjustment () noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkAdjustment *_peel_return = gtk_scrollable_get_vadjustment (_peel_this);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  Scrollable::Policy
  get_vscroll_policy () noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkScrollablePolicy _peel_return = gtk_scrollable_get_vscroll_policy (_peel_this);
    return static_cast<Scrollable::Policy> (_peel_return);
  }

  void
  set_hadjustment (Adjustment *hadjustment) noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkAdjustment *_peel_hadjustment = reinterpret_cast<::GtkAdjustment *> (hadjustment);
    gtk_scrollable_set_hadjustment (_peel_this, _peel_hadjustment);
  }

  void
  set_hscroll_policy (Scrollable::Policy policy) noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkScrollablePolicy _peel_policy = static_cast<::GtkScrollablePolicy> (policy);
    gtk_scrollable_set_hscroll_policy (_peel_this, _peel_policy);
  }

  void
  set_vadjustment (Adjustment *vadjustment) noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkAdjustment *_peel_vadjustment = reinterpret_cast<::GtkAdjustment *> (vadjustment);
    gtk_scrollable_set_vadjustment (_peel_this, _peel_vadjustment);
  }

  void
  set_vscroll_policy (Scrollable::Policy policy) noexcept
  {
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkScrollablePolicy _peel_policy = static_cast<::GtkScrollablePolicy> (policy);
    gtk_scrollable_set_vscroll_policy (_peel_this, _peel_policy);
  }

  static peel::Property<Adjustment>
  prop_hadjustment ()
  {
    return peel::Property<Adjustment> { "hadjustment" };
  }

  static peel::Property<Scrollable::Policy>
  prop_hscroll_policy ()
  {
    return peel::Property<Scrollable::Policy> { "hscroll-policy" };
  }

  static peel::Property<Adjustment>
  prop_vadjustment ()
  {
    return peel::Property<Adjustment> { "vadjustment" };
  }

  static peel::Property<Scrollable::Policy>
  prop_vscroll_policy ()
  {
    return peel::Property<Scrollable::Policy> { "vscroll-policy" };
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_nonnull_args (2)
  bool
  parent_vfunc_get_border (Border *border) noexcept
  {
    ::GtkScrollableInterface *_peel_iface = reinterpret_cast<::GtkScrollableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Scrollable> ())->peek_parent ());
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkBorder *_peel_border = reinterpret_cast<::GtkBorder *> (border);
    gboolean _peel_return = _peel_iface->get_border (_peel_this, _peel_border);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  default_vfunc_get_border (Border *border) noexcept
  {
    ::GtkScrollableInterface *_peel_iface = reinterpret_cast<::GtkScrollableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Scrollable> ()));
    ::GtkScrollable *_peel_this = reinterpret_cast<::GtkScrollable *> (this);
    ::GtkBorder *_peel_border = reinterpret_cast<::GtkBorder *> (border);
    gboolean _peel_return = _peel_iface->get_border (_peel_this, _peel_border);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkScrollableInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_border ()
    {
      ::GtkScrollableInterface *klass = reinterpret_cast<::GtkScrollableInterface *> (this);
      klass->get_border = +[] (::GtkScrollable *scrollable, ::GtkBorder *border) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (scrollable);
        Border *_peel_border = reinterpret_cast<Border *> (border);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_border (_peel_border);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkScrollableInterface),
                 "Scrollable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkScrollableInterface),
                 "Scrollable::Iface align mismatch");
}; /* interface Scrollable */
static_assert (sizeof (Scrollable) == sizeof (GObject::Object),
               "Scrollable size mismatch");
static_assert (alignof (Scrollable) == alignof (GObject::Object),
               "Scrollable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
