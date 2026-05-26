#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ MarkupParseContext;
struct String;
} /* namespace GLib */

namespace Pango
{
struct Analysis;
class /* record */ AttrIterator;
class /* record */ AttrList;
struct Attribute;
class Context;
enum class Direction : std::underlying_type<::PangoDirection>::type;
enum class FontScale : std::underlying_type<::PangoFontScale>::type;
struct GlyphString;
enum class Gravity : std::underlying_type<::PangoGravity>::type;
enum class GravityHint : std::underlying_type<::PangoGravityHint>::type;
struct Item;
class /* record */ Language;
struct LogAttr;
enum class Overline : std::underlying_type<::PangoOverline>::type;
struct Rectangle;
enum class ShapeFlags : std::underlying_type<::PangoShapeFlags>::type;
enum class ShowFlags : std::underlying_type<::PangoShowFlags>::type;
enum class Stretch : std::underlying_type<::PangoStretch>::type;
enum class Style : std::underlying_type<::PangoStyle>::type;
enum class TextTransform : std::underlying_type<::PangoTextTransform>::type;
enum class Underline : std::underlying_type<::PangoUnderline>::type;
enum class Variant : std::underlying_type<::PangoVariant>::type;
enum class Weight : std::underlying_type<::PangoWeight>::type;
} /* namespace Pango */


