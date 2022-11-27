#pragma once

template <typename T>
class SingleTon {
public:
	static T* instance() {
		if (m_instance == nullptr) {
			m_instance = new T();
		}
		return m_instance;
	}
private:
	SingleTon() = default;
	~SingleTon() = default;
	SingleTon(const SingleTon&);
	SingleTon& operator=(const SingleTon&) = default;
private:
	static T* m_instance;
};

template <typename T>
T* SingleTon<T>::m_instance = nullptr;