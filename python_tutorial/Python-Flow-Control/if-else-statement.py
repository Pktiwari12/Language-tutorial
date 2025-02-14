num = int(input("Etner the your percentage \n"))
if num < 0 and num > 100:
    print("Please Enter valid percentage.")
elif (num >=0 and num < 33):
    print(f'you have failed with {num} percentage.')
elif(num >=33 and num < 45):
    print(f"You have passed with third devison with {num} percentage ")
elif(num >= 45 and num < 60):
    print(f'you have passed with second devison with {num} percentage.')
else:
    print("you have passed with first with first devision with {} percentage".format(num))


