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
namespace Gtk
{
class CellRendererCombo;
struct TreeIter;
class /* interface */ TreeModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererCombo> ()
{
  return gtk_cell_renderer_combo_get_type ();
}


namespace Gtk
{
class CellRendererCombo : public CellRendererText
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererCombo () = delete;
  CellRendererCombo (const CellRendererCombo &) = delete;
  CellRendererCombo (CellRendererCombo &&) = delete;
  CellRendererCombo &
  operator = (const CellRendererCombo &) = delete;
  CellRendererCombo &
  operator = (CellRendererCombo &&) = delete;
  ~CellRendererCombo () = delete;
public:

  static peel::FloatPtr<CellRendererCombo>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_combo_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererCombo> (reinterpret_cast<CellRendererCombo *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRendererCombo, void (const char *, const TreeIter *)>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (CellRendererCombo *, const char *, const TreeIter *), bool after = false) noexcept
  {
    return Signal<CellRendererCombo, void (const char *, const TreeIter *)>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_has_entry ()
  {
    return peel::Property<bool> { "has-entry" };
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }

  static peel::Property<int>
  prop_text_column ()
  {
    return peel::Property<int> { "text-column" };
  }
}; /* class CellRendererCombo */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
