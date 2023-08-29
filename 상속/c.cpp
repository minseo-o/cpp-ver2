int sum(int x, int y)
int z = x + y;
return z;
}

template <typename T>
T sum(T x, T y) {
    T z = x + y;
    return z;
}
