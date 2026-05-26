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
#include <peel/Gtk/CellRenderer.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellRendererToggle;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererToggle> ()
{
  return gtk_cell_renderer_toggle_get_type ();
}


namespace Gtk
{
class CellRendererToggle : public CellRenderer
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererToggle () = delete;
  CellRendererToggle (const CellRendererToggle &) = delete;
  CellRendererToggle (CellRendererToggle &&) = delete;
  CellRendererToggle &
  operator = (const CellRendererToggle &) = delete;
  CellRendererToggle &
  operator = (CellRendererToggle &&) = delete;
  ~CellRendererToggle () = delete;
public:

  static peel::FloatPtr<CellRendererToggle>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_toggle_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererToggle> (reinterpret_cast<CellRendererToggle *> (_peel_return));
  }

  bool
  get_activatable () noexcept
  {
    ::GtkCellRendererToggle *_peel_this = reinterpret_cast<::GtkCellRendererToggle *> (this);
    gboolean _peel_return = gtk_cell_renderer_toggle_get_activatable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_active () noexcept
  {
    ::GtkCellRendererToggle *_peel_this = reinterpret_cast<::GtkCellRendererToggle *> (this);
    gboolean _peel_return = gtk_cell_renderer_toggle_get_active (_peel_this);
    return !!_peel_return;
  }

  bool
  get_radio () noexcept
  {
    ::GtkCellRendererToggle *_peel_this = reinterpret_cast<::GtkCellRendererToggle *> (this);
    gboolean _peel_return = gtk_cell_renderer_toggle_get_radio (_peel_this);
    return !!_peel_return;
  }

  void
  set_activatable (bool setting) noexcept
  {
    ::GtkCellRendererToggle *_peel_this = reinterpret_cast<::GtkCellRendererToggle *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_cell_renderer_toggle_set_activatable (_peel_this, _peel_setting);
  }

  void
  set_active (bool setting) noexcept
  {
    ::GtkCellRendererToggle *_peel_this = reinterpret_cast<::GtkCellRendererToggle *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_cell_renderer_toggle_set_active (_peel_this, _peel_setting);
  }

  void
  set_radio (bool radio) noexcept
  {
    ::GtkCellRendererToggle *_peel_this = reinterpret_cast<::GtkCellRendererToggle *> (this);
    gboolean _peel_radio = static_cast<gboolean> (radio);
    gtk_cell_renderer_toggle_set_radio (_peel_this, _peel_radio);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRendererToggle, void (const char *)>::_peel_connect_by_name (this, "toggled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggled (HandlerObject *object, void (HandlerObject::*handler_method) (CellRendererToggle *, const char *), bool after = false) noexcept
  {
    return Signal<CellRendererToggle, void (const char *)>::_peel_connect_by_name (this, "toggled", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_activatable ()
  {
    return peel::Property<bool> { "activatable" };
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<bool>
  prop_inconsistent ()
  {
    return peel::Property<bool> { "inconsistent" };
  }

  static peel::Property<bool>
  prop_radio ()
  {
    return peel::Property<bool> { "radio" };
  }
}; /* class CellRendererToggle */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
