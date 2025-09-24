template<typename T>
class MyVector {
	private:
		T* data;
		size_t sz;
		size_t capacity;
		T val_default;
	public:
		void resize(size_t newCap) {
			T* newData = new T[newCap];
			for (size_t i = 0; i < sz; i++) {
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
			capacity = newCap;
		}
		MyVector(const size_t& size, const T& val_default) : sz(size), capacity(size), val_default(val_default) {
			data = new T[capacity];
			for (size_t i = 0; i < sz; i++) {
				data[i] = val_default;
			}
		}
		MyVector(){
			sz = 0;
			capacity = 1;
			data = new T[capacity];
		}
		~MyVector() {
			delete[] data;
		}
		size_t size() const {
			return sz;
		}
		void push_back(const T& value) {
			if (sz == capacity) {
				resize(capacity * 2);
			}
			data[sz++] = value;
		}
		T& operator[](const size_t& index) {
			return data[index];
		}
		T back() const {
			return data[sz - 1];
		}
};
