#!/usr/bin/python3
"""define square class"""


class Square():
    """class Square"""
    width = 0
    height = 0

    def __init__(self, *args, **kwargs):
        """initialize a new square"""
        for key, value in kwargs.items():
            setattr(self, key, value)

    def area_of_my_square(self):
        """ Area of the square """
        return self.width * self.height

    def PermiterOfMySquare(self):
        """permiter of the square """
        return (self.width * 2) + (self.height * 2)

    def __str__(self):
        """string representation of the square"""
        return "{}/{}".format(self.width, self.height)


if __name__ == "__main__":

    s = Square(width=12, height=9)
    print(s)
    print(s.area_of_my_square())
    print(s.PermiterOfMySquare())
