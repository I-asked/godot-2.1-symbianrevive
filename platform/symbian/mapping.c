#include "tic.h"

const char KReMapping[256] = {
  ['%'] = tic_key_n,
  ['0'] = tic_key_p,
  ['1'] = tic_key_q,
  ['2'] = tic_key_w,
  ['3'] = tic_key_e,
  ['4'] = tic_key_r,
  ['5'] = tic_key_t,
  ['6'] = tic_key_y,
  ['7'] = tic_key_u,
  ['8'] = tic_key_i,
  ['9'] = tic_key_o,
  [0x79] = tic_key_comma,
  [0x7A] = tic_key_period,
  [0x7B] = tic_key_backslash,
  [0x7E] = tic_key_apostrophe,
  [0x81] = tic_key_slash,
};

const char KReMappingF[256] = {
  [0x01] = tic_key_delete,
  [0x03] = tic_key_tab,
  [0x0e] = tic_key_home,
  [0x0f] = tic_key_end,
  [0x10] = tic_key_pageup,
  [0x11] = tic_key_pagedown,
  ['0'] = tic_key_0,
  ['1'] = tic_key_1,
  ['2'] = tic_key_2,
  ['3'] = tic_key_3,
  ['4'] = tic_key_4,
  ['5'] = tic_key_5,
  ['6'] = tic_key_6,
  ['7'] = tic_key_7,
  ['8'] = tic_key_8,
  ['9'] = tic_key_9,
  [0x79] = tic_key_minus,
  [0x7A] = tic_key_equals,
  [0x7B] = tic_key_pagedown,
  [0x7E] = tic_key_semicolon,
  [0x81] = tic_key_pageup,
};

const char KReMappingS[256] = {
  [0x01] = tic_key_escape,
  ['0'] = tic_key_f10,
  ['1'] = tic_key_f1,
  ['2'] = tic_key_f2,
  ['3'] = tic_key_f3,
  ['4'] = tic_key_f4,
  ['5'] = tic_key_f5,
  ['6'] = tic_key_f6,
  ['7'] = tic_key_f7,
  ['8'] = tic_key_f8,
  [0x79] = tic_key_f11,
  [0x7A] = tic_key_f12,
  [0x7B] = tic_key_rightbracket,
  [0x7E] = tic_key_grave,
  [0x81] = tic_key_leftbracket,
};