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
#include <peel/Gtk/Filter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class BoolFilter;
class Expression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::BoolFilter> ()
{
  return gtk_bool_filter_get_type ();
}


namespace Gtk
{
class BoolFilter : public Filter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BoolFilter () = delete;
  BoolFilter (const BoolFilter &) = delete;
  BoolFilter (BoolFilter &&) = delete;
  BoolFilter &
  operator = (const BoolFilter &) = delete;
  BoolFilter &
  operator = (BoolFilter &&) = delete;
  ~BoolFilter () = delete;
public:

  static peel::RefPtr<BoolFilter>
  create (peel::RefPtr<Expression> expression) noexcept
  {
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GtkBoolFilter *_peel_return = gtk_bool_filter_new (_peel_expression);
    peel_assume (_peel_return);
    return peel::RefPtr<BoolFilter>::adopt_ref (reinterpret_cast<BoolFilter *> (_peel_return));
  }

  Expression *
  get_expression () noexcept
  {
    ::GtkBoolFilter *_peel_this = reinterpret_cast<::GtkBoolFilter *> (this);
    ::GtkExpression *_peel_return = gtk_bool_filter_get_expression (_peel_this);
    return reinterpret_cast<Expression *> (_peel_return);
  }

  bool
  get_invert () noexcept
  {
    ::GtkBoolFilter *_peel_this = reinterpret_cast<::GtkBoolFilter *> (this);
    gboolean _peel_return = gtk_bool_filter_get_invert (_peel_this);
    return !!_peel_return;
  }

  void
  set_expression (Expression *expression) noexcept
  {
    ::GtkBoolFilter *_peel_this = reinterpret_cast<::GtkBoolFilter *> (this);
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (expression);
    gtk_bool_filter_set_expression (_peel_this, _peel_expression);
  }

  void
  set_invert (bool invert) noexcept
  {
    ::GtkBoolFilter *_peel_this = reinterpret_cast<::GtkBoolFilter *> (this);
    gboolean _peel_invert = static_cast<gboolean> (invert);
    gtk_bool_filter_set_invert (_peel_this, _peel_invert);
  }

  static peel::Property<Expression>
  prop_expression ()
  {
    return peel::Property<Expression> { "expression" };
  }

  static peel::Property<bool>
  prop_invert ()
  {
    return peel::Property<bool> { "invert" };
  }

  class Class : public Filter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkBoolFilterClass),
                 "BoolFilter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkBoolFilterClass),
                 "BoolFilter::Class align mismatch");
}; /* class BoolFilter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Expression.h>
