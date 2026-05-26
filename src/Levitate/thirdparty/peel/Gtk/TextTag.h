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
struct RGBA;
} /* namespace Gdk */

namespace Gtk
{
enum class Justification : std::underlying_type<::GtkJustification>::type;
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type;
class TextTag;
enum class WrapMode : std::underlying_type<::GtkWrapMode>::type;
} /* namespace Gtk */

namespace Pango
{
class /* record */ FontDescription;
enum class Overline : std::underlying_type<::PangoOverline>::type;
enum class ShowFlags : std::underlying_type<::PangoShowFlags>::type;
enum class Stretch : std::underlying_type<::PangoStretch>::type;
enum class Style : std::underlying_type<::PangoStyle>::type;
class /* record */ TabArray;
enum class TextTransform : std::underlying_type<::PangoTextTransform>::type;
enum class Underline : std::underlying_type<::PangoUnderline>::type;
enum class Variant : std::underlying_type<::PangoVariant>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextTag> ()
{
  return gtk_text_tag_get_type ();
}


namespace Gtk
{
class TextTag : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GtkTextTag) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextTag () = delete;
  TextTag (const TextTag &) = delete;
  TextTag (TextTag &&) = delete;
  TextTag &
  operator = (const TextTag &) = delete;
  TextTag &
  operator = (TextTag &&) = delete;
protected:
  ~TextTag () = default;
public:

  static peel::RefPtr<TextTag>
  create (const char *name) noexcept
  {
    ::GtkTextTag *_peel_return = gtk_text_tag_new (name);
    peel_assume (_peel_return);
    return peel::RefPtr<TextTag>::adopt_ref (reinterpret_cast<TextTag *> (_peel_return));
  }

  void
  changed (bool size_changed) noexcept
  {
    ::GtkTextTag *_peel_this = reinterpret_cast<::GtkTextTag *> (this);
    gboolean _peel_size_changed = static_cast<gboolean> (size_changed);
    gtk_text_tag_changed (_peel_this, _peel_size_changed);
  }

  int
  get_priority () noexcept
  {
    ::GtkTextTag *_peel_this = reinterpret_cast<::GtkTextTag *> (this);
    return gtk_text_tag_get_priority (_peel_this);
  }

  void
  set_priority (int priority) noexcept
  {
    ::GtkTextTag *_peel_this = reinterpret_cast<::GtkTextTag *> (this);
    gtk_text_tag_set_priority (_peel_this, priority);
  }

  static peel::Property<bool>
  prop_accumulative_margin ()
  {
    return peel::Property<bool> { "accumulative-margin" };
  }

  static peel::Property<bool>
  prop_allow_breaks ()
  {
    return peel::Property<bool> { "allow-breaks" };
  }

  static peel::Property<bool>
  prop_allow_breaks_set ()
  {
    return peel::Property<bool> { "allow-breaks-set" };
  }

  static peel::Property<const char *>
  prop_background ()
  {
    return peel::Property<const char *> { "background" };
  }

  static peel::Property<bool>
  prop_background_full_height ()
  {
    return peel::Property<bool> { "background-full-height" };
  }

  static peel::Property<bool>
  prop_background_full_height_set ()
  {
    return peel::Property<bool> { "background-full-height-set" };
  }

