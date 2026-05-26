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
#include <peel/Gtk/Expression.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class ParamSpec;
} /* namespace GObject */

namespace Gtk
{
class Expression;
class PropertyExpression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PropertyExpression> ()
{
  return gtk_property_expression_get_type ();
}


namespace Gtk
{
class PropertyExpression : public Expression
/* non-derivable */
{
private:
  using Expression::bind;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PropertyExpression () = delete;
  PropertyExpression (const PropertyExpression &) = delete;
  PropertyExpression (PropertyExpression &&) = delete;
  PropertyExpression &
  operator = (const PropertyExpression &) = delete;
  PropertyExpression &
  operator = (PropertyExpression &&) = delete;
  ~PropertyExpression () = delete;
public:

  peel_nonnull_args (3)
  static peel::RefPtr<PropertyExpression>
  create (GObject::Type this_type, peel::RefPtr<Expression> expression, const char *property_name) noexcept
  {
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GtkExpression *_peel_return = gtk_property_expression_new (this_type, _peel_expression, property_name);
    peel_assume (_peel_return);
    return peel::RefPtr<PropertyExpression>::adopt_ref (reinterpret_cast<PropertyExpression *> (_peel_return));
  }

  peel_nonnull_args (2)
  static peel::RefPtr<PropertyExpression>
  create_for_pspec (peel::RefPtr<Expression> expression, GObject::ParamSpec *pspec) noexcept
  {
    ::GtkExpression *_peel_expression = reinterpret_cast<::GtkExpression *> (std::move (expression).release_ref ());
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    ::GtkExpression *_peel_return = gtk_property_expression_new_for_pspec (_peel_expression, _peel_pspec);
    peel_assume (_peel_return);
    return peel::RefPtr<PropertyExpression>::adopt_ref (reinterpret_cast<PropertyExpression *> (_peel_return));
  }

  Expression *
  get_expression () noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    ::GtkExpression *_peel_return = gtk_property_expression_get_expression (_peel_this);
    return reinterpret_cast<Expression *> (_peel_return);
  }

  peel_returns_nonnull
  GObject::ParamSpec *
  get_pspec () noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    ::GParamSpec *_peel_return = gtk_property_expression_get_pspec (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GObject::ParamSpec *> (_peel_return);
  }
}; /* class PropertyExpression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
