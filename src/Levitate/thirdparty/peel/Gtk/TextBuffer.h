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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Clipboard;
class ContentProvider;
class /* interface */ Paintable;
} /* namespace Gdk */

namespace Gtk
{
class TextBuffer;
class TextChildAnchor;
struct TextIter;
class TextMark;
class TextTag;
class TextTagTable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextBuffer> ()
{
  return gtk_text_buffer_get_type ();
}


namespace Gtk
{
class TextBuffer : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GtkTextBuffer) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextBuffer () = delete;
  TextBuffer (const TextBuffer &) = delete;
  TextBuffer (TextBuffer &&) = delete;
  TextBuffer &
  operator = (const TextBuffer &) = delete;
  TextBuffer &
  operator = (TextBuffer &&) = delete;
protected:
  ~TextBuffer () = default;
public:
  enum class NotifyFlags : std::underlying_type<::GtkTextBufferNotifyFlags>::type;

  static peel::RefPtr<TextBuffer>
  create (TextTagTable *table) noexcept
  {
    ::GtkTextTagTable *_peel_table = reinterpret_cast<::GtkTextTagTable *> (table);
    ::GtkTextBuffer *_peel_return = gtk_text_buffer_new (_peel_table);
    peel_assume (_peel_return);
    return peel::RefPtr<TextBuffer>::adopt_ref (reinterpret_cast<TextBuffer *> (_peel_return));
  }

  template<typename TextBufferCommitNotify>
  unsigned
  add_commit_notify (TextBuffer::NotifyFlags flags, TextBufferCommitNotify &&commit_notify) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextBufferNotifyFlags _peel_flags = static_cast<::GtkTextBufferNotifyFlags> (flags);
    ::GtkTextBufferCommitNotify _peel_commit_notify = peel::internals::CallbackHelper<void, ::GtkTextBuffer *, ::GtkTextBufferNotifyFlags, guint, guint>::wrap_notified_callback (
      static_cast<TextBufferCommitNotify &&> (commit_notify),
      [] (::GtkTextBuffer *buffer, ::GtkTextBufferNotifyFlags flags, guint position, guint length, gpointer user_data) -> void
      {
        TextBufferCommitNotify &_peel_captured_commit_notify = *reinterpret_cast<typename std::remove_reference<TextBufferCommitNotify>::type *> (user_data);
        TextBuffer *_peel_buffer = reinterpret_cast<TextBuffer *> (buffer);
        TextBuffer::NotifyFlags _peel_flags = static_cast<TextBuffer::NotifyFlags> (flags);
        _peel_captured_commit_notify (_peel_buffer, _peel_flags, position, length);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<TextBufferCommitNotify, void, TextBuffer *, TextBuffer::NotifyFlags, unsigned, unsigned>::value);
    return gtk_text_buffer_add_commit_notify (_peel_this, _peel_flags, _peel_commit_notify, _peel_user_data, _peel_destroy);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  add_mark (TextMark *mark, const TextIter *where) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    const ::GtkTextIter *_peel_where = reinterpret_cast<const ::GtkTextIter *> (where);
    gtk_text_buffer_add_mark (_peel_this, _peel_mark, _peel_where);
  }

  peel_nonnull_args (2)
  void
  add_selection_clipboard (Gdk::Clipboard *clipboard) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    gtk_text_buffer_add_selection_clipboard (_peel_this, _peel_clipboard);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  apply_tag (TextTag *tag, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gtk_text_buffer_apply_tag (_peel_this, _peel_tag, _peel_start, _peel_end);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  apply_tag_by_name (const char *name, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gtk_text_buffer_apply_tag_by_name (_peel_this, name, _peel_start, _peel_end);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  backspace (TextIter *iter, bool interactive, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_interactive = static_cast<gboolean> (interactive);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gboolean _peel_return = gtk_text_buffer_backspace (_peel_this, _peel_iter, _peel_interactive, _peel_default_editable);
    return !!_peel_return;
  }

  void
  begin_irreversible_action () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_begin_irreversible_action (_peel_this);
  }

  void
  begin_user_action () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_begin_user_action (_peel_this);
  }

