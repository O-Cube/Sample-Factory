# Sample-Factory
Sample factory pattern in c++
demonstrates an example of a factory method. This method is called component defined in the Component class. This method return a concrete object which can be a window or a door.
# procedure (linux)
- clone repository
- inside folder, run make -f Makefile to build the application.
- run make -f Makefile Run to execute the application.
- make -f Makefile clean to remove executables and object files.
  Output looks as follows
  ![image](https://github.com/O-Cube/Sample-Factory/assets/65163799/af11ce62-1edb-4354-9db0-a17e4760e2b4)
# test
  - uses google test and mock framework to perform unit testing.
  - requires google test and mock framework development packages installed
# test procedure
in test folder
  - run make -f Makefile to build test application
  - make -f Makefile Run to execute test applications. This stores test coverage information in ./output directory
  - run make -f Makefile clean to delete output directory and contents together with all .gcno, .gcda files.
Generated html looks as follows
![image](https://github.com/O-Cube/Sample-Factory/assets/65163799/0553e59e-d84d-48a8-8a77-cafa30073b30)
![image](https://github.com/O-Cube/Sample-Factory/assets/65163799/154a4ab8-96b9-4a3d-8f2c-b7b091c3d0c4)
![image](https://github.com/O-Cube/Sample-Factory/assets/65163799/7afaab4b-1fb4-4f03-b743-0c2bda3915da)
![image](https://github.com/O-Cube/Sample-Factory/assets/65163799/db110439-1aad-43ce-a3ae-22bdbcf459dc)





