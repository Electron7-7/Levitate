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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class LevelBar;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::LevelBar> ()
{
  return gtk_level_bar_get_type ();
}


namespace Gtk
{
class LevelBar : public Widget
/* non-derivable */
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  LevelBar () = delete;
  LevelBar (const LevelBar &) = delete;
  LevelBar (LevelBar &&) = delete;
  LevelBar &
  operator = (const LevelBar &) = delete;
  LevelBar &
  operator = (LevelBar &&) = delete;
  ~LevelBar () = delete;
public:
  enum class Mode : std::underlying_type<::GtkLevelBarMode>::type;

  static peel::FloatPtr<LevelBar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_level_bar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<LevelBar> (reinterpret_cast<LevelBar *> (_peel_return));
  }

  static peel::FloatPtr<LevelBar>
  create_for_interval (double min_value, double max_value) noexcept
  {
    ::GtkWidget *_peel_return = gtk_level_bar_new_for_interval (min_value, max_value);
    peel_assume (_peel_return);
    return peel::FloatPtr<LevelBar> (reinterpret_cast<LevelBar *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_offset_value (const char *name, double value) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gtk_level_bar_add_offset_value (_peel_this, name, value);
  }

  bool
  get_inverted () noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gboolean _peel_return = gtk_level_bar_get_inverted (_peel_this);
    return !!_peel_return;
  }

  double
  get_max_value () noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    return gtk_level_bar_get_max_value (_peel_this);
  }

  double
  get_min_value () noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    return gtk_level_bar_get_min_value (_peel_this);
  }

  LevelBar::Mode
  get_mode () noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    ::GtkLevelBarMode _peel_return = gtk_level_bar_get_mode (_peel_this);
    return static_cast<LevelBar::Mode> (_peel_return);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  bool
  get_offset_value (const char *name, double *value) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gboolean _peel_return = gtk_level_bar_get_offset_value (_peel_this, name, value);
    return !!_peel_return;
  }

  double
  get_value () noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    return gtk_level_bar_get_value (_peel_this);
  }

  void
  remove_offset_value (const char *name) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gtk_level_bar_remove_offset_value (_peel_this, name);
  }

  void
  set_inverted (bool inverted) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gboolean _peel_inverted = static_cast<gboolean> (inverted);
    gtk_level_bar_set_inverted (_peel_this, _peel_inverted);
  }

  void
  set_max_value (double value) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gtk_level_bar_set_max_value (_peel_this, value);
  }

  void
  set_min_value (double value) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gtk_level_bar_set_min_value (_peel_this, value);
  }

  void
  set_mode (LevelBar::Mode mode) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    ::GtkLevelBarMode _peel_mode = static_cast<::GtkLevelBarMode> (mode);
    gtk_level_bar_set_mode (_peel_this, _peel_mode);
  }

  void
  set_value (double value) noexcept
  {
    ::GtkLevelBar *_peel_this = reinterpret_cast<::GtkLevelBar *> (this);
    gtk_level_bar_set_value (_peel_this, value);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_offset_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<LevelBar, void (const char *)>::_peel_connect_by_name (this, "offset-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_offset_changed (HandlerObject *object, void (HandlerObject::*handler_method) (LevelBar *, const char *), bool after = false) noexcept
  {
    return Signal<LevelBar, void (const char *)>::_peel_connect_by_name (this, "offset-changed", object, handler_method, after);
  }
  template<typename Handler>
  peel::SignalConnection::Token
  connect_offset_changed (const char *detail, Handler &&handler, bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<LevelBar, void (const char *)>::lookup ("offset-changed").connect (this, detail_quark, static_cast<Handler &&> (handler), after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_offset_changed (GLib::Quark detail, Handler &&handler, bool after = false) noexcept
  {
    return Signal<LevelBar, void (const char *)>::lookup ("offset-changed").connect (this, detail, static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_offset_changed (const char *detail, HandlerObject *object, void (HandlerObject::*handler_method) (LevelBar *, const char *), bool after = false) noexcept
  {
    GLib::Quark detail_quark { detail };
    return Signal<LevelBar, void (const char *)>::lookup ("offset-changed") .connect (this, detail_quark, object, handler_method, after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_offset_changed (GLib::Quark detail, HandlerObject *object, void (HandlerObject::*handler_method) (LevelBar *, const char *), bool after = false) noexcept
  {
    return Signal<LevelBar, void (const char *)>::lookup ("offset-changed") .connect (this, detail, object, handler_method, after);
  }

  static peel::Property<bool>
  prop_inverted ()
  {
    return peel::Property<bool> { "inverted" };
  }

  static peel::Property<double>
  prop_max_value ()
  {
    return peel::Property<double> { "max-value" };
  }

  static peel::Property<double>
  prop_min_value ()
  {
    return peel::Property<double> { "min-value" };
  }

  static peel::Property<LevelBar::Mode>
  prop_mode ()
  {
    return peel::Property<LevelBar::Mode> { "mode" };
  }

  static peel::Property<double>
  prop_value ()
  {
    return peel::Property<double> { "value" };
  }
}; /* class LevelBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
