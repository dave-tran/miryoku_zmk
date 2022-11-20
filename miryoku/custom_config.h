// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/ {
  macros {
ZMK_MACRO(abc,
          wait-ms = <30>;
          tap-ms = <40>;
          bindings = <&kp A &kp AT &kp B &kp C &kp RET>;
          )
  };
};

