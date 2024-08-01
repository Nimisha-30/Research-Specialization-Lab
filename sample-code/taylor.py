import math


def taylor_series(f, x, n):
    """
    Calculate the Taylor series of a function f(x) at a point x.

    Parameters:
        f (function): The function to be approximated.
        x (float): The point at which the Taylor series is to be calculated.
        n (int): The number of terms to include in the Taylor series.

    Returns:
        float: The Taylor series approximation of the function at the point x.
    """
    result = 0
    for i in range(n):
        result += f(x + i * math.pow(x, i))
    return result

def f(x): return math.exp(x)

if __name__ == "__main__":
    x = 0
    n = 10
    print(taylor_series(f, x, n))
