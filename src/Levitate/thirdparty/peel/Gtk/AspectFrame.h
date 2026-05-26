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
class AspectFrame;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AspectFrame> ()
{
  return gtk_aspect_frame_get_type ();
}


namespace Gtk
{
class AspectFrame : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AspectFrame () = delete;
  AspectFrame (const AspectFrame &) = delete;
  AspectFrame (AspectFrame &&) = delete;
  AspectFrame &
  operator = (const AspectFrame &) = delete;
  AspectFrame &
  operator = (AspectFrame &&) = delete;
  ~AspectFrame () = delete;
public:

  static peel::FloatPtr<AspectFrame>
  create (float xalign, float yalign, float ratio, bool obey_child) noexcept
  {
    gboolean _peel_obey_child = static_cast<gboolean> (obey_child);
    ::GtkWidget *_peel_return = gtk_aspect_frame_new (xalign, yalign, ratio, _peel_obey_child);
    peel_assume (_peel_return);
    return peel::FloatPtr<AspectFrame> (reinterpret_cast<AspectFrame *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    ::GtkWidget *_peel_return = gtk_aspect_frame_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_obey_child () noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    gboolean _peel_return = gtk_aspect_frame_get_obey_child (_peel_this);
    return !!_peel_return;
  }

  float
  get_ratio () noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    return gtk_aspect_frame_get_ratio (_peel_this);
  }

  float
  get_xalign () noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    return gtk_aspect_frame_get_xalign (_peel_this);
  }

  float
  get_yalign () noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    return gtk_aspect_frame_get_yalign (_peel_this);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_aspect_frame_set_child (_peel_this, _peel_child);
  }

  void
  set_obey_child (bool obey_child) noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    gboolean _peel_obey_child = static_cast<gboolean> (obey_child);
    gtk_aspect_frame_set_obey_child (_peel_this, _peel_obey_child);
  }

  void
  set_ratio (float ratio) noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    gtk_aspect_frame_set_ratio (_peel_this, ratio);
  }

  void
  set_xalign (float xalign) noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    gtk_aspect_frame_set_xalign (_peel_this, xalign);
  }

  void
  set_yalign (float yalign) noexcept
  {
    ::GtkAspectFrame *_peel_this = reinterpret_cast<::GtkAspectFrame *> (this);
    gtk_aspect_frame_set_yalign (_peel_this, yalign);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_obey_child ()
  {
    return peel::Property<bool> { "obey-child" };
  }

  static peel::Property<float>
  prop_ratio ()
  {
    return peel::Property<float> { "ratio" };
  }

  static peel::Property<float>
  prop_xalign ()
  {
    return peel::Property<float> { "xalign" };
  }

  static peel::Property<float>
  prop_yalign ()
  {
    return peel::Property<float> { "yalign" };
  }
}; /* class AspectFrame */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
