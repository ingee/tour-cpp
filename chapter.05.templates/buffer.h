template<typename T, int N>
struct Buffer {
  using value_type = T;
  constexpr int size() const { return N; }
  T buf[N];
};
