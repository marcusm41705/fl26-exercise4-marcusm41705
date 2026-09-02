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
    m_capacity = obj.m_capacity;
    m_size = obj.m_size;
    m_data = new T[m_capacity];
    for(auto i = 0; i < m_capacity; ++i){
        m_data[i] = obj.m_data[i];
    }
}

template <class T>
MyVector<T>::~MyVector() //destructor
{
    // TO DO
delete[] m_data;
}

template <class T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& obj)
{
    // TO DO
    if(this == &obj){
        return *this;
    }
    delete[] m_data;
    m_size = obj.m_size;
    m_capacity = obj.m_capacity;
    m_data = new T[m_capacity];
    for(auto i = 0; i < m_size;++i){
        m_data[i] = obj.m_data[i];
    }
    return *this;
}

template <class T>
int MyVector<T>::size()
{
    // TO DO
    return m_size;
}

template <class T>
bool MyVector<T>::empty()
{
    // TO DO
    if(m_size == 0){
        return true;
    } else {
        return false;
    }
}

template <class T>
void MyVector<T>::push_back(const T& value)
{
    // TO DO
    if(m_size == m_capacity){
        int new_cap = m_capacity *2;
        if (new_cap == 0){
            new_cap = 1;
        }
        T* new_data = new T[new_cap];
        for(int i = 0; i < m_size; ++i){
            new_data[i] = m_data[i];
        }
        delete[] m_data;
        m_data = new_data;
        m_capacity = new_cap;
    }
    m_data[m_size] =value;
    m_size++;
}

template <class T>
T& MyVector<T>::at(int i)
{
    // TO DO
    return m_data[i];
}
