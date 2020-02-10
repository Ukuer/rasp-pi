#!/usr/bin/python3

import numpy as np
from matplotlib import pyplot as plt

lx = []
ly = []

with open("HailStoneNum.txt", "r") as f:
    for line in f:
        ls = line.split(",")
        lx.append(int(ls[0]))
        ly.append(int(ls[1]))

x = np.array(lx)
y = np.array(ly)

plt.plot(x,y)
plt.savefig("HailStone.jpg")
