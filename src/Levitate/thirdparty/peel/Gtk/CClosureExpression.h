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
struct Value;
} /* namespace GObject */

namespace Gtk
{
class CClosureExpression;
class Expression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CClosureExpression> ()
{
  return gtk_cclosure_expression_get_type ();
}


namespace Gtk
{
class CClosureExpression : public Expression
/* non-derivable */
{
private:
  using Expression::bind;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CClosureExpression () = delete;
  CClosureExpression (const CClosureExpression &) = delete;
  CClosureExpression (CClosureExpression &&) = delete;
  CClosureExpression &
  operator = (const CClosureExpression &) = delete;
  CClosureExpression &
  operator = (CClosureExpression &&) = delete;
  ~CClosureExpression () = delete;
public:

  /* Unsupported for now: new: GCallback */
  static void
  create (UnsupportedForNowToken);
}; /* class CClosureExpression */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
