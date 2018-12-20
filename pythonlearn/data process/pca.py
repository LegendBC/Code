import numpy as np

x = np.array([2,5,4,6,7,8,9,5.5])

mean_x = np.mean(x)

scale_x = x -mean_x

y = np.array([1,2,3,4,5,6,7,8])

mean_y = np.mean(y)

scale_y = y - mean_y

data = np.matrix([[scale_x[i],scale_y[i]] for i in range(len(scale_x))])

import matplotlib.pyplot as plt

plt.plot(scale_x,scale_y,'o')

plt.grid(True)

plt.show()