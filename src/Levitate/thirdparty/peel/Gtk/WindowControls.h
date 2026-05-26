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
enum class PackType : std::underlying_type<::GtkPackType>::type;
class WindowControls;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::WindowControls> ()
{
  return gtk_window_controls_get_type ();
}


namespace Gtk
{
class WindowControls : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  WindowControls () = delete;
  WindowControls (const WindowControls &) = delete;
  WindowControls (WindowControls &&) = delete;
  WindowControls &
  operator = (const WindowControls &) = delete;
  WindowControls &
  operator = (WindowControls &&) = delete;
  ~WindowControls () = delete;
public:

  static peel::FloatPtr<WindowControls>
  create (PackType side) noexcept
  {
    ::GtkPackType _peel_side = static_cast<::GtkPackType> (side);
    ::GtkWidget *_peel_return = gtk_window_controls_new (_peel_side);
    peel_assume (_peel_return);
    return peel::FloatPtr<WindowControls> (reinterpret_cast<WindowControls *> (_peel_return));
  }

  const char *
  get_decoration_layout () noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    return gtk_window_controls_get_decoration_layout (_peel_this);
  }

  bool
  get_empty () noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    gboolean _peel_return = gtk_window_controls_get_empty (_peel_this);
    return !!_peel_return;
  }

  PackType
  get_side () noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    ::GtkPackType _peel_return = gtk_window_controls_get_side (_peel_this);
    return static_cast<PackType> (_peel_return);
  }

  bool
  get_use_native_controls () noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    gboolean _peel_return = gtk_window_controls_get_use_native_controls (_peel_this);
    return !!_peel_return;
  }

  void
  set_decoration_layout (const char *layout) noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    gtk_window_controls_set_decoration_layout (_peel_this, layout);
  }

  void
  set_side (PackType side) noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    ::GtkPackType _peel_side = static_cast<::GtkPackType> (side);
    gtk_window_controls_set_side (_peel_this, _peel_side);
  }

  void
  set_use_native_controls (bool setting) noexcept
  {
    ::GtkWindowControls *_peel_this = reinterpret_cast<::GtkWindowControls *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_window_controls_set_use_native_controls (_peel_this, _peel_setting);
  }

  static peel::Property<const char *>
  prop_decoration_layout ()
  {
    return peel::Property<const char *> { "decoration-layout" };
  }

  static peel::Property<bool>
  prop_empty ()
  {
    return peel::Property<bool> { "empty" };
  }

  static peel::Property<PackType>
  prop_side ()
  {
    return peel::Property<PackType> { "side" };
  }

  static peel::Property<bool>
  prop_use_native_controls ()
  {
    return peel::Property<bool> { "use-native-controls" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkWindowControlsClass),
                 "WindowControls::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkWindowControlsClass),
                 "WindowControls::Class align mismatch");
}; /* class WindowControls */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
