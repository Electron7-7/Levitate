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
#include <peel/GLib/SList.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class SizeGroup;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SizeGroup> ()
{
  return gtk_size_group_get_type ();
}


namespace Gtk
{
class SizeGroup : public GObject::Object
/* implements Buildable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SizeGroup () = delete;
  SizeGroup (const SizeGroup &) = delete;
  SizeGroup (SizeGroup &&) = delete;
  SizeGroup &
  operator = (const SizeGroup &) = delete;
  SizeGroup &
  operator = (SizeGroup &&) = delete;
protected:
  ~SizeGroup () = default;
public:
  enum class Mode : std::underlying_type<::GtkSizeGroupMode>::type;

  static peel::RefPtr<SizeGroup>
  create (SizeGroup::Mode mode) noexcept
  {
    ::GtkSizeGroupMode _peel_mode = static_cast<::GtkSizeGroupMode> (mode);
    ::GtkSizeGroup *_peel_return = gtk_size_group_new (_peel_mode);
    peel_assume (_peel_return);
    return peel::RefPtr<SizeGroup>::adopt_ref (reinterpret_cast<SizeGroup *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_widget (Widget *widget) noexcept
  {
    ::GtkSizeGroup *_peel_this = reinterpret_cast<::GtkSizeGroup *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_size_group_add_widget (_peel_this, _peel_widget);
  }

  SizeGroup::Mode
  get_mode () noexcept
  {
    ::GtkSizeGroup *_peel_this = reinterpret_cast<::GtkSizeGroup *> (this);
    ::GtkSizeGroupMode _peel_return = gtk_size_group_get_mode (_peel_this);
    return static_cast<SizeGroup::Mode> (_peel_return);
  }

  GLib::SListRef<Widget * const>
  get_widgets () noexcept
  {
    ::GtkSizeGroup *_peel_this = reinterpret_cast<::GtkSizeGroup *> (this);
    GSList *_peel_return = gtk_size_group_get_widgets (_peel_this);
    return GLib::SListRef<Widget * const>::from_raw_list (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove_widget (Widget *widget) noexcept
  {
    ::GtkSizeGroup *_peel_this = reinterpret_cast<::GtkSizeGroup *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_size_group_remove_widget (_peel_this, _peel_widget);
  }

  void
  set_mode (SizeGroup::Mode mode) noexcept
  {
    ::GtkSizeGroup *_peel_this = reinterpret_cast<::GtkSizeGroup *> (this);
    ::GtkSizeGroupMode _peel_mode = static_cast<::GtkSizeGroupMode> (mode);
    gtk_size_group_set_mode (_peel_this, _peel_mode);
  }

  static peel::Property<SizeGroup::Mode>
  prop_mode ()
  {
    return peel::Property<SizeGroup::Mode> { "mode" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SizeGroup> ());
    _peel_class->finalize (obj);
  }
}; /* class SizeGroup */

static_assert (sizeof (SizeGroup) == sizeof (::GtkSizeGroup),
               "SizeGroup size mismatch");
static_assert (alignof (SizeGroup) == alignof (::GtkSizeGroup),
               "SizeGroup align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
