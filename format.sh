find src -name \*.c -exec clang-format -i {} \;
find src -name \*.h -exec clang-format -i {} \;
find src -name \*.cc -exec clang-format -i {} \;
find src -name \*.cpp -exec clang-format -i {} \;
find src -name \*.inc  -exec clang-format -i {} \;

