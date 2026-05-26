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
class /* interface */ StyleProvider;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::StyleProvider> ()
{
  return gtk_style_provider_get_type ();
}


namespace Gtk
{
class /* interface */ StyleProvider : public GObject::Object
/* requires GObject::Object */
{
private:
  StyleProvider () = delete;
  StyleProvider (const StyleProvider &) = delete;
  StyleProvider (StyleProvider &&) = delete;

  StyleProvider &
  operator = (const StyleProvider &) = delete;
  StyleProvider &
  operator = (StyleProvider &&) = delete;

protected:
  ~StyleProvider () = default;

public:

  template<typename Handler>
  peel::SignalConnection::Token
  connect_gtk_private_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<StyleProvider, void ()>::_peel_connect_by_name (this, "gtk-private-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_gtk_private_changed (HandlerObject *object, void (HandlerObject::*handler_method) (StyleProvider *), bool after = false) noexcept
  {
    return Signal<StyleProvider, void ()>::_peel_connect_by_name (this, "gtk-private-changed", object, handler_method, after);
  }
}; /* interface StyleProvider */
static_assert (sizeof (StyleProvider) == sizeof (GObject::Object),
               "StyleProvider size mismatch");
static_assert (alignof (StyleProvider) == alignof (GObject::Object),
               "StyleProvider align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
