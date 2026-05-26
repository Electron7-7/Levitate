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
#include <peel/Gtk/CellRendererText.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

namespace Gtk
{
class CellRendererAccel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererAccel> ()
{
  return gtk_cell_renderer_accel_get_type ();
}


namespace Gtk
{
class CellRendererAccel : public CellRendererText
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererAccel () = delete;
  CellRendererAccel (const CellRendererAccel &) = delete;
  CellRendererAccel (CellRendererAccel &&) = delete;
  CellRendererAccel &
  operator = (const CellRendererAccel &) = delete;
  CellRendererAccel &
  operator = (CellRendererAccel &&) = delete;
  ~CellRendererAccel () = delete;
public:
  enum class Mode : std::underlying_type<::GtkCellRendererAccelMode>::type;

  static peel::FloatPtr<CellRendererAccel>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_accel_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererAccel> (reinterpret_cast<CellRendererAccel *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accel_cleared (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRendererAccel, void (const char *)>::_peel_connect_by_name (this, "accel-cleared", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accel_cleared (HandlerObject *object, void (HandlerObject::*handler_method) (CellRendererAccel *, const char *), bool after = false) noexcept
  {
    return Signal<CellRendererAccel, void (const char *)>::_peel_connect_by_name (this, "accel-cleared", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_accel_edited (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRendererAccel, void (const char *, unsigned, Gdk::ModifierType, unsigned)>::_peel_connect_by_name (this, "accel-edited", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_accel_edited (HandlerObject *object, void (HandlerObject::*handler_method) (CellRendererAccel *, const char *, unsigned, Gdk::ModifierType, unsigned), bool after = false) noexcept
  {
    return Signal<CellRendererAccel, void (const char *, unsigned, Gdk::ModifierType, unsigned)>::_peel_connect_by_name (this, "accel-edited", object, handler_method, after);
  }

  static peel::Property<unsigned>
  prop_accel_key ()
  {
    return peel::Property<unsigned> { "accel-key" };
  }

  static peel::Property<CellRendererAccel::Mode>
  prop_accel_mode ()
  {
    return peel::Property<CellRendererAccel::Mode> { "accel-mode" };
  }

  static peel::Property<Gdk::ModifierType>
  prop_accel_mods ()
  {
    return peel::Property<Gdk::ModifierType> { "accel-mods" };
  }

  static peel::Property<unsigned>
  prop_keycode ()
  {
    return peel::Property<unsigned> { "keycode" };
  }
}; /* class CellRendererAccel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
