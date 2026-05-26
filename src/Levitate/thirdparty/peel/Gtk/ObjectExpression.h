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
class Object;
} /* namespace GObject */

namespace Gtk
{
class ObjectExpression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ObjectExpression> ()
{
  return gtk_object_expression_get_type ();
}


namespace Gtk
{
class ObjectExpression : public Expression
/* non-derivable */
{
private:
  using Expression::bind;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ObjectExpression () = delete;
  ObjectExpression (const ObjectExpression &) = delete;
  ObjectExpression (ObjectExpression &&) = delete;
  ObjectExpression &
  operator = (const ObjectExpression &) = delete;
  ObjectExpression &
  operator = (ObjectExpression &&) = delete;
  ~ObjectExpression () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<ObjectExpression>
  create (GObject::Object *object) noexcept
  {
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GtkExpression *_peel_return = gtk_object_expression_new (_peel_object);
    peel_assume (_peel_return);
    return peel::RefPtr<ObjectExpression>::adopt_ref (reinterpret_cast<ObjectExpression *> (_peel_return));
  }

  GObject::Object *
  get_object () noexcept
  {
    ::GtkExpression *_peel_this = reinterpret_cast<::GtkExpression *> (this);
    ::GObject *_peel_return = gtk_object_expression_get_object (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }
}; /* class ObjectExpression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
