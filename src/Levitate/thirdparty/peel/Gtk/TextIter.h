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

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* interface */ Paintable;
} /* namespace Gdk */

namespace Gtk
{
class TextBuffer;
class TextChildAnchor;
struct TextIter;
class TextMark;
enum class TextSearchFlags : std::underlying_type<::GtkTextSearchFlags>::type;
class TextTag;
} /* namespace Gtk */

namespace Pango
{
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextIter> ()
{
  return gtk_text_iter_get_type ();
}
template<>
struct GObject::Value::Traits<Gtk::TextIter>
{
  typedef UniquePtr<Gtk::TextIter> OwnedType;
  typedef const Gtk::TextIter * UnownedType;

  static const Gtk::TextIter *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::TextIter *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::TextIter * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Gtk::TextIter>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::TextIter>::adopt_ref (reinterpret_cast<Gtk::TextIter *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::TextIter> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Gtk::TextIter *
  cast_for_create (const Gtk::TextIter * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gtk::TextIter>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gtk::TextIter> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Gtk::TextIter>
{
  static void
  free (Gtk::TextIter *ptr)
  {
    gtk_text_iter_free (reinterpret_cast<::GtkTextIter *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gtk
{
struct TextIter
{
private:
  ::GtkTextIter inner peel_no_warn_unused;


public:
  peel_arg_in (2) peel_nonnull_args (2)
  void
  assign (const TextIter *other) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_other = reinterpret_cast<const ::GtkTextIter *> (other);
    gtk_text_iter_assign (_peel_this, _peel_other);
  }

  bool
  backward_char () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_char (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_chars (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_chars (_peel_this, count);
    return !!_peel_return;
  }

  bool
  backward_cursor_position () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_cursor_position (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_cursor_positions (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_cursor_positions (_peel_this, count);
    return !!_peel_return;
  }

  template<typename TextCharPredicate>
  peel_arg_in (3)
  bool
  backward_find_char (TextCharPredicate &&pred, const TextIter *limit) noexcept
  {
    gpointer _peel_user_data;
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    ::GtkTextCharPredicate _peel_pred = peel::internals::CallbackHelper<gboolean, gunichar>::wrap_call_callback (
      static_cast<TextCharPredicate &&> (pred),
      [] (gunichar ch, gpointer user_data) -> gboolean
      {
        TextCharPredicate &_peel_captured_pred = *reinterpret_cast<typename std::remove_reference<TextCharPredicate>::type *> (user_data);
        bool _peel_return = _peel_captured_pred (ch);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TextCharPredicate, void, gunichar>::value);
    const ::GtkTextIter *_peel_limit = reinterpret_cast<const ::GtkTextIter *> (limit);
    gboolean _peel_return = gtk_text_iter_backward_find_char (_peel_this, _peel_pred, _peel_user_data, _peel_limit);
    return !!_peel_return;
  }

  bool
  backward_line () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_line (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_lines (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_lines (_peel_this, count);
    return !!_peel_return;
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_in (6) peel_nonnull_args (2)
  bool
  backward_search (const char *str, TextSearchFlags flags, TextIter *match_start, TextIter *match_end, const TextIter *limit) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextSearchFlags _peel_flags = static_cast<::GtkTextSearchFlags> (flags);
    ::GtkTextIter *_peel_match_start = reinterpret_cast<::GtkTextIter *> (match_start);
    ::GtkTextIter *_peel_match_end = reinterpret_cast<::GtkTextIter *> (match_end);
    const ::GtkTextIter *_peel_limit = reinterpret_cast<const ::GtkTextIter *> (limit);
    gboolean _peel_return = gtk_text_iter_backward_search (_peel_this, str, _peel_flags, _peel_match_start, _peel_match_end, _peel_limit);
    return !!_peel_return;
  }

  bool
  backward_sentence_start () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_sentence_start (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_sentence_starts (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_sentence_starts (_peel_this, count);
    return !!_peel_return;
  }

  bool
  backward_to_tag_toggle (TextTag *tag) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_iter_backward_to_tag_toggle (_peel_this, _peel_tag);
    return !!_peel_return;
  }

  bool
  backward_visible_cursor_position () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_visible_cursor_position (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_visible_cursor_positions (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_visible_cursor_positions (_peel_this, count);
    return !!_peel_return;
  }

  bool
  backward_visible_line () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_visible_line (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_visible_lines (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_visible_lines (_peel_this, count);
    return !!_peel_return;
  }

  bool
  backward_visible_word_start () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_visible_word_start (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_visible_word_starts (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_visible_word_starts (_peel_this, count);
    return !!_peel_return;
  }

  bool
  backward_word_start () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_word_start (_peel_this);
    return !!_peel_return;
  }

  bool
  backward_word_starts (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_backward_word_starts (_peel_this, count);
    return !!_peel_return;
  }

  bool
  can_insert (bool default_editability) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_default_editability = static_cast<gboolean> (default_editability);
    gboolean _peel_return = gtk_text_iter_can_insert (_peel_this, _peel_default_editability);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (const TextIter *rhs) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_rhs = reinterpret_cast<const ::GtkTextIter *> (rhs);
    return gtk_text_iter_compare (_peel_this, _peel_rhs);
  }

  peel::UniquePtr<TextIter>
  copy () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextIter *_peel_return = gtk_text_iter_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<TextIter>::adopt_ref (reinterpret_cast<TextIter *> (_peel_return));
  }

  bool
  editable (bool default_setting) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_default_setting = static_cast<gboolean> (default_setting);
    gboolean _peel_return = gtk_text_iter_editable (_peel_this, _peel_default_setting);
    return !!_peel_return;
  }

  bool
  ends_line () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_ends_line (_peel_this);
    return !!_peel_return;
  }

  bool
  ends_sentence () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_ends_sentence (_peel_this);
    return !!_peel_return;
  }

  bool
  ends_tag (TextTag *tag) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_iter_ends_tag (_peel_this, _peel_tag);
    return !!_peel_return;
  }

  bool
  ends_word () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_ends_word (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const TextIter *rhs) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_rhs = reinterpret_cast<const ::GtkTextIter *> (rhs);
    gboolean _peel_return = gtk_text_iter_equal (_peel_this, _peel_rhs);
    return !!_peel_return;
  }

  bool
  forward_char () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_char (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_chars (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_chars (_peel_this, count);
    return !!_peel_return;
  }

  bool
  forward_cursor_position () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_cursor_position (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_cursor_positions (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_cursor_positions (_peel_this, count);
    return !!_peel_return;
  }

  template<typename TextCharPredicate>
  peel_arg_in (3)
  bool
  forward_find_char (TextCharPredicate &&pred, const TextIter *limit) noexcept
  {
    gpointer _peel_user_data;
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    ::GtkTextCharPredicate _peel_pred = peel::internals::CallbackHelper<gboolean, gunichar>::wrap_call_callback (
      static_cast<TextCharPredicate &&> (pred),
      [] (gunichar ch, gpointer user_data) -> gboolean
      {
        TextCharPredicate &_peel_captured_pred = *reinterpret_cast<typename std::remove_reference<TextCharPredicate>::type *> (user_data);
        bool _peel_return = _peel_captured_pred (ch);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TextCharPredicate, void, gunichar>::value);
    const ::GtkTextIter *_peel_limit = reinterpret_cast<const ::GtkTextIter *> (limit);
    gboolean _peel_return = gtk_text_iter_forward_find_char (_peel_this, _peel_pred, _peel_user_data, _peel_limit);
    return !!_peel_return;
  }

  bool
  forward_line () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_line (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_lines (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_lines (_peel_this, count);
    return !!_peel_return;
  }

  peel_arg_out (4) peel_arg_out (5) peel_arg_in (6) peel_nonnull_args (2)
  bool
  forward_search (const char *str, TextSearchFlags flags, TextIter *match_start, TextIter *match_end, const TextIter *limit) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextSearchFlags _peel_flags = static_cast<::GtkTextSearchFlags> (flags);
    ::GtkTextIter *_peel_match_start = reinterpret_cast<::GtkTextIter *> (match_start);
    ::GtkTextIter *_peel_match_end = reinterpret_cast<::GtkTextIter *> (match_end);
    const ::GtkTextIter *_peel_limit = reinterpret_cast<const ::GtkTextIter *> (limit);
    gboolean _peel_return = gtk_text_iter_forward_search (_peel_this, str, _peel_flags, _peel_match_start, _peel_match_end, _peel_limit);
    return !!_peel_return;
  }

  bool
  forward_sentence_end () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_sentence_end (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_sentence_ends (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_sentence_ends (_peel_this, count);
    return !!_peel_return;
  }

  void
  forward_to_end () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_forward_to_end (_peel_this);
  }

  bool
  forward_to_line_end () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_to_line_end (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_to_tag_toggle (TextTag *tag) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_iter_forward_to_tag_toggle (_peel_this, _peel_tag);
    return !!_peel_return;
  }

  bool
  forward_visible_cursor_position () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_visible_cursor_position (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_visible_cursor_positions (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_visible_cursor_positions (_peel_this, count);
    return !!_peel_return;
  }

  bool
  forward_visible_line () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_visible_line (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_visible_lines (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_visible_lines (_peel_this, count);
    return !!_peel_return;
  }

  bool
  forward_visible_word_end () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_visible_word_end (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_visible_word_ends (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_visible_word_ends (_peel_this, count);
    return !!_peel_return;
  }

  bool
  forward_word_end () noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_word_end (_peel_this);
    return !!_peel_return;
  }

  bool
  forward_word_ends (int count) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_forward_word_ends (_peel_this, count);
    return !!_peel_return;
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  TextBuffer *
  get_buffer () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextBuffer *_peel_return = gtk_text_iter_get_buffer (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TextBuffer *> (_peel_return);
  }

  int
  get_bytes_in_line () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_bytes_in_line (_peel_this);
  }

  gunichar
  get_char () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_char (_peel_this);
  }

  int
  get_chars_in_line () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_chars_in_line (_peel_this);
  }

  TextChildAnchor *
  get_child_anchor () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextChildAnchor *_peel_return = gtk_text_iter_get_child_anchor (_peel_this);
    return reinterpret_cast<TextChildAnchor *> (_peel_return);
  }

  /* Unsupported for now: get_language: no idea about ownership semantics */

  int
  get_line () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_line (_peel_this);
  }

  int
  get_line_index () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_line_index (_peel_this);
  }

  int
  get_line_offset () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_line_offset (_peel_this);
  }

  GLib::SList<TextMark *>
  get_marks () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    GSList *_peel_return = gtk_text_iter_get_marks (_peel_this);
    return GLib::SList<TextMark *>::adopt_list (_peel_return);
  }

  int
  get_offset () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_offset (_peel_this);
  }

  Gdk::Paintable *
  get_paintable () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GdkPaintable *_peel_return = gtk_text_iter_get_paintable (_peel_this);
    return reinterpret_cast<Gdk::Paintable *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::String
  get_slice (const TextIter *end) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    char *_peel_return = gtk_text_iter_get_slice (_peel_this, _peel_end);
    return peel::String::adopt_string (_peel_return);
  }

