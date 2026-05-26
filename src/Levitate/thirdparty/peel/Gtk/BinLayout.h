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
#include <peel/Gtk/LayoutManager.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class BinLayout;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::BinLayout> ()
{
  return gtk_bin_layout_get_type ();
}


namespace Gtk
{
class BinLayout : public LayoutManager
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BinLayout () = delete;
  BinLayout (const BinLayout &) = delete;
  BinLayout (BinLayout &&) = delete;
  BinLayout &
  operator = (const BinLayout &) = delete;
  BinLayout &
  operator = (BinLayout &&) = delete;
  ~BinLayout () = delete;
public:

  static peel::RefPtr<BinLayout>
  create () noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_bin_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<BinLayout>::adopt_ref (reinterpret_cast<BinLayout *> (_peel_return));
  }

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkBinLayoutClass),
                 "BinLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkBinLayoutClass),
                 "BinLayout::Class align mismatch");
}; /* class BinLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
