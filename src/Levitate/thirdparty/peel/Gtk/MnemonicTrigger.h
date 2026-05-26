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
#include <peel/Gtk/ShortcutTrigger.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class MnemonicTrigger;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MnemonicTrigger> ()
{
  return gtk_mnemonic_trigger_get_type ();
}


namespace Gtk
{
class MnemonicTrigger : public ShortcutTrigger
/* non-derivable */
{
private:
  using ShortcutTrigger::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MnemonicTrigger () = delete;
  MnemonicTrigger (const MnemonicTrigger &) = delete;
  MnemonicTrigger (MnemonicTrigger &&) = delete;
  MnemonicTrigger &
  operator = (const MnemonicTrigger &) = delete;
  MnemonicTrigger &
  operator = (MnemonicTrigger &&) = delete;
  ~MnemonicTrigger () = delete;
public:

  static peel::RefPtr<MnemonicTrigger>
  create (unsigned keyval) noexcept
  {
    ::GtkShortcutTrigger *_peel_return = gtk_mnemonic_trigger_new (keyval);
    peel_assume (_peel_return);
    return peel::RefPtr<MnemonicTrigger>::adopt_ref (reinterpret_cast<MnemonicTrigger *> (_peel_return));
  }

  unsigned
  get_keyval () noexcept
  {
    ::GtkMnemonicTrigger *_peel_this = reinterpret_cast<::GtkMnemonicTrigger *> (this);
    return gtk_mnemonic_trigger_get_keyval (_peel_this);
  }

  static peel::Property<unsigned>
  prop_keyval ()
  {
    return peel::Property<unsigned> { "keyval" };
  }

  class Class : public ShortcutTrigger::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class MnemonicTrigger */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
