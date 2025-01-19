#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<std::string> GetUniqueElems(
    const std::vector<std::string> &vec1,
    const std::vector<std::string> &vec2)
{
    std::vector<std::string> unique_elems;
    std::set<std::string> unique_elems_set;

    for (std::vector<std::string>::const_iterator it = vec1.begin(); it != vec1.end(); ++it)
        unique_elems_set.insert(*it);
    for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); ++it)
        unique_elems_set.insert(*it);

    for (std::set<std::string>::const_iterator it = unique_elems_set.begin(); it != unique_elems_set.end(); ++it)
        unique_elems.push_back(*it);

    return unique_elems;
}

int main()
{
    {
        std::cout << "Test 1" << std::endl;
        std::vector<std::string> vec1 = {"a", "b", "c"};
        std::vector<std::string> vec2 = {"b", "c", "d"};
        std::vector<std::string> unique_elems = GetUniqueElems(vec1, vec2);
        for (std::vector<std::string>::const_iterator it = unique_elems.begin(); it != unique_elems.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }

    {
        std::cout << "Test 2" << std::endl;
        std::vector<std::string> vec1 = {"a", "b", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c"};
        std::vector<std::string> vec2 = {"b", "c", "d", "c", "c", "c", "c", "c"};
        std::vector<std::string> unique_elems = GetUniqueElems(vec1, vec2);
        for (std::vector<std::string>::const_iterator it = unique_elems.begin(); it != unique_elems.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }

    {
        std::cout << "Test 3" << std::endl;
        std::vector<std::string> vec1 = {};
        std::vector<std::string> vec2 = {};
        std::vector<std::string> unique_elems = GetUniqueElems(vec1, vec2);
        for (std::vector<std::string>::const_iterator it = unique_elems.begin(); it != unique_elems.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }

    {
        std::cout << "Test 4" << std::endl;
        std::vector<std::string> vec1 = {"a"};
        std::vector<std::string> vec2 = {"b"};
        std::vector<std::string> unique_elems = GetUniqueElems(vec1, vec2);
        for (std::vector<std::string>::const_iterator it = unique_elems.begin(); it != unique_elems.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }

    {
        std::cout << "Test 5" << std::endl;
        std::vector<std::string> vec1 = {"c", "d"};
        std::vector<std::string> vec2 = {"c", "d"};
        std::vector<std::string> unique_elems = GetUniqueElems(vec1, vec2);
        for (std::vector<std::string>::const_iterator it = unique_elems.begin(); it != unique_elems.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    return 0;
}