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
#include <peel/Gtk/ComboBox.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ComboBoxText;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ComboBoxText> ()
{
  return gtk_combo_box_text_get_type ();
}


namespace Gtk
{
class ComboBoxText : public ComboBox
/* non-derivable */
/* implements Accessible, Buildable, CellEditable, CellLayout, Constraint::Target */
{
private:
  using ComboBox::create_with_model;
  using ComboBox::create_with_model_and_entry;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ComboBoxText () = delete;
  ComboBoxText (const ComboBoxText &) = delete;
  ComboBoxText (ComboBoxText &&) = delete;
  ComboBoxText &
  operator = (const ComboBoxText &) = delete;
  ComboBoxText &
  operator = (ComboBoxText &&) = delete;
  ~ComboBoxText () = delete;
public:

  static peel::FloatPtr<ComboBoxText>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_combo_box_text_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ComboBoxText> (reinterpret_cast<ComboBoxText *> (_peel_return));
  }

  static peel::FloatPtr<ComboBoxText>
  create_with_entry () noexcept
  {
    ::GtkWidget *_peel_return = gtk_combo_box_text_new_with_entry ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ComboBoxText> (reinterpret_cast<ComboBoxText *> (_peel_return));
  }

  peel_nonnull_args (3)
  void
  append (const char *id, const char *text) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_append (_peel_this, id, text);
  }

  peel_nonnull_args (2)
  void
  append_text (const char *text) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_append_text (_peel_this, text);
  }

  peel::String
  get_active_text () noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    char *_peel_return = gtk_combo_box_text_get_active_text (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (4)
  void
  insert (int position, const char *id, const char *text) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_insert (_peel_this, position, id, text);
  }

  peel_nonnull_args (3)
  void
  insert_text (int position, const char *text) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_insert_text (_peel_this, position, text);
  }

  peel_nonnull_args (3)
  void
  prepend (const char *id, const char *text) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_prepend (_peel_this, id, text);
  }

  peel_nonnull_args (2)
  void
  prepend_text (const char *text) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_prepend_text (_peel_this, text);
  }

  void
  remove (int position) noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_remove (_peel_this, position);
  }

  void
  remove_all () noexcept
  {
    ::GtkComboBoxText *_peel_this = reinterpret_cast<::GtkComboBoxText *> (this);
    gtk_combo_box_text_remove_all (_peel_this);
  }
}; /* class ComboBoxText */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
