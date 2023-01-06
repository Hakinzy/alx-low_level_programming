0x1A. C - Hash tables

Tests
We strongly encourage you to work all together on a set of tests

Python Dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. Read more here (not mandatory).

# TASK

## 0. >>> ht = {}
### Write a function that creates a hash table.

## 1. djb2
### Write a hash function implementing the djb2 algorithm.

## 2. key -> index
### Write a function that gives you the index of a key.

## 3. >>> ht['betty'] = 'cool'
### Write a function that adds an element to the hash table.

## 4. >>> ht['betty']
### Write a function that retrieves a value associated with a key.

## 5. >>> print(ht)
### Write a function that prints a hash table.

## 6. >>> del ht
### Write a function that deletes a hash table.

## 7. $ht['Betty'] = 'Cool'
### In PHP, hash tables are ordered. Wait… WAT? How is this even possible?
