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
namespace Gdk
{
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class Frame;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Frame> ()
{
  return gtk_frame_get_type ();
}


namespace Gtk
{
class Frame : public Widget
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Frame () = delete;
  Frame (const Frame &) = delete;
  Frame (Frame &&) = delete;
  Frame &
  operator = (const Frame &) = delete;
  Frame &
  operator = (Frame &&) = delete;
protected:
  ~Frame () = default;
public:

  static peel::FloatPtr<Frame>
  create (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_frame_new (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<Frame> (reinterpret_cast<Frame *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    ::GtkWidget *_peel_return = gtk_frame_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  const char *
  get_label () noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    return gtk_frame_get_label (_peel_this);
  }

  float
  get_label_align () noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    return gtk_frame_get_label_align (_peel_this);
  }

  Widget *
  get_label_widget () noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    ::GtkWidget *_peel_return = gtk_frame_get_label_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_frame_set_child (_peel_this, _peel_child);
  }

  void
  set_label (const char *label) noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    gtk_frame_set_label (_peel_this, label);
  }

  void
  set_label_align (float xalign) noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    gtk_frame_set_label_align (_peel_this, xalign);
  }

  void
  set_label_widget (peel::FloatPtr<Widget> label_widget) noexcept
  {
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    ::GtkWidget *_peel_label_widget = reinterpret_cast<::GtkWidget *> (std::move (label_widget).release_floating_ptr ());
    gtk_frame_set_label_widget (_peel_this, _peel_label_widget);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<const char *>
  prop_label ()
  {
    return peel::Property<const char *> { "label" };
  }

  static peel::Property<Widget>
  prop_label_widget ()
  {
    return peel::Property<Widget> { "label-widget" };
  }

  static peel::Property<float>
  prop_label_xalign ()
  {
    return peel::Property<float> { "label-xalign" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Frame> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_compute_child_allocation (Gdk::Rectangle *allocation) noexcept
  {
    ::GtkFrameClass *_peel_class = reinterpret_cast<::GtkFrameClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkFrame *_peel_this = reinterpret_cast<::GtkFrame *> (this);
    ::GtkAllocation *_peel_allocation = reinterpret_cast<::GtkAllocation *> (allocation);
    _peel_class->compute_child_allocation (_peel_this, _peel_allocation);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkFrameClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_compute_child_allocation ()
    {
      ::GtkFrameClass *klass = reinterpret_cast<::GtkFrameClass *> (this);
      klass->compute_child_allocation = +[] (::GtkFrame *frame, ::GtkAllocation *allocation) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (frame);
        Gdk::Rectangle *_peel_allocation = reinterpret_cast<Gdk::Rectangle *> (allocation);
        _peel_this->DerivedClass::vfunc_compute_child_allocation (_peel_allocation);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkFrameClass),
                 "Frame::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFrameClass),
                 "Frame::Class align mismatch");
}; /* class Frame */

static_assert (sizeof (Frame) == sizeof (::GtkFrame),
               "Frame size mismatch");
static_assert (alignof (Frame) == alignof (::GtkFrame),
               "Frame align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
