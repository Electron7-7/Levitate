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
struct Closure;
} /* namespace GObject */

namespace Gtk
{
class ClosureExpression;
class Expression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ClosureExpression> ()
{
  return gtk_closure_expression_get_type ();
}


namespace Gtk
{
class ClosureExpression : public Expression
/* non-derivable */
{
private:
  using Expression::bind;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ClosureExpression () = delete;
  ClosureExpression (const ClosureExpression &) = delete;
  ClosureExpression (ClosureExpression &&) = delete;
  ClosureExpression &
  operator = (const ClosureExpression &) = delete;
  ClosureExpression &
  operator = (ClosureExpression &&) = delete;
  ~ClosureExpression () = delete;
public:

  peel_arg_in (2) peel_nonnull_args (2)
  static peel::RefPtr<ClosureExpression>
  create (GObject::Type value_type, GObject::Closure *closure, peel::UniquePtr<peel::RefPtr<Expression>[]> params) noexcept
  {
    guint _peel_n_params;
    ::GClosure *_peel_closure = reinterpret_cast<::GClosure *> (closure);
    ::GtkExpression **_peel_params = (_peel_n_params = params.size (), reinterpret_cast<::GtkExpression **> (std::move (params).release_ref ()));
    ::GtkExpression *_peel_return = gtk_closure_expression_new (value_type, _peel_closure, _peel_n_params, _peel_params);
    peel_assume (_peel_return);
    return peel::RefPtr<ClosureExpression>::adopt_ref (reinterpret_cast<ClosureExpression *> (_peel_return));
  }
}; /* class ClosureExpression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
