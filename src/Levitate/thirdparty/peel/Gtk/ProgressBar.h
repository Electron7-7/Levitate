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
class ProgressBar;
} /* namespace Gtk */

namespace Pango
{
enum class EllipsizeMode : std::underlying_type<::PangoEllipsizeMode>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ProgressBar> ()
{
  return gtk_progress_bar_get_type ();
}


namespace Gtk
{
class ProgressBar : public Widget
/* non-derivable */
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ProgressBar () = delete;
  ProgressBar (const ProgressBar &) = delete;
  ProgressBar (ProgressBar &&) = delete;
  ProgressBar &
  operator = (const ProgressBar &) = delete;
  ProgressBar &
  operator = (ProgressBar &&) = delete;
  ~ProgressBar () = delete;
public:

  static peel::FloatPtr<ProgressBar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_progress_bar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ProgressBar> (reinterpret_cast<ProgressBar *> (_peel_return));
  }

  Pango::EllipsizeMode
  get_ellipsize () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    ::PangoEllipsizeMode _peel_return = gtk_progress_bar_get_ellipsize (_peel_this);
    return static_cast<Pango::EllipsizeMode> (_peel_return);
  }

  double
  get_fraction () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    return gtk_progress_bar_get_fraction (_peel_this);
  }

  bool
  get_inverted () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gboolean _peel_return = gtk_progress_bar_get_inverted (_peel_this);
    return !!_peel_return;
  }

  double
  get_pulse_step () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    return gtk_progress_bar_get_pulse_step (_peel_this);
  }

  bool
  get_show_text () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gboolean _peel_return = gtk_progress_bar_get_show_text (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_text () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    return gtk_progress_bar_get_text (_peel_this);
  }

  void
  pulse () noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gtk_progress_bar_pulse (_peel_this);
  }

  void
  set_ellipsize (Pango::EllipsizeMode mode) noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    ::PangoEllipsizeMode _peel_mode = static_cast<::PangoEllipsizeMode> (mode);
    gtk_progress_bar_set_ellipsize (_peel_this, _peel_mode);
  }

  void
  set_fraction (double fraction) noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gtk_progress_bar_set_fraction (_peel_this, fraction);
  }

  void
  set_inverted (bool inverted) noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gboolean _peel_inverted = static_cast<gboolean> (inverted);
    gtk_progress_bar_set_inverted (_peel_this, _peel_inverted);
  }

  void
  set_pulse_step (double fraction) noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gtk_progress_bar_set_pulse_step (_peel_this, fraction);
  }

  void
  set_show_text (bool show_text) noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gboolean _peel_show_text = static_cast<gboolean> (show_text);
    gtk_progress_bar_set_show_text (_peel_this, _peel_show_text);
  }

  void
  set_text (const char *text) noexcept
  {
    ::GtkProgressBar *_peel_this = reinterpret_cast<::GtkProgressBar *> (this);
    gtk_progress_bar_set_text (_peel_this, text);
  }

  static peel::Property<Pango::EllipsizeMode>
  prop_ellipsize ()
  {
    return peel::Property<Pango::EllipsizeMode> { "ellipsize" };
  }

  static peel::Property<double>
  prop_fraction ()
  {
    return peel::Property<double> { "fraction" };
  }

  static peel::Property<bool>
  prop_inverted ()
  {
    return peel::Property<bool> { "inverted" };
  }

  static peel::Property<double>
  prop_pulse_step ()
  {
    return peel::Property<double> { "pulse-step" };
  }

  static peel::Property<bool>
  prop_show_text ()
  {
    return peel::Property<bool> { "show-text" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }
}; /* class ProgressBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
