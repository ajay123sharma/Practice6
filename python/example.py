import matplotlib.pyplot as plt
import numpy as np
# simple Example

x=np.arange(0,10)
y=np.arange(11,21)

a=np.arange(40,50)
b=np.arange(50,60)

##plotting using matplotlib 

##plt scatter

plt.scatter(x,y,c='g')
plt.ylabel('y axis')
plt.xlabel('x axis')
plt.title("Graph in 2D")
plt.savefig('tp.jpg', dpi=None, facecolor='w', edgecolor='w',
          orientation='portrait', papertype=None, format=None,
          transparent=False, bbox_inches=None, pad_inches=0.1,
          frameon=None, metadata=None)

plt.show()