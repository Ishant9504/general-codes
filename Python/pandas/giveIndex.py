import pandas as pd
import numpy as np
series=pd.Series(['a','b','c'],index=[2,3,4])
print(series)
print(type(series))
newSeries=pd.Series(0.5,index=[1,2,3,5])
print(newSeries)