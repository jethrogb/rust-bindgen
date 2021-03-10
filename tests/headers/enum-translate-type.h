// bindgen-flags: --translate-enum-integer-types

enum my_enum1 {
    A = 0,
};
enum my_enum2 {
    B = -1,
};
enum my_enum3: short {
    C = 0,
};
enum my_enum4: unsigned char {
    D = -1,
};
