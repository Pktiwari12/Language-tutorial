def outer():
     message = "local"
     def inner():
        nonlocal message
        print(message)
        message = "nonlocal"
        print("in inner message = ", message)
        return
     inner()
     print("in outer message = ",message)
     return
outer()