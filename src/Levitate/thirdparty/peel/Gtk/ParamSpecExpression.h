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
#include <peel/GObject/ParamSpec.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ParamSpecExpression;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ParamSpecExpression> ()
{
  return gtk_param_expression_get_type ();
}


namespace Gtk
{
class ParamSpecExpression : public GObject::ParamSpec
{
private:
  using GObject::ParamSpec::internal;
  using GObject::ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecExpression () = delete;
  ParamSpecExpression (const ParamSpecExpression &) = delete;
  ParamSpecExpression (ParamSpecExpression &&) = delete;
  ParamSpecExpression &
  operator = (const ParamSpecExpression &) = delete;
  ParamSpecExpression &
  operator = (ParamSpecExpression &&) = delete;
protected:
  ~ParamSpecExpression () = default;
public:
}; /* class ParamSpecExpression */

static_assert (sizeof (ParamSpecExpression) == sizeof (::GtkParamSpecExpression),
               "ParamSpecExpression size mismatch");
static_assert (alignof (ParamSpecExpression) == alignof (::GtkParamSpecExpression),
               "ParamSpecExpression align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
