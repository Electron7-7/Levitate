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
#include <peel/Gtk/ScaleButton.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class VolumeButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::VolumeButton> ()
{
  return gtk_volume_button_get_type ();
}


namespace Gtk
{
class VolumeButton : public ScaleButton
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  VolumeButton () = delete;
  VolumeButton (const VolumeButton &) = delete;
  VolumeButton (VolumeButton &&) = delete;
  VolumeButton &
  operator = (const VolumeButton &) = delete;
  VolumeButton &
  operator = (VolumeButton &&) = delete;
protected:
  ~VolumeButton () = default;
public:

  static peel::FloatPtr<VolumeButton>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_volume_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<VolumeButton> (reinterpret_cast<VolumeButton *> (_peel_return));
  }

  static peel::Property<bool>
  prop_use_symbolic ()
  {
    return peel::Property<bool> { "use-symbolic" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<VolumeButton> ());
    _peel_class->finalize (obj);
  }
}; /* class VolumeButton */

static_assert (sizeof (VolumeButton) == sizeof (::GtkVolumeButton),
               "VolumeButton size mismatch");
static_assert (alignof (VolumeButton) == alignof (::GtkVolumeButton),
               "VolumeButton align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
