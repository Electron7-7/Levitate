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
#include <peel/Gtk/Editable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class EditableLabel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EditableLabel> ()
{
  return gtk_editable_label_get_type ();
}


namespace Gtk
{
class EditableLabel : public Editable
/* non-derivable */
/* extends Widget */
/* implements Accessible, Buildable, Constraint::Target, Editable */
{
private:
  using Editable::get_default_direction;
  using Editable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EditableLabel () = delete;
  EditableLabel (const EditableLabel &) = delete;
  EditableLabel (EditableLabel &&) = delete;
  EditableLabel &
  operator = (const EditableLabel &) = delete;
  EditableLabel &
  operator = (EditableLabel &&) = delete;
  ~EditableLabel () = delete;
public:

  peel_nonnull_args (1)
  static peel::FloatPtr<EditableLabel>
  create (const char *str) noexcept
  {
    ::GtkWidget *_peel_return = gtk_editable_label_new (str);
    peel_assume (_peel_return);
    return peel::FloatPtr<EditableLabel> (reinterpret_cast<EditableLabel *> (_peel_return));
  }

  bool
  get_editing () noexcept
  {
    ::GtkEditableLabel *_peel_this = reinterpret_cast<::GtkEditableLabel *> (this);
    gboolean _peel_return = gtk_editable_label_get_editing (_peel_this);
    return !!_peel_return;
  }

  void
  start_editing () noexcept
  {
    ::GtkEditableLabel *_peel_this = reinterpret_cast<::GtkEditableLabel *> (this);
    gtk_editable_label_start_editing (_peel_this);
  }

  void
  stop_editing (bool commit) noexcept
  {
    ::GtkEditableLabel *_peel_this = reinterpret_cast<::GtkEditableLabel *> (this);
    gboolean _peel_commit = static_cast<gboolean> (commit);
    gtk_editable_label_stop_editing (_peel_this, _peel_commit);
  }

  static peel::Property<bool>
  prop_editing ()
  {
    return peel::Property<bool> { "editing" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkEditableLabelClass),
                 "EditableLabel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkEditableLabelClass),
                 "EditableLabel::Class align mismatch");
}; /* class EditableLabel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
