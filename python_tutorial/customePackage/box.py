from Square import boxFeature

side = 5
area = boxFeature.area(side)
parameter = boxFeature.parameter(side)
print(area)
print(parameter)

import Square.boxFeature
side = 6
area = Square.boxFeature.area(side)
parameter = Square.boxFeature.parameter(side)
print(area)
print(parameter)

from Square.boxFeature import area as ar
print(ar(7))
