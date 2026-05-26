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
class GraphicsOffload;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GraphicsOffload> ()
{
  return gtk_graphics_offload_get_type ();
}


namespace Gtk
{
class GraphicsOffload : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GraphicsOffload () = delete;
  GraphicsOffload (const GraphicsOffload &) = delete;
  GraphicsOffload (GraphicsOffload &&) = delete;
  GraphicsOffload &
  operator = (const GraphicsOffload &) = delete;
  GraphicsOffload &
  operator = (GraphicsOffload &&) = delete;
  ~GraphicsOffload () = delete;
public:
  enum class Enabled : std::underlying_type<::GtkGraphicsOffloadEnabled>::type;

  static peel::FloatPtr<GraphicsOffload>
  create (Widget *child) noexcept
  {
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    ::GtkWidget *_peel_return = gtk_graphics_offload_new (_peel_child);
    peel_assume (_peel_return);
    return peel::FloatPtr<GraphicsOffload> (reinterpret_cast<GraphicsOffload *> (_peel_return));
  }

  bool
  get_black_background () noexcept
  {
    ::GtkGraphicsOffload *_peel_this = reinterpret_cast<::GtkGraphicsOffload *> (this);
    gboolean _peel_return = gtk_graphics_offload_get_black_background (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkGraphicsOffload *_peel_this = reinterpret_cast<::GtkGraphicsOffload *> (this);
    ::GtkWidget *_peel_return = gtk_graphics_offload_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  GraphicsOffload::Enabled
  get_enabled () noexcept
  {
    ::GtkGraphicsOffload *_peel_this = reinterpret_cast<::GtkGraphicsOffload *> (this);
    ::GtkGraphicsOffloadEnabled _peel_return = gtk_graphics_offload_get_enabled (_peel_this);
    return static_cast<GraphicsOffload::Enabled> (_peel_return);
  }

  void
  set_black_background (bool value) noexcept
  {
    ::GtkGraphicsOffload *_peel_this = reinterpret_cast<::GtkGraphicsOffload *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gtk_graphics_offload_set_black_background (_peel_this, _peel_value);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkGraphicsOffload *_peel_this = reinterpret_cast<::GtkGraphicsOffload *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_graphics_offload_set_child (_peel_this, _peel_child);
  }

  void
  set_enabled (GraphicsOffload::Enabled enabled) noexcept
  {
    ::GtkGraphicsOffload *_peel_this = reinterpret_cast<::GtkGraphicsOffload *> (this);
    ::GtkGraphicsOffloadEnabled _peel_enabled = static_cast<::GtkGraphicsOffloadEnabled> (enabled);
    gtk_graphics_offload_set_enabled (_peel_this, _peel_enabled);
  }

  static peel::Property<bool>
  prop_black_background ()
  {
    return peel::Property<bool> { "black-background" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<GraphicsOffload::Enabled>
  prop_enabled ()
  {
    return peel::Property<GraphicsOffload::Enabled> { "enabled" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkGraphicsOffloadClass),
                 "GraphicsOffload::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkGraphicsOffloadClass),
                 "GraphicsOffload::Class align mismatch");
}; /* class GraphicsOffload */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