namespace Pango
{
peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_allow_breaks_new (bool allow_breaks) noexcept
{
  gboolean _peel_allow_breaks = static_cast<gboolean> (allow_breaks);
  ::PangoAttribute *_peel_return = pango_attr_allow_breaks_new (_peel_allow_breaks);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_background_alpha_new (uint16_t alpha) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_background_alpha_new (alpha);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_background_new (uint16_t red, uint16_t green, uint16_t blue) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_background_new (red, green, blue);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_baseline_shift_new (int shift) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_baseline_shift_new (shift);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (1, 3)
static void
attr_break (const char *text, int length, AttrList *attr_list, int offset, peel::ArrayRef<LogAttr> attrs) noexcept
{
  int _peel_attrs_len;
  ::PangoAttrList *_peel_attr_list = reinterpret_cast<::PangoAttrList *> (attr_list);
  ::PangoLogAttr *_peel_attrs = (_peel_attrs_len = attrs.size (), reinterpret_cast<::PangoLogAttr *> (attrs.data ()));
  pango_attr_break (text, length, _peel_attr_list, offset, _peel_attrs, _peel_attrs_len);
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_fallback_new (bool enable_fallback) noexcept
{
  gboolean _peel_enable_fallback = static_cast<gboolean> (enable_fallback);
  ::PangoAttribute *_peel_return = pango_attr_fallback_new (_peel_enable_fallback);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::UniquePtr<Attribute>
attr_family_new (const char *family) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_family_new (family);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* attr_font_desc_new moved to AttrFontDesc.new */

/* attr_font_features_new moved to AttrFontFeatures.new */

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_font_scale_new (FontScale scale) noexcept
{
  ::PangoFontScale _peel_scale = static_cast<::PangoFontScale> (scale);
  ::PangoAttribute *_peel_return = pango_attr_font_scale_new (_peel_scale);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_foreground_alpha_new (uint16_t alpha) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_foreground_alpha_new (alpha);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_foreground_new (uint16_t red, uint16_t green, uint16_t blue) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_foreground_new (red, green, blue);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_gravity_hint_new (GravityHint hint) noexcept
{
  ::PangoGravityHint _peel_hint = static_cast<::PangoGravityHint> (hint);
  ::PangoAttribute *_peel_return = pango_attr_gravity_hint_new (_peel_hint);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_gravity_new (Gravity gravity) noexcept
{
  ::PangoGravity _peel_gravity = static_cast<::PangoGravity> (gravity);
  ::PangoAttribute *_peel_return = pango_attr_gravity_new (_peel_gravity);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_insert_hyphens_new (bool insert_hyphens) noexcept
{
  gboolean _peel_insert_hyphens = static_cast<gboolean> (insert_hyphens);
  ::PangoAttribute *_peel_return = pango_attr_insert_hyphens_new (_peel_insert_hyphens);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* attr_language_new moved to AttrLanguage.new */

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_letter_spacing_new (int letter_spacing) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_letter_spacing_new (letter_spacing);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_line_height_new (double factor) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_line_height_new (factor);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_line_height_new_absolute (int height) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_line_height_new_absolute (height);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* attr_list_from_string moved to AttrList.from_string */

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_overline_color_new (uint16_t red, uint16_t green, uint16_t blue) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_overline_color_new (red, green, blue);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_overline_new (Overline overline) noexcept
{
  ::PangoOverline _peel_overline = static_cast<::PangoOverline> (overline);
  ::PangoAttribute *_peel_return = pango_attr_overline_new (_peel_overline);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_rise_new (int rise) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_rise_new (rise);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_scale_new (double scale_factor) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_scale_new (scale_factor);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_sentence_new () noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_sentence_new ();
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* attr_shape_new moved to AttrShape.new */

/* attr_shape_new_with_data moved to AttrShape.new_with_data */

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_show_new (ShowFlags flags) noexcept
{
  ::PangoShowFlags _peel_flags = static_cast<::PangoShowFlags> (flags);
  ::PangoAttribute *_peel_return = pango_attr_show_new (_peel_flags);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* attr_size_new moved to AttrSize.new */

/* attr_size_new_absolute moved to AttrSize.new_absolute */

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_stretch_new (Stretch stretch) noexcept
{
  ::PangoStretch _peel_stretch = static_cast<::PangoStretch> (stretch);
  ::PangoAttribute *_peel_return = pango_attr_stretch_new (_peel_stretch);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_strikethrough_color_new (uint16_t red, uint16_t green, uint16_t blue) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_strikethrough_color_new (red, green, blue);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_strikethrough_new (bool strikethrough) noexcept
{
  gboolean _peel_strikethrough = static_cast<gboolean> (strikethrough);
  ::PangoAttribute *_peel_return = pango_attr_strikethrough_new (_peel_strikethrough);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_style_new (Style style) noexcept
{
  ::PangoStyle _peel_style = static_cast<::PangoStyle> (style);
  ::PangoAttribute *_peel_return = pango_attr_style_new (_peel_style);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_text_transform_new (TextTransform transform) noexcept
{
  ::PangoTextTransform _peel_transform = static_cast<::PangoTextTransform> (transform);
  ::PangoAttribute *_peel_return = pango_attr_text_transform_new (_peel_transform);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* attr_type_get_name moved to AttrType.get_name */

/* attr_type_register moved to AttrType.register */

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_underline_color_new (uint16_t red, uint16_t green, uint16_t blue) noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_underline_color_new (red, green, blue);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_underline_new (Underline underline) noexcept
{
  ::PangoUnderline _peel_underline = static_cast<::PangoUnderline> (underline);
  ::PangoAttribute *_peel_return = pango_attr_underline_new (_peel_underline);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_variant_new (Variant variant) noexcept
{
  ::PangoVariant _peel_variant = static_cast<::PangoVariant> (variant);
  ::PangoAttribute *_peel_return = pango_attr_variant_new (_peel_variant);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_weight_new (Weight weight) noexcept
{
  ::PangoWeight _peel_weight = static_cast<::PangoWeight> (weight);
  ::PangoAttribute *_peel_return = pango_attr_weight_new (_peel_weight);
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

peel_no_warn_unused
static peel::UniquePtr<Attribute>
attr_word_new () noexcept
{
  ::PangoAttribute *_peel_return = pango_attr_word_new ();
  peel_assume (_peel_return);
  return peel::UniquePtr<Attribute>::adopt_ref (reinterpret_cast<Attribute *> (_peel_return));
}

/* bidi_type_for_unichar moved to BidiType.for_unichar */

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (1, 3)
static void
break_ (const char *text, int length, Analysis *analysis, peel::ArrayRef<LogAttr> attrs) noexcept
{
  int _peel_attrs_len;
  ::PangoAnalysis *_peel_analysis = reinterpret_cast<::PangoAnalysis *> (analysis);
  ::PangoLogAttr *_peel_attrs = (_peel_attrs_len = attrs.size (), reinterpret_cast<::PangoLogAttr *> (attrs.data ()));
  pango_break (text, length, _peel_analysis, _peel_attrs, _peel_attrs_len);
}

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (1)
static void
default_break (const char *text, int length, Analysis *analysis, peel::ArrayRef<LogAttr> attrs) noexcept
{
  int _peel_attrs_len;
  ::PangoAnalysis *_peel_analysis = reinterpret_cast<::PangoAnalysis *> (analysis);
  ::PangoLogAttr *_peel_attrs = (_peel_attrs_len = attrs.size (), reinterpret_cast<::PangoLogAttr *> (attrs.data ()));
  pango_default_break (text, length, _peel_analysis, _peel_attrs, _peel_attrs_len);
}

/* Unsupported for now: extents_to_pixels: no idea about ownership semantics */

peel_no_warn_unused peel_nonnull_args (1)
static Direction
find_base_dir (const char *text, int length) noexcept
{
  ::PangoDirection _peel_return = pango_find_base_dir (text, length);
  return static_cast<Direction> (_peel_return);
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
static void
find_paragraph_boundary (const char *text, int length, int *paragraph_delimiter_index, int *next_paragraph_start) noexcept
{
  pango_find_paragraph_boundary (text, length, paragraph_delimiter_index, next_paragraph_start);
}

/* font_description_from_string moved to FontDescription.from_string */

peel_no_warn_unused peel_arg_in (4) peel_nonnull_args (1, 4)
static void
get_log_attrs (const char *text, int length, int level, Language *language, peel::ArrayRef<LogAttr> attrs) noexcept
{
  int _peel_attrs_len;
  ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
  ::PangoLogAttr *_peel_attrs = (_peel_attrs_len = attrs.size (), reinterpret_cast<::PangoLogAttr *> (attrs.data ()));
  pango_get_log_attrs (text, length, level, _peel_language, _peel_attrs, _peel_attrs_len);
}

peel_no_warn_unused peel_arg_out (2)
static bool
get_mirror_char (gunichar ch, gunichar *mirrored_ch) noexcept
{
  gboolean _peel_return = pango_get_mirror_char (ch, mirrored_ch);
  return !!_peel_return;
}

/* gravity_get_for_matrix moved to Gravity.get_for_matrix */

/* gravity_get_for_script moved to Gravity.get_for_script */

/* gravity_get_for_script_and_width moved to Gravity.get_for_script_and_width */

/* gravity_to_rotation moved to Gravity.to_rotation */

peel_no_warn_unused
static bool
is_zero_width (gunichar ch) noexcept
{
  gboolean _peel_return = pango_is_zero_width (ch);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (1, 2, 5)
static GLib::List<Item>
itemize (Context *context, const char *text, int start_index, int length, AttrList *attrs, AttrIterator *cached_iter) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
  ::PangoAttrIterator *_peel_cached_iter = reinterpret_cast<::PangoAttrIterator *> (cached_iter);
  GList *_peel_return = pango_itemize (_peel_context, text, start_index, length, _peel_attrs, _peel_cached_iter);
  return GLib::List<Item>::adopt_list (_peel_return);
}

peel_no_warn_unused peel_arg_in (6) peel_arg_in (7) peel_nonnull_args (1, 3, 6)
static GLib::List<Item>
itemize_with_base_dir (Context *context, Direction base_dir, const char *text, int start_index, int length, AttrList *attrs, AttrIterator *cached_iter) noexcept
{
  ::PangoContext *_peel_context = reinterpret_cast<::PangoContext *> (context);
  ::PangoDirection _peel_base_dir = static_cast<::PangoDirection> (base_dir);
  ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
  ::PangoAttrIterator *_peel_cached_iter = reinterpret_cast<::PangoAttrIterator *> (cached_iter);
  GList *_peel_return = pango_itemize_with_base_dir (_peel_context, _peel_base_dir, text, start_index, length, _peel_attrs, _peel_cached_iter);
  return GLib::List<Item>::adopt_list (_peel_return);
}

/* language_from_string moved to Language.from_string */

/* language_get_default moved to Language.get_default */

/* language_get_preferred moved to Language.get_preferred */

/* layout_deserialize_error_quark moved to LayoutDeserializeError.quark */

/* Unsupported for now: log2vis_get_embedding_levels: explicitly skipped */

peel_no_warn_unused peel_arg_in (1) peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
static bool
markup_parser_finish (GLib::MarkupParseContext *context, peel::RefPtr<AttrList> *attr_list, peel::String *text, gunichar *accel_char, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GMarkupParseContext *_peel_context = reinterpret_cast<::GMarkupParseContext *> (context);
  ::PangoAttrList *_peel_attr_list;
  char *_peel_text;
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = pango_markup_parser_finish (_peel_context, attr_list ? &_peel_attr_list : nullptr, text ? &_peel_text : nullptr, accel_char, &_peel_error);
  if (_peel_error)
    {
      if (error)
        *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
      else
        g_error_free (_peel_error);
    }
  else
    {
      if (error)
        *error = nullptr;
      if (attr_list)
        *attr_list = peel::RefPtr<AttrList>::adopt_ref (reinterpret_cast<AttrList *> (_peel_attr_list));
      if (text)
        *text = peel::String::adopt_string (_peel_text);
    }
  return !!_peel_return;
}

peel_no_warn_unused peel_returns_nonnull
static GLib::MarkupParseContext *
markup_parser_new (gunichar accel_marker) noexcept
{
  ::GMarkupParseContext *_peel_return = pango_markup_parser_new (accel_marker);
  peel_assume (_peel_return);
  return reinterpret_cast<GLib::MarkupParseContext *> (_peel_return);
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (5)
static bool
parse_enum (GObject::Type type, const char *str, int *value, bool warn, peel::String *possible_values) noexcept
{
  gboolean _peel_warn = static_cast<gboolean> (warn);
  char *_peel_possible_values;
  gboolean _peel_return = pango_parse_enum (type, str, value, _peel_warn, possible_values ? &_peel_possible_values : nullptr);
  if (possible_values)
    *possible_values = peel::String::adopt_string (_peel_possible_values);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (1)
static bool
parse_markup (const char *markup_text, int length, gunichar accel_marker, peel::RefPtr<AttrList> *attr_list, peel::String *text, gunichar *accel_char, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::PangoAttrList *_peel_attr_list;
  char *_peel_text;
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = pango_parse_markup (markup_text, length, accel_marker, attr_list ? &_peel_attr_list : nullptr, text ? &_peel_text : nullptr, accel_char, &_peel_error);
  if (_peel_error)
    {
      if (error)
        *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
      else
        g_error_free (_peel_error);
    }
  else
    {
      if (error)
        *error = nullptr;
      if (attr_list)
        *attr_list = peel::RefPtr<AttrList>::adopt_ref (reinterpret_cast<AttrList *> (_peel_attr_list));
      if (text)
        *text = peel::String::adopt_string (_peel_text);
    }
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1, 2)
static bool
parse_stretch (const char *str, Stretch *stretch, bool warn) noexcept
{
  ::PangoStretch *_peel_stretch = reinterpret_cast<::PangoStretch *> (stretch);
  gboolean _peel_warn = static_cast<gboolean> (warn);
  gboolean _peel_return = pango_parse_stretch (str, _peel_stretch, _peel_warn);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1, 2)
static bool
parse_style (const char *str, Style *style, bool warn) noexcept
{
  ::PangoStyle *_peel_style = reinterpret_cast<::PangoStyle *> (style);
  gboolean _peel_warn = static_cast<gboolean> (warn);
  gboolean _peel_return = pango_parse_style (str, _peel_style, _peel_warn);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1, 2)
static bool
parse_variant (const char *str, Variant *variant, bool warn) noexcept
{
  ::PangoVariant *_peel_variant = reinterpret_cast<::PangoVariant *> (variant);
  gboolean _peel_warn = static_cast<gboolean> (warn);
  gboolean _peel_return = pango_parse_variant (str, _peel_variant, _peel_warn);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1, 2)
static bool
parse_weight (const char *str, Weight *weight, bool warn) noexcept
{
  ::PangoWeight *_peel_weight = reinterpret_cast<::PangoWeight *> (weight);
  gboolean _peel_warn = static_cast<gboolean> (warn);
  gboolean _peel_return = pango_parse_weight (str, _peel_weight, _peel_warn);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_inout (1) peel_arg_inout (2) peel_nonnull_args (1, 2)
static void
quantize_line_geometry (int *thickness, int *position) noexcept
{
  pango_quantize_line_geometry (thickness, position);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (2)
static int
read_line (FILE *stream, GLib::String *str) noexcept
{
  ::GString *_peel_str = reinterpret_cast<::GString *> (str);
  return pango_read_line (stream, _peel_str);
}

peel_no_warn_unused
static GLib::List<Item>
reorder_items (GLib::ListRef<const Item> items) noexcept
{
  GList *_peel_items = items.raw_list ();
  GList *_peel_return = pango_reorder_items (_peel_items);
  return GLib::List<Item>::adopt_list (_peel_return);
}

peel_no_warn_unused peel_arg_inout (1) peel_arg_out (2) peel_nonnull_args (1, 2)
static bool
scan_int (const char **pos, int *out) noexcept
{
  gboolean _peel_return = pango_scan_int (pos, out);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_inout (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static bool
scan_string (const char **pos, GLib::String *out) noexcept
{
  ::GString *_peel_out = reinterpret_cast<::GString *> (out);
  gboolean _peel_return = pango_scan_string (pos, _peel_out);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_inout (1) peel_arg_in (2) peel_nonnull_args (1, 2)
static bool
scan_word (const char **pos, GLib::String *out) noexcept
{
  ::GString *_peel_out = reinterpret_cast<::GString *> (out);
  gboolean _peel_return = pango_scan_word (pos, _peel_out);
  return !!_peel_return;
}

/* script_for_unichar moved to Script.for_unichar */

/* script_get_sample_language moved to Script.get_sample_language */

peel_no_warn_unused peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (1, 3, 4)
static void
shape (const char *text, int length, const Analysis *analysis, GlyphString *glyphs) noexcept
{
  const ::PangoAnalysis *_peel_analysis = reinterpret_cast<const ::PangoAnalysis *> (analysis);
  ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
  pango_shape (text, length, _peel_analysis, _peel_glyphs);
}

peel_no_warn_unused peel_arg_in (5) peel_arg_out (6) peel_nonnull_args (1, 5, 6)
static void
shape_full (const char *item_text, int item_length, const char *paragraph_text, int paragraph_length, const Analysis *analysis, GlyphString *glyphs) noexcept
{
  const ::PangoAnalysis *_peel_analysis = reinterpret_cast<const ::PangoAnalysis *> (analysis);
  ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
  pango_shape_full (item_text, item_length, paragraph_text, paragraph_length, _peel_analysis, _peel_glyphs);
}

peel_no_warn_unused peel_arg_in (1) peel_arg_in (4) peel_arg_out (5) peel_nonnull_args (1, 5)
static void
shape_item (Item *item, const char *paragraph_text, int paragraph_length, LogAttr *log_attrs, GlyphString *glyphs, ShapeFlags flags) noexcept
{
  ::PangoItem *_peel_item = reinterpret_cast<::PangoItem *> (item);
  ::PangoLogAttr *_peel_log_attrs = reinterpret_cast<::PangoLogAttr *> (log_attrs);
  ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
  ::PangoShapeFlags _peel_flags = static_cast<::PangoShapeFlags> (flags);
  pango_shape_item (_peel_item, paragraph_text, paragraph_length, _peel_log_attrs, _peel_glyphs, _peel_flags);
}

peel_no_warn_unused peel_arg_in (5) peel_arg_out (6) peel_nonnull_args (1, 5, 6)
static void
shape_with_flags (const char *item_text, int item_length, const char *paragraph_text, int paragraph_length, const Analysis *analysis, GlyphString *glyphs, ShapeFlags flags) noexcept
{
  const ::PangoAnalysis *_peel_analysis = reinterpret_cast<const ::PangoAnalysis *> (analysis);
  ::PangoGlyphString *_peel_glyphs = reinterpret_cast<::PangoGlyphString *> (glyphs);
  ::PangoShapeFlags _peel_flags = static_cast<::PangoShapeFlags> (flags);
  pango_shape_with_flags (item_text, item_length, paragraph_text, paragraph_length, _peel_analysis, _peel_glyphs, _peel_flags);
}

peel_no_warn_unused peel_arg_inout (1) peel_nonnull_args (1)
static bool
skip_space (const char **pos) noexcept
{
  gboolean _peel_return = pango_skip_space (pos);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::Strv
split_file_list (const char *str) noexcept
{
  char **_peel_return = pango_split_file_list (str);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

/* tab_array_from_string moved to TabArray.from_string */

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (1, 3)
static void
tailor_break (const char *text, int length, Analysis *analysis, int offset, peel::ArrayRef<LogAttr> attrs) noexcept
{
  int _peel_attrs_len;
  ::PangoAnalysis *_peel_analysis = reinterpret_cast<::PangoAnalysis *> (analysis);
  ::PangoLogAttr *_peel_attrs = (_peel_attrs_len = attrs.size (), reinterpret_cast<::PangoLogAttr *> (attrs.data ()));
  pango_tailor_break (text, length, _peel_analysis, offset, _peel_attrs, _peel_attrs_len);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
trim_string (const char *str) noexcept
{
  char *_peel_return = pango_trim_string (str);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static Direction
unichar_direction (gunichar ch) noexcept
{
  ::PangoDirection _peel_return = pango_unichar_direction (ch);
  return static_cast<Direction> (_peel_return);
}

peel_no_warn_unused
static int
units_from_double (double d) noexcept
{
  return pango_units_from_double (d);
}

peel_no_warn_unused
static double
units_to_double (int i) noexcept
{
  return pango_units_to_double (i);
}

peel_no_warn_unused
static int
version () noexcept
{
  return pango_version ();
}

peel_no_warn_unused
static const char *
version_check (int required_major, int required_minor, int required_micro) noexcept
{
  return pango_version_check (required_major, required_minor, required_micro);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
version_string () noexcept
{
  return pango_version_string ();
}



} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/MarkupParseContext.h>
#include <peel/GLib/String.h>
#include <peel/Pango/Analysis.h>
#include <peel/Pango/AttrIterator.h>
#include <peel/Pango/AttrList.h>
#include <peel/Pango/Attribute.h>
#include <peel/Pango/Context.h>
#include <peel/Pango/Direction.h>
#include <peel/Pango/FontScale.h>
#include <peel/Pango/GlyphString.h>
#include <peel/Pango/Gravity.h>
#include <peel/Pango/GravityHint.h>
#include <peel/Pango/Item.h>
#include <peel/Pango/Language.h>
#include <peel/Pango/LogAttr.h>
#include <peel/Pango/Overline.h>
#include <peel/Pango/Rectangle.h>
#include <peel/Pango/ShapeFlags.h>
#include <peel/Pango/ShowFlags.h>
#include <peel/Pango/Stretch.h>
#include <peel/Pango/Style.h>
#include <peel/Pango/TextTransform.h>
#include <peel/Pango/Underline.h>
#include <peel/Pango/Variant.h>
#include <peel/Pango/Weight.h>
