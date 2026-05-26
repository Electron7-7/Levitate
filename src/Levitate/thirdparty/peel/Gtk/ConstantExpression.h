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
struct Value;
} /* namespace GObject */

namespace Gtk
{
class ConstantExpression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ConstantExpression> ()
{
  return gtk_constant_expression_get_type ();
}


namespace Gtk
{
class ConstantExpression : public Expression
/* non-derivable */
{
private:
  using Expression::bind;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ConstantExpression () = delete;
  ConstantExpression (const ConstantExpression &) = delete;
  ConstantExpression (ConstantExpression &&) = delete;
  ConstantExpression &
  operator = (const ConstantExpression &) = delete;
  ConstantExpression &
  operator = (ConstantExpression &&) = delete;
  ~ConstantExpression () = delete;
public:

  template<typename T>
  static peel::RefPtr<ConstantExpression>
  create (typename GObject::Value::Traits<T>::UnownedType value) noexcept
  {
    GObject::Value _peel_value { GObject::Type::of<T> () };
    _peel_value.set<T> (value);
    ::GValue *_peel_value_ref = reinterpret_cast<::GValue *> (&_peel_value);
    ::GtkExpression *_peel_return = gtk_constant_expression_new_for_value (_peel_value_ref);
    peel_assume (_peel_return);
    return peel::RefPtr<ConstantExpression>::adopt_ref (reinterpret_cast<ConstantExpression *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<ConstantExpression>
  create_for_value (const GObject::Value *value) noexcept
  {
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GtkExpression *_peel_return = gtk_constant_expression_new_for_value (_peel_value);
    peel_assume (_peel_return);
    return peel::RefPtr<ConstantExpression>::adopt_ref (reinterpret_cast<ConstantExpression *> (_peel_return));
  }

  peel_returns_nonnull
  const GObject::Value *
  get_value () noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    const ::GValue *_peel_return = gtk_constant_expression_get_value (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const GObject::Value *> (_peel_return);
  }
}; /* class ConstantExpression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
