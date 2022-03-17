# CMake generated Testfile for 
# Source directory: C:/Users/Marty/Documents/STUDIA/KWTM/project/src
# Build directory: C:/Users/Marty/Documents/STUDIA/KWTM/project/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(LaborkaPodstawowyTest "Laborka")
set_tests_properties(LaborkaPodstawowyTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Marty/Documents/STUDIA/KWTM/project/src/CMakeLists.txt;23;add_test;C:/Users/Marty/Documents/STUDIA/KWTM/project/src/CMakeLists.txt;0;")
add_test(LaborkaWynikSin45 "Laborka" "45")
set_tests_properties(LaborkaWynikSin45 PROPERTIES  PASS_REGULAR_EXPRESSION "0[.,]70710" _BACKTRACE_TRIPLES "C:/Users/Marty/Documents/STUDIA/KWTM/project/src/CMakeLists.txt;24;add_test;C:/Users/Marty/Documents/STUDIA/KWTM/project/src/CMakeLists.txt;0;")
add_test(Laborka3sek "Laborka")
set_tests_properties(Laborka3sek PROPERTIES  TIMEOUT "3" _BACKTRACE_TRIPLES "C:/Users/Marty/Documents/STUDIA/KWTM/project/src/CMakeLists.txt;26;add_test;C:/Users/Marty/Documents/STUDIA/KWTM/project/src/CMakeLists.txt;0;")
subdirs("Trygonometria")
