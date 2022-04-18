#include <codec2/codec2.h>

int main() {
  struct CODEC2* p = codec2_create(CODEC2_MODE_3200);
  codec2_destroy(p);
  return 0;
}