  GLib::SList<TextTag *>
  get_tags () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    GSList *_peel_return = gtk_text_iter_get_tags (_peel_this);
    return GLib::SList<TextTag *>::adopt_list (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::String
  get_text (const TextIter *end) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    char *_peel_return = gtk_text_iter_get_text (_peel_this, _peel_end);
    return peel::String::adopt_string (_peel_return);
  }

  GLib::SList<TextTag *>
  get_toggled_tags (bool toggled_on) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_toggled_on = static_cast<gboolean> (toggled_on);
    GSList *_peel_return = gtk_text_iter_get_toggled_tags (_peel_this, _peel_toggled_on);
    return GLib::SList<TextTag *>::adopt_list (_peel_return);
  }

  int
  get_visible_line_index () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_visible_line_index (_peel_this);
  }

  int
  get_visible_line_offset () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    return gtk_text_iter_get_visible_line_offset (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::String
  get_visible_slice (const TextIter *end) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    char *_peel_return = gtk_text_iter_get_visible_slice (_peel_this, _peel_end);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::String
  get_visible_text (const TextIter *end) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    char *_peel_return = gtk_text_iter_get_visible_text (_peel_this, _peel_end);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_tag (TextTag *tag) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_iter_has_tag (_peel_this, _peel_tag);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  in_range (const TextIter *start, const TextIter *end) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gboolean _peel_return = gtk_text_iter_in_range (_peel_this, _peel_start, _peel_end);
    return !!_peel_return;
  }

  bool
  inside_sentence () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_inside_sentence (_peel_this);
    return !!_peel_return;
  }

  bool
  inside_word () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_inside_word (_peel_this);
    return !!_peel_return;
  }

  bool
  is_cursor_position () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_is_cursor_position (_peel_this);
    return !!_peel_return;
  }

  bool
  is_end () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_is_end (_peel_this);
    return !!_peel_return;
  }

  bool
  is_start () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_is_start (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  order (TextIter *second) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    ::GtkTextIter *_peel_second = reinterpret_cast<::GtkTextIter *> (second);
    gtk_text_iter_order (_peel_this, _peel_second);
  }

  void
  set_line (int line_number) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_set_line (_peel_this, line_number);
  }

  void
  set_line_index (int byte_on_line) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_set_line_index (_peel_this, byte_on_line);
  }

  void
  set_line_offset (int char_on_line) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_set_line_offset (_peel_this, char_on_line);
  }

  void
  set_offset (int char_offset) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_set_offset (_peel_this, char_offset);
  }

  void
  set_visible_line_index (int byte_on_line) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_set_visible_line_index (_peel_this, byte_on_line);
  }

  void
  set_visible_line_offset (int char_on_line) noexcept
  {
    ::GtkTextIter *_peel_this = reinterpret_cast<::GtkTextIter *> (this);
    gtk_text_iter_set_visible_line_offset (_peel_this, char_on_line);
  }

  bool
  starts_line () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_starts_line (_peel_this);
    return !!_peel_return;
  }

  bool
  starts_sentence () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_starts_sentence (_peel_this);
    return !!_peel_return;
  }

  bool
  starts_tag (TextTag *tag) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_iter_starts_tag (_peel_this, _peel_tag);
    return !!_peel_return;
  }

  bool
  starts_word () const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    gboolean _peel_return = gtk_text_iter_starts_word (_peel_this);
    return !!_peel_return;
  }

  bool
  toggles_tag (TextTag *tag) const noexcept
  {
    const ::GtkTextIter *_peel_this = reinterpret_cast<const ::GtkTextIter *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_iter_toggles_tag (_peel_this, _peel_tag);
    return !!_peel_return;
  }
}; /* record TextIter */

static_assert (sizeof (TextIter) == sizeof (::GtkTextIter),
               "TextIter size mismatch");
static_assert (alignof (TextIter) == alignof (::GtkTextIter),
               "TextIter align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TextMark.h>
#include <peel/Gtk/TextTag.h>
#include <peel/Pango/Language.h>
