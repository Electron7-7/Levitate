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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
class /* record */ Transform;
} /* namespace Gsk */

namespace Gtk
{
class Fixed;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Fixed> ()
{
  return gtk_fixed_get_type ();
}


namespace Gtk
{
class Fixed : public Widget
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Fixed () = delete;
  Fixed (const Fixed &) = delete;
  Fixed (Fixed &&) = delete;
  Fixed &
  operator = (const Fixed &) = delete;
  Fixed &
  operator = (Fixed &&) = delete;
protected:
  ~Fixed () = default;
public:

  static peel::FloatPtr<Fixed>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_fixed_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Fixed> (reinterpret_cast<Fixed *> (_peel_return));
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  get_child_position (Widget *widget, double *x, double *y) noexcept
  {
    ::GtkFixed *_peel_this = reinterpret_cast<::GtkFixed *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_fixed_get_child_position (_peel_this, _peel_widget, x, y);
  }

  peel_nonnull_args (2)
  Gsk::Transform *
  get_child_transform (Widget *widget) noexcept
  {
    ::GtkFixed *_peel_this = reinterpret_cast<::GtkFixed *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GskTransform *_peel_return = gtk_fixed_get_child_transform (_peel_this, _peel_widget);
    return reinterpret_cast<Gsk::Transform *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  move (Widget *widget, double x, double y) noexcept
  {
    ::GtkFixed *_peel_this = reinterpret_cast<::GtkFixed *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_fixed_move (_peel_this, _peel_widget, x, y);
  }

  void
  put (peel::FloatPtr<Widget> widget, double x, double y) noexcept
  {
    ::GtkFixed *_peel_this = reinterpret_cast<::GtkFixed *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (std::move (widget).release_floating_ptr ());
    gtk_fixed_put (_peel_this, _peel_widget, x, y);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *widget) noexcept
  {
    ::GtkFixed *_peel_this = reinterpret_cast<::GtkFixed *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_fixed_remove (_peel_this, _peel_widget);
  }

  peel_arg_in (3) peel_nonnull_args (2)
  void
  set_child_transform (Widget *widget, Gsk::Transform *transform) noexcept
  {
    ::GtkFixed *_peel_this = reinterpret_cast<::GtkFixed *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GskTransform *_peel_transform = reinterpret_cast<::GskTransform *> (transform);
    gtk_fixed_set_child_transform (_peel_this, _peel_widget, _peel_transform);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Fixed> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkFixedClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFixedClass),
                 "Fixed::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFixedClass),
                 "Fixed::Class align mismatch");
}; /* class Fixed */

static_assert (sizeof (Fixed) == sizeof (::GtkFixed),
               "Fixed size mismatch");
static_assert (alignof (Fixed) == alignof (::GtkFixed),
               "Fixed align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