  peel_nonnull_args (2)
  void
  copy_clipboard (Gdk::Clipboard *clipboard) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    gtk_text_buffer_copy_clipboard (_peel_this, _peel_clipboard);
  }

  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  TextChildAnchor *
  create_child_anchor (TextIter *iter) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GtkTextChildAnchor *_peel_return = gtk_text_buffer_create_child_anchor (_peel_this, _peel_iter);
    peel_assume (_peel_return);
    return reinterpret_cast<TextChildAnchor *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (3) peel_returns_nonnull
  TextMark *
  create_mark (const char *mark_name, const TextIter *where, bool left_gravity) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_where = reinterpret_cast<const ::GtkTextIter *> (where);
    gboolean _peel_left_gravity = static_cast<gboolean> (left_gravity);
    ::GtkTextMark *_peel_return = gtk_text_buffer_create_mark (_peel_this, mark_name, _peel_where, _peel_left_gravity);
    peel_assume (_peel_return);
    return reinterpret_cast<TextMark *> (_peel_return);
  }

  template<typename... Args>
  peel_returns_nonnull
  TextTag *
  create_tag (const char *tag_name, Args &&...args) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextTag *_peel_return = peel::internals::ObjectCreateHelper<Args...>::template invoke<::GtkTextTag *, decltype (gtk_text_buffer_create_tag) *, ::GtkTextBuffer *, const char *> (gtk_text_buffer_create_tag, _peel_this, tag_name, std::forward<Args> (args)...);
    peel_assume (_peel_return);
    return reinterpret_cast<TextTag *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  cut_clipboard (Gdk::Clipboard *clipboard, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gtk_text_buffer_cut_clipboard (_peel_this, _peel_clipboard, _peel_default_editable);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  delete_ (TextIter *start, TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_start = reinterpret_cast<::GtkTextIter *> (start);
    ::GtkTextIter *_peel_end = reinterpret_cast<::GtkTextIter *> (end);
    gtk_text_buffer_delete (_peel_this, _peel_start, _peel_end);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  delete_interactive (TextIter *start_iter, TextIter *end_iter, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_start_iter = reinterpret_cast<::GtkTextIter *> (start_iter);
    ::GtkTextIter *_peel_end_iter = reinterpret_cast<::GtkTextIter *> (end_iter);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gboolean _peel_return = gtk_text_buffer_delete_interactive (_peel_this, _peel_start_iter, _peel_end_iter, _peel_default_editable);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  delete_mark (TextMark *mark) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    gtk_text_buffer_delete_mark (_peel_this, _peel_mark);
  }

  peel_nonnull_args (2)
  void
  delete_mark_by_name (const char *name) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_delete_mark_by_name (_peel_this, name);
  }

  bool
  delete_selection (bool interactive, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_interactive = static_cast<gboolean> (interactive);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gboolean _peel_return = gtk_text_buffer_delete_selection (_peel_this, _peel_interactive, _peel_default_editable);
    return !!_peel_return;
  }

  void
  end_irreversible_action () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_end_irreversible_action (_peel_this);
  }

  void
  end_user_action () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_end_user_action (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_bounds (TextIter *start, TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_start = reinterpret_cast<::GtkTextIter *> (start);
    ::GtkTextIter *_peel_end = reinterpret_cast<::GtkTextIter *> (end);
    gtk_text_buffer_get_bounds (_peel_this, _peel_start, _peel_end);
  }

  bool
  get_can_redo () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_return = gtk_text_buffer_get_can_redo (_peel_this);
    return !!_peel_return;
  }

  bool
  get_can_undo () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_return = gtk_text_buffer_get_can_undo (_peel_this);
    return !!_peel_return;
  }

  int
  get_char_count () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    return gtk_text_buffer_get_char_count (_peel_this);
  }

  bool
  get_enable_undo () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_return = gtk_text_buffer_get_enable_undo (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_end_iter (TextIter *iter) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gtk_text_buffer_get_end_iter (_peel_this, _peel_iter);
  }

  bool
  get_has_selection () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_return = gtk_text_buffer_get_has_selection (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  TextMark *
  get_insert () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_return = gtk_text_buffer_get_insert (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TextMark *> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2, 3)
  void
  get_iter_at_child_anchor (TextIter *iter, TextChildAnchor *anchor) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GtkTextChildAnchor *_peel_anchor = reinterpret_cast<::GtkTextChildAnchor *> (anchor);
    gtk_text_buffer_get_iter_at_child_anchor (_peel_this, _peel_iter, _peel_anchor);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_iter_at_line (TextIter *iter, int line_number) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_buffer_get_iter_at_line (_peel_this, _peel_iter, line_number);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_iter_at_line_index (TextIter *iter, int line_number, int byte_index) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_buffer_get_iter_at_line_index (_peel_this, _peel_iter, line_number, byte_index);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_iter_at_line_offset (TextIter *iter, int line_number, int char_offset) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_return = gtk_text_buffer_get_iter_at_line_offset (_peel_this, _peel_iter, line_number, char_offset);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2, 3)
  void
  get_iter_at_mark (TextIter *iter, TextMark *mark) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    gtk_text_buffer_get_iter_at_mark (_peel_this, _peel_iter, _peel_mark);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_iter_at_offset (TextIter *iter, int char_offset) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gtk_text_buffer_get_iter_at_offset (_peel_this, _peel_iter, char_offset);
  }

  int
  get_line_count () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    return gtk_text_buffer_get_line_count (_peel_this);
  }

  peel_nonnull_args (2)
  TextMark *
  get_mark (const char *name) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_return = gtk_text_buffer_get_mark (_peel_this, name);
    return reinterpret_cast<TextMark *> (_peel_return);
  }

  unsigned
  get_max_undo_levels () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    return gtk_text_buffer_get_max_undo_levels (_peel_this);
  }

  bool
  get_modified () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_return = gtk_text_buffer_get_modified (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  TextMark *
  get_selection_bound () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_return = gtk_text_buffer_get_selection_bound (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TextMark *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_selection_bounds (TextIter *start, TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_start = reinterpret_cast<::GtkTextIter *> (start);
    ::GtkTextIter *_peel_end = reinterpret_cast<::GtkTextIter *> (end);
    gboolean _peel_return = gtk_text_buffer_get_selection_bounds (_peel_this, _peel_start, _peel_end);
    return !!_peel_return;
  }

  peel::RefPtr<Gdk::ContentProvider>
  get_selection_content () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkContentProvider *_peel_return = gtk_text_buffer_get_selection_content (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gdk::ContentProvider>::adopt_ref (reinterpret_cast<Gdk::ContentProvider *> (_peel_return));
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::String
  get_slice (const TextIter *start, const TextIter *end, bool include_hidden_chars) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gboolean _peel_include_hidden_chars = static_cast<gboolean> (include_hidden_chars);
    char *_peel_return = gtk_text_buffer_get_slice (_peel_this, _peel_start, _peel_end, _peel_include_hidden_chars);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_start_iter (TextIter *iter) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gtk_text_buffer_get_start_iter (_peel_this, _peel_iter);
  }

  peel_returns_nonnull
  TextTagTable *
  get_tag_table () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextTagTable *_peel_return = gtk_text_buffer_get_tag_table (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TextTagTable *> (_peel_return);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::String
  get_text (const TextIter *start, const TextIter *end, bool include_hidden_chars) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gboolean _peel_include_hidden_chars = static_cast<gboolean> (include_hidden_chars);
    char *_peel_return = gtk_text_buffer_get_text (_peel_this, _peel_start, _peel_end, _peel_include_hidden_chars);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  insert (TextIter *iter, const char *text, int len) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gtk_text_buffer_insert (_peel_this, _peel_iter, text, len);
  }

  peel_nonnull_args (2)
  void
  insert_at_cursor (const char *text, int len) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_insert_at_cursor (_peel_this, text, len);
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  insert_child_anchor (TextIter *iter, TextChildAnchor *anchor) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GtkTextChildAnchor *_peel_anchor = reinterpret_cast<::GtkTextChildAnchor *> (anchor);
    gtk_text_buffer_insert_child_anchor (_peel_this, _peel_iter, _peel_anchor);
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  bool
  insert_interactive (TextIter *iter, const char *text, int len, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gboolean _peel_return = gtk_text_buffer_insert_interactive (_peel_this, _peel_iter, text, len, _peel_default_editable);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  insert_interactive_at_cursor (const char *text, int len, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gboolean _peel_return = gtk_text_buffer_insert_interactive_at_cursor (_peel_this, text, len, _peel_default_editable);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  insert_markup (TextIter *iter, const char *markup, int len) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    gtk_text_buffer_insert_markup (_peel_this, _peel_iter, markup, len);
  }

  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  insert_paintable (TextIter *iter, Gdk::Paintable *paintable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_text_buffer_insert_paintable (_peel_this, _peel_iter, _peel_paintable);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  insert_range (TextIter *iter, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gtk_text_buffer_insert_range (_peel_this, _peel_iter, _peel_start, _peel_end);
  }

  peel_arg_in (2) peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  bool
  insert_range_interactive (TextIter *iter, const TextIter *start, const TextIter *end, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gboolean _peel_return = gtk_text_buffer_insert_range_interactive (_peel_this, _peel_iter, _peel_start, _peel_end, _peel_default_editable);
    return !!_peel_return;
  }

  /* Unsupported for now: insert_with_tags: varargs */
  static void
  insert_with_tags (UnsupportedForNowToken);

  /* Unsupported for now: insert_with_tags_by_name: varargs */
  static void
  insert_with_tags_by_name (UnsupportedForNowToken);

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  move_mark (TextMark *mark, const TextIter *where) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    const ::GtkTextIter *_peel_where = reinterpret_cast<const ::GtkTextIter *> (where);
    gtk_text_buffer_move_mark (_peel_this, _peel_mark, _peel_where);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  move_mark_by_name (const char *name, const TextIter *where) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_where = reinterpret_cast<const ::GtkTextIter *> (where);
    gtk_text_buffer_move_mark_by_name (_peel_this, name, _peel_where);
  }

  peel_arg_in (3) peel_nonnull_args (2)
  void
  paste_clipboard (Gdk::Clipboard *clipboard, TextIter *override_location, bool default_editable) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    ::GtkTextIter *_peel_override_location = reinterpret_cast<::GtkTextIter *> (override_location);
    gboolean _peel_default_editable = static_cast<gboolean> (default_editable);
    gtk_text_buffer_paste_clipboard (_peel_this, _peel_clipboard, _peel_override_location, _peel_default_editable);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  place_cursor (const TextIter *where) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_where = reinterpret_cast<const ::GtkTextIter *> (where);
    gtk_text_buffer_place_cursor (_peel_this, _peel_where);
  }

  void
  redo () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_redo (_peel_this);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  remove_all_tags (const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gtk_text_buffer_remove_all_tags (_peel_this, _peel_start, _peel_end);
  }

  void
  remove_commit_notify (unsigned commit_notify_handler) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_remove_commit_notify (_peel_this, commit_notify_handler);
  }

  peel_nonnull_args (2)
  void
  remove_selection_clipboard (Gdk::Clipboard *clipboard) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    gtk_text_buffer_remove_selection_clipboard (_peel_this, _peel_clipboard);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  remove_tag (TextTag *tag, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gtk_text_buffer_remove_tag (_peel_this, _peel_tag, _peel_start, _peel_end);
  }

  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  remove_tag_by_name (const char *name, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    gtk_text_buffer_remove_tag_by_name (_peel_this, name, _peel_start, _peel_end);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  select_range (const TextIter *ins, const TextIter *bound) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_ins = reinterpret_cast<const ::GtkTextIter *> (ins);
    const ::GtkTextIter *_peel_bound = reinterpret_cast<const ::GtkTextIter *> (bound);
    gtk_text_buffer_select_range (_peel_this, _peel_ins, _peel_bound);
  }

  void
  set_enable_undo (bool enable_undo) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_enable_undo = static_cast<gboolean> (enable_undo);
    gtk_text_buffer_set_enable_undo (_peel_this, _peel_enable_undo);
  }

  void
  set_max_undo_levels (unsigned max_undo_levels) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_set_max_undo_levels (_peel_this, max_undo_levels);
  }

  void
  set_modified (bool setting) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_text_buffer_set_modified (_peel_this, _peel_setting);
  }

  peel_nonnull_args (2)
  void
  set_text (const char *text, int len) noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_set_text (_peel_this, text, len);
  }

  void
  undo () noexcept
  {
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    gtk_text_buffer_undo (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_apply_tag (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (TextTag *, const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "apply-tag", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_apply_tag (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, TextTag *, const TextIter *, const TextIter *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (TextTag *, const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "apply-tag", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_begin_user_action (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "begin-user-action", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_begin_user_action (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "begin-user-action", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_delete_range (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "delete-range", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_delete_range (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, const TextIter *, const TextIter *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "delete-range", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_end_user_action (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "end-user-action", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_end_user_action (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "end-user-action", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_child_anchor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, TextChildAnchor *)>::_peel_connect_by_name (this, "insert-child-anchor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_child_anchor (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, const TextIter *, TextChildAnchor *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, TextChildAnchor *)>::_peel_connect_by_name (this, "insert-child-anchor", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_paintable (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, Gdk::Paintable *)>::_peel_connect_by_name (this, "insert-paintable", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_paintable (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, const TextIter *, Gdk::Paintable *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, Gdk::Paintable *)>::_peel_connect_by_name (this, "insert-paintable", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_text (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, const char *, int)>::_peel_connect_by_name (this, "insert-text", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_text (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, const TextIter *, const char *, int), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, const char *, int)>::_peel_connect_by_name (this, "insert-text", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mark_deleted (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (TextMark *)>::_peel_connect_by_name (this, "mark-deleted", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mark_deleted (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, TextMark *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (TextMark *)>::_peel_connect_by_name (this, "mark-deleted", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_mark_set (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, TextMark *)>::_peel_connect_by_name (this, "mark-set", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_mark_set (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, const TextIter *, TextMark *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (const TextIter *, TextMark *)>::_peel_connect_by_name (this, "mark-set", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_modified_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "modified-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_modified_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "modified-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_paste_done (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (Gdk::Clipboard *)>::_peel_connect_by_name (this, "paste-done", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_paste_done (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, Gdk::Clipboard *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (Gdk::Clipboard *)>::_peel_connect_by_name (this, "paste-done", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_redo (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "redo", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_redo (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "redo", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_remove_tag (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void (TextTag *, const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "remove-tag", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_remove_tag (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *, TextTag *, const TextIter *, const TextIter *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void (TextTag *, const TextIter *, const TextIter *)>::_peel_connect_by_name (this, "remove-tag", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_undo (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "undo", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_undo (HandlerObject *object, void (HandlerObject::*handler_method) (TextBuffer *), bool after = false) noexcept
  {
    return Signal<TextBuffer, void ()>::_peel_connect_by_name (this, "undo", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_can_redo ()
  {
    return peel::Property<bool> { "can-redo" };
  }

  static peel::Property<bool>
  prop_can_undo ()
  {
    return peel::Property<bool> { "can-undo" };
  }

  static peel::Property<int>
  prop_cursor_position ()
  {
    return peel::Property<int> { "cursor-position" };
  }

  static peel::Property<bool>
  prop_enable_undo ()
  {
    return peel::Property<bool> { "enable-undo" };
  }

  static peel::Property<bool>
  prop_has_selection ()
  {
    return peel::Property<bool> { "has-selection" };
  }

  static peel::Property<TextTagTable>
  prop_tag_table ()
  {
    return peel::Property<TextTagTable> { "tag-table" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TextBuffer> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_apply_tag (TextTag *tag, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    _peel_class->apply_tag (_peel_this, _peel_tag, _peel_start, _peel_end);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_begin_user_action () noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    _peel_class->begin_user_action (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    _peel_class->changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_delete_range (TextIter *start, TextIter *end) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_start = reinterpret_cast<::GtkTextIter *> (start);
    ::GtkTextIter *_peel_end = reinterpret_cast<::GtkTextIter *> (end);
    _peel_class->delete_range (_peel_this, _peel_start, _peel_end);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_end_user_action () noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    _peel_class->end_user_action (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  parent_vfunc_insert_child_anchor (TextIter *iter, TextChildAnchor *anchor) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GtkTextChildAnchor *_peel_anchor = reinterpret_cast<::GtkTextChildAnchor *> (anchor);
    _peel_class->insert_child_anchor (_peel_this, _peel_iter, _peel_anchor);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  parent_vfunc_insert_paintable (TextIter *iter, Gdk::Paintable *paintable) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_iter = reinterpret_cast<::GtkTextIter *> (iter);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    _peel_class->insert_paintable (_peel_this, _peel_iter, _peel_paintable);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  parent_vfunc_insert_text (TextIter *pos, const char *new_text, int new_text_length) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextIter *_peel_pos = reinterpret_cast<::GtkTextIter *> (pos);
    _peel_class->insert_text (_peel_this, _peel_pos, new_text, new_text_length);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_mark_deleted (TextMark *mark) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    _peel_class->mark_deleted (_peel_this, _peel_mark);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2, 3)
  void
  parent_vfunc_mark_set (const TextIter *location, TextMark *mark) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    const ::GtkTextIter *_peel_location = reinterpret_cast<const ::GtkTextIter *> (location);
    ::GtkTextMark *_peel_mark = reinterpret_cast<::GtkTextMark *> (mark);
    _peel_class->mark_set (_peel_this, _peel_location, _peel_mark);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_modified_changed () noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    _peel_class->modified_changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_paste_done (Gdk::Clipboard *clipboard) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GdkClipboard *_peel_clipboard = reinterpret_cast<::GdkClipboard *> (clipboard);
    _peel_class->paste_done (_peel_this, _peel_clipboard);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_redo () noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    _peel_class->redo (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_remove_tag (TextTag *tag, const TextIter *start, const TextIter *end) noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    const ::GtkTextIter *_peel_start = reinterpret_cast<const ::GtkTextIter *> (start);
    const ::GtkTextIter *_peel_end = reinterpret_cast<const ::GtkTextIter *> (end);
    _peel_class->remove_tag (_peel_this, _peel_tag, _peel_start, _peel_end);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_undo () noexcept
  {
    ::GtkTextBufferClass *_peel_class = reinterpret_cast<::GtkTextBufferClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkTextBuffer *_peel_this = reinterpret_cast<::GtkTextBuffer *> (this);
    _peel_class->undo (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTextBufferClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_apply_tag ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->apply_tag = +[] (::GtkTextBuffer *buffer, ::GtkTextTag *tag, const ::GtkTextIter *start, const ::GtkTextIter *end) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextTag *_peel_tag = reinterpret_cast<TextTag *> (tag);
        const TextIter *_peel_start = reinterpret_cast<const TextIter *> (start);
        const TextIter *_peel_end = reinterpret_cast<const TextIter *> (end);
        _peel_this->DerivedClass::vfunc_apply_tag (_peel_tag, _peel_start, _peel_end);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_begin_user_action ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->begin_user_action = +[] (::GtkTextBuffer *buffer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_begin_user_action ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->changed = +[] (::GtkTextBuffer *buffer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_delete_range ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->delete_range = +[] (::GtkTextBuffer *buffer, ::GtkTextIter *start, ::GtkTextIter *end) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextIter *_peel_start = reinterpret_cast<TextIter *> (start);
        TextIter *_peel_end = reinterpret_cast<TextIter *> (end);
        _peel_this->DerivedClass::vfunc_delete_range (_peel_start, _peel_end);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_end_user_action ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->end_user_action = +[] (::GtkTextBuffer *buffer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_end_user_action ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_child_anchor ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->insert_child_anchor = +[] (::GtkTextBuffer *buffer, ::GtkTextIter *iter, ::GtkTextChildAnchor *anchor) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextIter *_peel_iter = reinterpret_cast<TextIter *> (iter);
        TextChildAnchor *_peel_anchor = reinterpret_cast<TextChildAnchor *> (anchor);
        _peel_this->DerivedClass::vfunc_insert_child_anchor (_peel_iter, _peel_anchor);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_paintable ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->insert_paintable = +[] (::GtkTextBuffer *buffer, ::GtkTextIter *iter, ::GdkPaintable *paintable) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextIter *_peel_iter = reinterpret_cast<TextIter *> (iter);
        Gdk::Paintable *_peel_paintable = reinterpret_cast<Gdk::Paintable *> (paintable);
        _peel_this->DerivedClass::vfunc_insert_paintable (_peel_iter, _peel_paintable);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_text ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->insert_text = +[] (::GtkTextBuffer *buffer, ::GtkTextIter *pos, const char *new_text, int new_text_length) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextIter *_peel_pos = reinterpret_cast<TextIter *> (pos);
        _peel_this->DerivedClass::vfunc_insert_text (_peel_pos, new_text, new_text_length);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mark_deleted ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->mark_deleted = +[] (::GtkTextBuffer *buffer, ::GtkTextMark *mark) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextMark *_peel_mark = reinterpret_cast<TextMark *> (mark);
        _peel_this->DerivedClass::vfunc_mark_deleted (_peel_mark);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_mark_set ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->mark_set = +[] (::GtkTextBuffer *buffer, const ::GtkTextIter *location, ::GtkTextMark *mark) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        const TextIter *_peel_location = reinterpret_cast<const TextIter *> (location);
        TextMark *_peel_mark = reinterpret_cast<TextMark *> (mark);
        _peel_this->DerivedClass::vfunc_mark_set (_peel_location, _peel_mark);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_modified_changed ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->modified_changed = +[] (::GtkTextBuffer *buffer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_modified_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_paste_done ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->paste_done = +[] (::GtkTextBuffer *buffer, ::GdkClipboard *clipboard) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        Gdk::Clipboard *_peel_clipboard = reinterpret_cast<Gdk::Clipboard *> (clipboard);
        _peel_this->DerivedClass::vfunc_paste_done (_peel_clipboard);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_redo ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->redo = +[] (::GtkTextBuffer *buffer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_redo ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_remove_tag ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->remove_tag = +[] (::GtkTextBuffer *buffer, ::GtkTextTag *tag, const ::GtkTextIter *start, const ::GtkTextIter *end) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        TextTag *_peel_tag = reinterpret_cast<TextTag *> (tag);
        const TextIter *_peel_start = reinterpret_cast<const TextIter *> (start);
        const TextIter *_peel_end = reinterpret_cast<const TextIter *> (end);
        _peel_this->DerivedClass::vfunc_remove_tag (_peel_tag, _peel_start, _peel_end);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_undo ()
    {
      ::GtkTextBufferClass *klass = reinterpret_cast<::GtkTextBufferClass *> (this);
      klass->undo = +[] (::GtkTextBuffer *buffer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (buffer);
        _peel_this->DerivedClass::vfunc_undo ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkTextBufferClass),
                 "TextBuffer::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTextBufferClass),
                 "TextBuffer::Class align mismatch");
}; /* class TextBuffer */

static_assert (sizeof (TextBuffer) == sizeof (::GtkTextBuffer),
               "TextBuffer size mismatch");
static_assert (alignof (TextBuffer) == alignof (::GtkTextBuffer),
               "TextBuffer align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/ContentProvider.h>
