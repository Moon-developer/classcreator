# classcreator

create skeleton c++ files in coplien/canonical standard
#### note: this is for zsh shell

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

you can creat a new Parent class that all child classes will inherit from.
This will create Child1,Child2 and a new Parent class that the child will inherit from.
```
createclass -i NewParent Child1 Child2
```

you can add an existing parent class using the -p flag that will will create Child1 and Child2 which will inherit from exisiting Parent.
```
createclass -p Parent Child1 Child2
```
#### note: only use the one flag at a time
