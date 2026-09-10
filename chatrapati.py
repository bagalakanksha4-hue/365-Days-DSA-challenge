import numpy as np,matplotlib.pyplot as plt
from matplotlib.animation import funAnimation
from scipy import ndimage as ndi
from PIL import Image
img=np.array(Image.open("shivaji.png").convert("L"))
line =img<150
bg=~line
bg[-2:,:]=False
lab, _=ndi.label(bg)
edge=set(lab[0])| set (lab[:,0])|set(lab[:,-1])
outside=np.isin(lab,list(edge))
solid=ndi.binary_fill_holes(line |~outside)
ys,xs=np.where(solid)
i=np.random.choice(len(xs),5000)
p=np.c_[xs[i],-ys[i]].astype(float)
p-=p.mean(0)
p/=np.abs(p[:,1]).max()
dust=p*(2.4+np.random.rand(len(p),1))
fig,ax=plt.subplots(facecolor='#0b0b0f')
ax.set(xlim=(1.3,1.3),ylim=(-1.3,1.3),aspect=1)
ax.axis("off")
dots=ax.scatter(*dust.T,s=4,c='#ff8cla')
def frame(f):
    k=min(f/70,1)**0.65
    dots.set_offsets(dust+(p-dust)*k)
    return dots,
    funcAnimation(fig,frame,260,interval=33,blit=True)
    plt.show()