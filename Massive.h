#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>
#pragma once

class massive {

    private:
        size_t _size;
        uint64_t* _array;

    public:
        massive() {
            _size = 5;
            _array = new uint64_t[_size];
            for (int i = 0; i < _size; i++) {
                _array[i] = i+2;
            }
        }

        massive(size_t size) {
            _size = size;
            _array = new uint64_t[_size];
            for (int i = 0; i < _size; i++) {
                _array[i] = i+2;
            }
        }

        void Print() {
            std::vector<uint64_t> vec;
            for (int i = 0; i < _size; i++) {
                vec[i] = _array[i];
                std::cout << vec[i] << std::endl;
            }
        }

        void GetPriority() {
            std::vector<uint64_t> vec (_size);
            int count = 0;

            for (int i = 0; i < _size; i++) {
                if (_array[i] != 0) {
                    int p = _array[i];
                    for (int j = i+1; j < _size; j++) {
                        if (_array[j] % p == 0) {
                            _array[j] = 0;
                        }
                    }
                    vec[count] = p;
                    count++;
                }
            }

            for (int i = 0; i < count; i++) {
                std::cout << vec[i] << std::endl;
            }
        }

        ~massive() {
            delete _array;
        }


};