  static peel::Property<Gdk::RGBA>
  prop_background_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "background-rgba" };
  }

  static peel::Property<bool>
  prop_background_set ()
  {
    return peel::Property<bool> { "background-set" };
  }

  static peel::Property<TextDirection>
  prop_direction ()
  {
    return peel::Property<TextDirection> { "direction" };
  }

  static peel::Property<bool>
  prop_editable ()
  {
    return peel::Property<bool> { "editable" };
  }

  static peel::Property<bool>
  prop_editable_set ()
  {
    return peel::Property<bool> { "editable-set" };
  }

  static peel::Property<bool>
  prop_fallback ()
  {
    return peel::Property<bool> { "fallback" };
  }

  static peel::Property<bool>
  prop_fallback_set ()
  {
    return peel::Property<bool> { "fallback-set" };
  }

  static peel::Property<const char *>
  prop_family ()
  {
    return peel::Property<const char *> { "family" };
  }

  static peel::Property<bool>
  prop_family_set ()
  {
    return peel::Property<bool> { "family-set" };
  }

  static peel::Property<const char *>
  prop_font ()
  {
    return peel::Property<const char *> { "font" };
  }

  static peel::Property<Pango::FontDescription>
  prop_font_desc ()
  {
    return peel::Property<Pango::FontDescription> { "font-desc" };
  }

  static peel::Property<const char *>
  prop_font_features ()
  {
    return peel::Property<const char *> { "font-features" };
  }

  static peel::Property<bool>
  prop_font_features_set ()
  {
    return peel::Property<bool> { "font-features-set" };
  }

  static peel::Property<const char *>
  prop_foreground ()
  {
    return peel::Property<const char *> { "foreground" };
  }

  static peel::Property<Gdk::RGBA>
  prop_foreground_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "foreground-rgba" };
  }

  static peel::Property<bool>
  prop_foreground_set ()
  {
    return peel::Property<bool> { "foreground-set" };
  }

  static peel::Property<int>
  prop_indent ()
  {
    return peel::Property<int> { "indent" };
  }

  static peel::Property<bool>
  prop_indent_set ()
  {
    return peel::Property<bool> { "indent-set" };
  }

  static peel::Property<bool>
  prop_insert_hyphens ()
  {
    return peel::Property<bool> { "insert-hyphens" };
  }

  static peel::Property<bool>
  prop_insert_hyphens_set ()
  {
    return peel::Property<bool> { "insert-hyphens-set" };
  }

  static peel::Property<bool>
  prop_invisible ()
  {
    return peel::Property<bool> { "invisible" };
  }

  static peel::Property<bool>
  prop_invisible_set ()
  {
    return peel::Property<bool> { "invisible-set" };
  }

  static peel::Property<Justification>
  prop_justification ()
  {
    return peel::Property<Justification> { "justification" };
  }

  static peel::Property<bool>
  prop_justification_set ()
  {
    return peel::Property<bool> { "justification-set" };
  }

  static peel::Property<const char *>
  prop_language ()
  {
    return peel::Property<const char *> { "language" };
  }

  static peel::Property<bool>
  prop_language_set ()
  {
    return peel::Property<bool> { "language-set" };
  }

  static peel::Property<int>
  prop_left_margin ()
  {
    return peel::Property<int> { "left-margin" };
  }

  static peel::Property<bool>
  prop_left_margin_set ()
  {
    return peel::Property<bool> { "left-margin-set" };
  }

  static peel::Property<int>
  prop_letter_spacing ()
  {
    return peel::Property<int> { "letter-spacing" };
  }

  static peel::Property<bool>
  prop_letter_spacing_set ()
  {
    return peel::Property<bool> { "letter-spacing-set" };
  }

  static peel::Property<float>
  prop_line_height ()
  {
    return peel::Property<float> { "line-height" };
  }

  static peel::Property<bool>
  prop_line_height_set ()
  {
    return peel::Property<bool> { "line-height-set" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<Pango::Overline>
  prop_overline ()
  {
    return peel::Property<Pango::Overline> { "overline" };
  }

  static peel::Property<Gdk::RGBA>
  prop_overline_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "overline-rgba" };
  }

  static peel::Property<bool>
  prop_overline_rgba_set ()
  {
    return peel::Property<bool> { "overline-rgba-set" };
  }

  static peel::Property<bool>
  prop_overline_set ()
  {
    return peel::Property<bool> { "overline-set" };
  }

  static peel::Property<const char *>
  prop_paragraph_background ()
  {
    return peel::Property<const char *> { "paragraph-background" };
  }

  static peel::Property<Gdk::RGBA>
  prop_paragraph_background_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "paragraph-background-rgba" };
  }

  static peel::Property<bool>
  prop_paragraph_background_set ()
  {
    return peel::Property<bool> { "paragraph-background-set" };
  }

  static peel::Property<int>
  prop_pixels_above_lines ()
  {
    return peel::Property<int> { "pixels-above-lines" };
  }

  static peel::Property<bool>
  prop_pixels_above_lines_set ()
  {
    return peel::Property<bool> { "pixels-above-lines-set" };
  }

  static peel::Property<int>
  prop_pixels_below_lines ()
  {
    return peel::Property<int> { "pixels-below-lines" };
  }

  static peel::Property<bool>
  prop_pixels_below_lines_set ()
  {
    return peel::Property<bool> { "pixels-below-lines-set" };
  }

  static peel::Property<int>
  prop_pixels_inside_wrap ()
  {
    return peel::Property<int> { "pixels-inside-wrap" };
  }

  static peel::Property<bool>
  prop_pixels_inside_wrap_set ()
  {
    return peel::Property<bool> { "pixels-inside-wrap-set" };
  }

  static peel::Property<int>
  prop_right_margin ()
  {
    return peel::Property<int> { "right-margin" };
  }

  static peel::Property<bool>
  prop_right_margin_set ()
  {
    return peel::Property<bool> { "right-margin-set" };
  }

  static peel::Property<int>
  prop_rise ()
  {
    return peel::Property<int> { "rise" };
  }

  static peel::Property<bool>
  prop_rise_set ()
  {
    return peel::Property<bool> { "rise-set" };
  }

  static peel::Property<double>
  prop_scale ()
  {
    return peel::Property<double> { "scale" };
  }

  static peel::Property<bool>
  prop_scale_set ()
  {
    return peel::Property<bool> { "scale-set" };
  }

  static peel::Property<bool>
  prop_sentence ()
  {
    return peel::Property<bool> { "sentence" };
  }

  static peel::Property<bool>
  prop_sentence_set ()
  {
    return peel::Property<bool> { "sentence-set" };
  }

  static peel::Property<Pango::ShowFlags>
  prop_show_spaces ()
  {
    return peel::Property<Pango::ShowFlags> { "show-spaces" };
  }

  static peel::Property<bool>
  prop_show_spaces_set ()
  {
    return peel::Property<bool> { "show-spaces-set" };
  }

  static peel::Property<int>
  prop_size ()
  {
    return peel::Property<int> { "size" };
  }

  static peel::Property<double>
  prop_size_points ()
  {
    return peel::Property<double> { "size-points" };
  }

  static peel::Property<bool>
  prop_size_set ()
  {
    return peel::Property<bool> { "size-set" };
  }

  static peel::Property<Pango::Stretch>
  prop_stretch ()
  {
    return peel::Property<Pango::Stretch> { "stretch" };
  }

  static peel::Property<bool>
  prop_stretch_set ()
  {
    return peel::Property<bool> { "stretch-set" };
  }

  static peel::Property<bool>
  prop_strikethrough ()
  {
    return peel::Property<bool> { "strikethrough" };
  }

  static peel::Property<Gdk::RGBA>
  prop_strikethrough_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "strikethrough-rgba" };
  }

  static peel::Property<bool>
  prop_strikethrough_rgba_set ()
  {
    return peel::Property<bool> { "strikethrough-rgba-set" };
  }

  static peel::Property<bool>
  prop_strikethrough_set ()
  {
    return peel::Property<bool> { "strikethrough-set" };
  }

  static peel::Property<Pango::Style>
  prop_style ()
  {
    return peel::Property<Pango::Style> { "style" };
  }

  static peel::Property<bool>
  prop_style_set ()
  {
    return peel::Property<bool> { "style-set" };
  }

  static peel::Property<Pango::TabArray>
  prop_tabs ()
  {
    return peel::Property<Pango::TabArray> { "tabs" };
  }

  static peel::Property<bool>
  prop_tabs_set ()
  {
    return peel::Property<bool> { "tabs-set" };
  }

  static peel::Property<Pango::TextTransform>
  prop_text_transform ()
  {
    return peel::Property<Pango::TextTransform> { "text-transform" };
  }

  static peel::Property<bool>
  prop_text_transform_set ()
  {
    return peel::Property<bool> { "text-transform-set" };
  }

  static peel::Property<Pango::Underline>
  prop_underline ()
  {
    return peel::Property<Pango::Underline> { "underline" };
  }

  static peel::Property<Gdk::RGBA>
  prop_underline_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "underline-rgba" };
  }

  static peel::Property<bool>
  prop_underline_rgba_set ()
  {
    return peel::Property<bool> { "underline-rgba-set" };
  }

  static peel::Property<bool>
  prop_underline_set ()
  {
    return peel::Property<bool> { "underline-set" };
  }

  static peel::Property<Pango::Variant>
  prop_variant ()
  {
    return peel::Property<Pango::Variant> { "variant" };
  }

  static peel::Property<bool>
  prop_variant_set ()
  {
    return peel::Property<bool> { "variant-set" };
  }

  static peel::Property<int>
  prop_weight ()
  {
    return peel::Property<int> { "weight" };
  }

  static peel::Property<bool>
  prop_weight_set ()
  {
    return peel::Property<bool> { "weight-set" };
  }

  static peel::Property<bool>
  prop_word ()
  {
    return peel::Property<bool> { "word" };
  }

  static peel::Property<bool>
  prop_word_set ()
  {
    return peel::Property<bool> { "word-set" };
  }

  static peel::Property<WrapMode>
  prop_wrap_mode ()
  {
    return peel::Property<WrapMode> { "wrap-mode" };
  }

  static peel::Property<bool>
  prop_wrap_mode_set ()
  {
    return peel::Property<bool> { "wrap-mode-set" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TextTag> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkTextTagClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTextTagClass),
                 "TextTag::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTextTagClass),
                 "TextTag::Class align mismatch");
}; /* class TextTag */

static_assert (sizeof (TextTag) == sizeof (::GtkTextTag),
               "TextTag size mismatch");
static_assert (alignof (TextTag) == alignof (::GtkTextTag),
               "TextTag align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
