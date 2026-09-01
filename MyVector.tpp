// ECE 3574 Exercise: Templates - starter code

template <class T>
MyVector<T>::MyVector() : m_data(nullptr), m_capacity(0), m_size(0)
{
    // do nothing
}

template <class T>
MyVector<T>::MyVector(const MyVector<T> &obj)
{
    // TO DO
}

template <class T>
MyVector<T>::~MyVector()
{
    // TO DO
}

template <class T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& obj)
{
    // TO DO
}

template <class T>
int MyVector<T>::size()
{
    // TO DO
}

template <class T>
bool MyVector<T>::empty()
{
    // TO DO
}

template <class T>
void MyVector<T>::push_back(const T& value)
{
    // TO DO
}

template <class T>
T& MyVector<T>::at(int i)
{
    // TO DO
}
