# Cpp-cheat-sheet
a basic c++ cheat sheet 
### Testing

All the functions of this Cheat Sheet can be tested in this program.

```sh
$ ./test
```

### Vector

Dillinger is currently extended with the following plugins. Instructions on how to use them in your own application are linked below.

| Method / Function | Description |
| ------ | ------ |
| std::vector<<std::string>> n; | Init a vector of strings.|
| n.push_back("test"); | Insert the string "test" in the vector. |
| n.size(); | Return the size of the vector |
| n.erase(n.end()); | Erase the last element of the vector. |
| vec.clear(); | Erase all the element of the vector. |
|vec.capacity(); | Return the number of elements allocated. |
|vec.max_size(); | Return the maximum elements of vector. |
|vec.empty();    | Return true if the vector is empty else return false. |
|vec.swap(vec1); | Swap the elements of vec and vec1. |

See more: https://www.geeksforgeeks.org/vector-in-cpp-stl/
