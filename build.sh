## Set RCS lib install directory.
## likely needs to adjusted for your system.
RCSLIB_DIR=~/rcslib/;
## Set the path for finding librcs.so
LD_LIBRARY_PATH="${RCSLIB_DIR}/lib/:${LD_LIBRARY_PATH}";
export LD_LIBRARY_PATH;
## Create nml_ex1.cc from nml_ex1.hh
java -jar "${RCSLIB_DIR}"/bin/CodeGenCmdLine.jar nml_ex1.hh -o nml_ex1.cc
g++ nml_ex3.cc nml_ex1.cc -I"${RCSLIB_DIR}"/include -L "${RCSLIB_DIR}"/lib -lrcs -o nml_ex3


## Set RCS lib install directory.
# likely needs to adjusted for your system.
RCSLIB_DIR=~/rcslib/;
# Set the path for finding librcs.so
LD_LIBRARY_PATH="${RCSLIB_DIR}/lib/:${LD_LIBRARY_PATH}";
export LD_LIBRARY_PATH;
## Create nml_ex1.cc from nml_ex1.hh
java -jar "${RCSLIB_DIR}"/bin/CodeGenCmdLine.jar nml_ex1.hh -o nml_ex1.cc
g++ nml_ex4.cc nml_ex1.cc -I"${RCSLIB_DIR}"/include -L "${RCSLIB_DIR}"/lib -lrcs -o nml_ex4

## Set RCS lib install directory.
## likely needs to adjusted for your system.
RCSLIB_DIR=~/rcslib/;
## Set the path for finding librcs.so
LD_LIBRARY_PATH="${RCSLIB_DIR}/lib/:${LD_LIBRARY_PATH}";
export LD_LIBRARY_PATH;
## Create nml_ex1.cc from nml_ex1.hh
java -jar "${RCSLIB_DIR}"/bin/CodeGenCmdLine.jar nml_ex1.hh -o nml_ex1.cc
g++ nml_set_host_alias_ex.cc nml_ex1.cc -I"${RCSLIB_DIR}"/include -L "${RCSLIB_DIR}"/lib -lrcs -o nml_set_host_alias_ex