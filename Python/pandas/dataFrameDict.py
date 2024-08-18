import pandas as pd
import numpy as np
b={'Rollno':pd.Series([1,2,3,4,5]),
   'Maths':pd.Series([98,98,96,97,95]),
   'Physics':pd.Series([94,83,89,97,90])
}
df=pd.DataFrame(b)
print(df)