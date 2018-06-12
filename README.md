# classcreator

## SETUP

to setup run the following commands

```
git clone https://github.com/Moondog360/classcreator.git
cd ./classcreator
chmod +x ./setup
./setup
source ~/.zshrc
```

## RUNNING THE SCRIPT

to run the cmd just type the following command and replace <classname>. Example:
```
createclass test
ls *
Test.cpp Test.hpp
```

to create multiple files
```
createclass test1 test2 test3
ls *
Test1.cpp Test1.hpp Test2.cpp Test2.hpp Test3.cpp Test3.hpp 
```

you can add a parent class with a flag that all other classes inherit from
```
createclass -i test1 test2 test3
```
will create test2 and test3 and a parent class test1 that they will inherit
*note only use the flag -i once*
