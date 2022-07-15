#textToNumbers

Write an executable that converts written numbers in words to digits in
the middle of a paragraph.

Examples:
* If the input is ‘one hundred and one’, the output should be ‘101’.

##linux install

1. For the CMakeLists.txt run the next commands:

```bash
mkdir build
cd build
cmake ..
make
```

2. Or for running directly on the g++ compiler:

```bash
g++ -std=c++14 -o textToNumbers cuter.cpp
./textToNumbers "three hundred and forty two"
./textToNumbers "five hundred and sixty eight"
```

## About

Doubts, comments? email me:

```bash
robertoazaar@gmail.com
```

## License

textToNumbers is released under the [MIT License](https://opensource.org/licenses/MIT).
