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
#include <peel/Gtk/EventController.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Device;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ ActionGroup;
} /* namespace Gio */

namespace Gtk
{
struct PadActionEntry;
enum class PadActionType : std::underlying_type<::GtkPadActionType>::type;
class PadController;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::PadController> ()
{
  return gtk_pad_controller_get_type ();
}


namespace Gtk
{
class PadController : public EventController
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PadController () = delete;
  PadController (const PadController &) = delete;
  PadController (PadController &&) = delete;
  PadController &
  operator = (const PadController &) = delete;
  PadController &
  operator = (PadController &&) = delete;
  ~PadController () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<PadController>
  create (Gio::ActionGroup *group, Gdk::Device *pad) noexcept
  {
    ::GActionGroup *_peel_group = reinterpret_cast<::GActionGroup *> (group);
    ::GdkDevice *_peel_pad = reinterpret_cast<::GdkDevice *> (pad);
    ::GtkPadController *_peel_return = gtk_pad_controller_new (_peel_group, _peel_pad);
    peel_assume (_peel_return);
    return peel::RefPtr<PadController>::adopt_ref (reinterpret_cast<PadController *> (_peel_return));
  }

  peel_nonnull_args (5, 6)
  void
  set_action (PadActionType type, int index, int mode, const char *label, const char *action_name) noexcept
  {
    ::GtkPadController *_peel_this = reinterpret_cast<::GtkPadController *> (this);
    ::GtkPadActionType _peel_type = static_cast<::GtkPadActionType> (type);
    gtk_pad_controller_set_action (_peel_this, _peel_type, index, mode, label, action_name);
  }

  void
  set_action_entries (peel::ArrayRef<const PadActionEntry> entries) noexcept
  {
    int _peel_n_entries;
    ::GtkPadController *_peel_this = reinterpret_cast<::GtkPadController *> (this);
    const ::GtkPadActionEntry *_peel_entries = (_peel_n_entries = entries.size (), reinterpret_cast<const ::GtkPadActionEntry *> (entries.data ()));
    gtk_pad_controller_set_action_entries (_peel_this, _peel_entries, _peel_n_entries);
  }

  static peel::Property<Gio::ActionGroup>
  prop_action_group ()
  {
    return peel::Property<Gio::ActionGroup> { "action-group" };
  }

  static peel::Property<Gdk::Device>
  prop_pad ()
  {
    return peel::Property<Gdk::Device> { "pad" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class PadController */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
