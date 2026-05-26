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
#include <peel/Gtk/Gesture.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ EventSequence;
} /* namespace Gdk */

namespace Gtk
{
class GestureSingle;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GestureSingle> ()
{
  return gtk_gesture_single_get_type ();
}


namespace Gtk
{
class GestureSingle : public Gesture
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GestureSingle () = delete;
  GestureSingle (const GestureSingle &) = delete;
  GestureSingle (GestureSingle &&) = delete;
  GestureSingle &
  operator = (const GestureSingle &) = delete;
  GestureSingle &
  operator = (GestureSingle &&) = delete;
  ~GestureSingle () = delete;
public:

  unsigned
  get_button () noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    return gtk_gesture_single_get_button (_peel_this);
  }

  unsigned
  get_current_button () noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    return gtk_gesture_single_get_current_button (_peel_this);
  }

  /* Unsupported for now: get_current_sequence: no idea about ownership semantics */
  static void
  get_current_sequence (UnsupportedForNowToken);

  bool
  get_exclusive () noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    gboolean _peel_return = gtk_gesture_single_get_exclusive (_peel_this);
    return !!_peel_return;
  }

  bool
  get_touch_only () noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    gboolean _peel_return = gtk_gesture_single_get_touch_only (_peel_this);
    return !!_peel_return;
  }

  void
  set_button (unsigned button) noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    gtk_gesture_single_set_button (_peel_this, button);
  }

  void
  set_exclusive (bool exclusive) noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    gboolean _peel_exclusive = static_cast<gboolean> (exclusive);
    gtk_gesture_single_set_exclusive (_peel_this, _peel_exclusive);
  }

  void
  set_touch_only (bool touch_only) noexcept
  {
    ::GtkGestureSingle *_peel_this = reinterpret_cast<::GtkGestureSingle *> (this);
    gboolean _peel_touch_only = static_cast<gboolean> (touch_only);
    gtk_gesture_single_set_touch_only (_peel_this, _peel_touch_only);
  }

  static peel::Property<unsigned>
  prop_button ()
  {
    return peel::Property<unsigned> { "button" };
  }

  static peel::Property<bool>
  prop_exclusive ()
  {
    return peel::Property<bool> { "exclusive" };
  }

  static peel::Property<bool>
  prop_touch_only ()
  {
    return peel::Property<bool> { "touch-only" };
  }

  class Class : public Gesture::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class GestureSingle */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/EventSequence.h>
