#######################################################
## MAKEFILE
# #####################################################

 #CXX and FLAGS
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors

 #SOURCES
SRCS = *.cpp

 #HEADERS
HEADERS = *.hpp

 #OBJECTS
OBJS = *.o

 #DOCUMENTATION
DOCS = *.pdf

 #PROGRAMS
PROGS = prog

 #COMPRESSED FILE
TAR = prog.tar.bz2

# #####################################################
# #BUILD and TAR
# #####################################################

prog: ${OBJS} 
	${CXX} ${CXXFLAGS} ${OBJS} -o ${PROGS}

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

tar:
	tar cvjf ${TAR} ${SRCS} ${HEADERS} ${DOCS} makefile

##################
#CLEAN
##################

clean:
	rm -f ${PROGS} *.o *~
