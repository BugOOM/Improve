cmake_minimum_required(VERSION 3.16)
project(Improve)

set(CMAKE_CXX_STANDARD 14)

add_executable(Improve this/main.cpp)
#
#add_executable(01_const const/01_const.cpp)
##add_executable(file2 const/file2.cpp const/file.cpp)
#add_executable(define const/define.cpp)
#add_executable(pointer const/pointer.cpp)
#add_executable(function_return const/function_return.cpp)
#add_executable(apple const/apple.cpp)
add_executable(static static/static.cpp)
add_executable(static1 static/static1.cpp)
add_executable(static_obj static/static_obj.cpp)
add_executable(source2 static/source2.cpp static/source1.cpp)
add_executable(test inline/test.cpp)
add_executable(test1 decltype/test1.cpp)
add_executable(test2 enum/test2.cpp)
add_executable(test3 decltype/test3.cpp)
add_executable(test4 virtual/test4.cpp)
add_executable(test5 sizeof/test5.cpp)
add_executable(test6 sizeof/test6.cpp)
add_executable(other other.cpp)

add_executable(add extern/add.cpp extern/add.c)
add_executable(sum extern/sum.c extern/sum.cpp)
add_executable(ctype struct/ctype.c)
add_executable(cpptype struct/cpptype.cpp)
add_executable(ffff friend/function.cpp)
add_executable(obj friend/obj.cpp)

add_executable(01_array stl/01_array.cpp)
add_executable(01_array1 stl/02_array.cpp)
add_executable(02_array stl/02_array.cpp)
add_executable(03_vector stl/03_vector.cpp)
add_executable(04_ebo stl/04_ebo.cpp)
add_executable(05_trait stl/05_trait.cpp)
add_executable(06_trait stl/06_trait.cpp)
add_executable(07_iterator stl/07_iterator.cpp)
add_executable(04_list stl/04_list.cpp)
add_executable(08_deque stl/08_deque.cpp)

LINK_LIBRARIES(m)
add_executable(tt stl/tt.cpp)
add_executable(09_hash stl/09_hash.cpp)
add_executable(10_rbtree stl/10_rbtree.cpp)
add_executable(09_myhash 09_myhash.cpp)