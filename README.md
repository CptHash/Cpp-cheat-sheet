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
| n.size() | Return the size of the vector |
| n.erase(n.end()) | Erase the last element of the vector. |
| vec.clear() | Erase all the element of the vector. |

See more: https://www.geeksforgeeks.org/vector-in-cpp-stl/
