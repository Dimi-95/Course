#pragma once

#include <cstddef>



/**
 * @brief DynamicArray Structure
 *
 * @param int* m_data
 * @param std::size_t m_length
 */
struct DynamicArray
{
    double* m_data;
    std::size_t m_length;
};


DynamicArray create_dynamic_array(const double &value, const std::size_t &length);


/**
 * @brief Push backs the *value* at the end of the array.
 *
 * @param input_array The dynamic_array.
 * @param size The size of the array.
 * @param value The value to append to the array.
 */

void push_back(DynamicArray &dynamic_array, const int &value);

/**
 * @brief Pop backs the value at the end of the array.
 *
 * @param input_array The dynamic_array.
 * @param size The size of the array.
 */

void pop_back(DynamicArray &dynamic_array);

