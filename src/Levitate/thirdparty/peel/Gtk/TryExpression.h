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
namespace Gtk
{
class Expression;
class TryExpression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TryExpression> ()
{
  return gtk_try_expression_get_type ();
}


namespace Gtk
{
class TryExpression : public Expression
/* non-derivable */
{
private:
  using Expression::bind;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TryExpression () = delete;
  TryExpression (const TryExpression &) = delete;
  TryExpression (TryExpression &&) = delete;
  TryExpression &
  operator = (const TryExpression &) = delete;
  TryExpression &
  operator = (TryExpression &&) = delete;
  ~TryExpression () = delete;
public:

  static peel::RefPtr<TryExpression>
  create (peel::UniquePtr<peel::RefPtr<Expression>[]> expressions) noexcept
  {
    guint _peel_n_expressions;
    ::GtkExpression **_peel_expressions = (_peel_n_expressions = expressions.size (), reinterpret_cast<::GtkExpression **> (std::move (expressions).release_ref ()));
    ::GtkExpression *_peel_return = gtk_try_expression_new (_peel_n_expressions, _peel_expressions);
    peel_assume (_peel_return);
    return peel::RefPtr<TryExpression>::adopt_ref (reinterpret_cast<TryExpression *> (_peel_return));
  }
}; /* class TryExpression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
