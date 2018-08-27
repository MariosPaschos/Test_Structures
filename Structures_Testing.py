#!/usr/bin/env python2

from subprocess import call

DATA_STRUCTURES = [
    'HS',  # HashSet
    'TS',  # TreeSet
    'V',   # Vector
    'LL'   # LinkedList
]

MULT = 10000
START = 0
END = 100000
Stats = []
# ./TestStructures <structure> <size> <runs>
# i.e. ./TestStructures HS 1000 100
execName = "./cmake-build-debug/Test_Structures"
for dt in DATA_STRUCTURES:
    for i in range(1, 11):
        cmd = execName + ' ' + dt + ' ' + str(i*MULT) + ' ' + str(MULT)
        call(cmd, shell=True)



from plotter import plot_stats

plot_stats()