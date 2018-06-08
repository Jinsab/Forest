# def displayintroandinsertcoin():
#     print('도서관에서 열심히 공부하던 당신은 바람을 쐬기 위해 잠깐 나왔습니다.')
#     print('마침 자판기가 보이네요')
#     Money= int(input('자판기 얼마를 넣을지 입력하세요 : '))
#
#     return Money
#
# def displayandchoose(Money):
#     if int(Money) >= 600:
#         print('음료수를 선택하세요. 현재 잔돈은 '+str(Money)+"원 입니다.")
#         print('(1) 밀크티(700원), (2) 에너지드링크(800원), (3) 콜라(600원), (4) 잔돈 받기')
#         choose=int(input())
#
#     else:
#         print('돈이 부족하여 잔돈을 반환합니다.')
#         choose=4
#
#     return choose
#
# def showresultandchangeprice(Money,choose):
#     #result=Money
#     if choose == 1:
#         print('덜커덩~ 밀크티~')
#         Money-=700
#     if choose == 2:
#         print('덜커덩~ 에너지드링크~')
#         Money-=800
#     if choose == 3:
#         print('덜커덩~ 콜라~')
#         Money-=600
#     if choose == 4:
#         while(Money):
#             print('딸그락~')
#             Money-=100
#             if(Money<=0):
#                 print(str(Money)+ '원을 반환하였습니다.')
#                 break
#     return Money
# TEMP=displayintroandinsertcoin()
#
# while(TEMP):
#     b=displayandchoose(TEMP)
#
#     showresultandchangeprice(TEMP,b)
    #print(TEMP)

# 밀크티 = 700
# 에너지드링크=800
# 콜라 = 600
# 음료수 = [밀크티 , 에너지드링크 , 콜라 ]
# def displayintroandinsertcoin():
#     print('도서관에서 열심히 공부하던 당신은 바람을 쐬기 위해 잠깐 나왔습니다.')
#     print('마침 자판기가 보이네요')
#     Money = int(input('자판기 얼마를 넣을지 입력하세요 : '))
#     return Money
# def displayandchoose(Money):
#     while int(Money) >= 600:
#         print('음료수를 선택하세요. 현재 잔돈은 ' +str(Money)+ "원 입니다.")
#         print('(1)밀크티(700원), (2)에너지드링크(800원), (3)콜라(600원), (4)잔돈')
#         choose=int(input())
#         return choose
#     if int(Money) < 600:
#         Money2 = int(Money) /100
#         Money2= int(Money2)
#         소리 = '딸그락~'
#         print (Money2 *소리 , str(Money)+'원을 반환하였습니다.')
# def showresultandchangeprice(Money,choose):
# # 밀크티 고르기
#     while True:
#         if choose == 1:
#             print('덜커덩~ 밀크티~')
#             Money = Money - 음료수[0]
#             if Money >= 600:
#                 print('음료수를 선택하세요. 현재 잔돈은 ' +str(Money)+ "원 입니다.")
#                 print('(1)밀크티(700원), (2)에너지드링크(800원), (3)콜라(600원), (4)잔돈')
#                 choose=int(input())
#             if Money <600:
#                 Money2 = int(Money) /100
#                 Money2= int(Money2)
#                 소리 = '딸그락~'
#                 print (Money2 *소리 , Money, "원을 반환하였습니다.")
#                 break
# # 에너지드링크 고르기
#         if choose == 2:
#             print('덜커덩~ 에너지드링크~')
#             Money = Money - 음료수[1]
#             if Money >= 600:
#                 print('음료수를 선택하세요. 현재 잔돈은 ' +str(Money)+ "원 입니다.")
#                 print('(1)밀크티(700원), (2)에너지드링크(800원), (3)콜라(600원), (4)잔돈')
#                 choose=int(input())
#             if Money <600:
#                 Money2 = int(Money) /100
#                 Money2= int(Money2)
#                 소리 = '딸그락~'
#                 print (Money2 *소리 , str(Money)+'원을 반환하였습니다.')
#                 break
# # 콜라 고르기
#         if choose == 3:
#             print('덜커덩~ 콜라~')
#             Money = Money - 음료수[2]
#             if Money >= 600:
#                 print('음료수를 선택하세요. 현재 잔돈은 ' +str(Money)+ "원 입니다.")
#                 print('(1)밀크티(700원), (2)에너지드링크(800원), (3)콜라(600원), (4)잔돈')
#                 choose=int(input())
#             if Money <600:
#                 Money2 = int(Money) /100
#                 Money2= int(Money2)
#                 소리 = '딸그락~'
#                 print (Money2 *소리 , str(Money)+'원을 반환하였습니다.')
#                 break
#  # 돈 반환 받기
#         if choose == 4:
#             Money2 = int(Money) /100
#             Money2= int(Money2)
#             소리 = '딸그락~'
#             print (Money2 *소리 , str(Money)+'원을 반환하였습니다.')
#             break
# TEMP=displayintroandinsertcoin()
# b=displayandchoose(TEMP)
# showresultandchangeprice(TEMP,b)

# class User:
#     money = 0
#     choice = 0
#
#     def Synopsis(self):
#         print('도서관에서 열심히 공부하던 당신은 바람을 쐬기 위해 잠깐 나왔습니다.')
#         print('마침 자판기가 보이네요')
#         self.money = int(input('자판기 얼마를 넣을지 입력하세요 : '))
#
#     def JuiceChoice(self):
#         if Slot.MoneyCheck(self.money, 600):
#             print('음료수를 선택하세요. 현재 잔돈은', str(self.money) + "원 입니다.")
#             print('(1) 밀크티(700원), (2) 에너지드링크(800원), (3) 콜라(600원), (4) 잔돈 받기')
#             self.choice = int(input())
#
#         else:
#             print('돈이 부족하여 잔돈을 반환합니다.')
#             self.choice = int(4)
#
#
# class Slot:
#     milkTea = 700
#     energeDrink = 800
#     coke = 600
#
#     def MoneyCheck(money, limit):
#         if money >= limit:
#             return True
#         else:
#             return False
#
#     def TakeOut(self, user):
#         if user.choice == 1:
#             print('덜커덩~ 밀크티~')
#             user.money -= self.milkTea
#
#         elif user.choice == 2:
#             print('덜커덩~ 에너지드링크~')
#             user.money -= self.energeDrink
#
#         elif user.choice == 3:
#             print('덜커덩~ 콜라~')
#             user.money -= self.coke
#
#         elif user.choice == 4:
#             change = 0
#
#             while (user.money >= 100):
#                 print('딸그락~')
#                 user.money -= 100
#                 change += 100
#
#             print(str(change) + '원을 반환하였습니다.')
#             user.money = 0
#
#         return user
#
#
# me = User()
# me.Synopsis()
#
# while (me.money > 0):
#     me.JuiceChoice()
#     me = Slot.TakeOut(Slot, me)

def DisplayIntRoandInsertCoin():
    print('도서관에서 열심히 공부하던 당신은 바람을 쐬기 위해 잠깐 나왔습니다.')
    print('마침 자판기가 보이네요')
    money = int(input('자판기 얼마를 넣을지 입력하세요 : '))

    return money

def DisplayAndChoose(money):
    if money >= 600:
        print('음료수를 선택하세요. 현재 잔돈은 '+str(money)+"원 입니다.")
        print('(1) 밀크티(700원), (2) 에너지드링크(800원), (3) 콜라(600원), (4) 잔돈 받기')
        choose=int(input())

    else:
        print('돈이 부족하여 잔돈을 반환합니다.')
        choose=4

    return choose

def ShowResultAndChangePrice(money,choose):
    if choose == 1:
        print('덜커덩~ 밀크티~')
        money-=700

    elif choose == 2:
        print('덜커덩~ 에너지드링크~')
        money-=800

    elif choose == 3:
        print('덜커덩~ 콜라~')
        money-=600

    elif choose == 4:
        change = 0
        while (money >= 100):
            print('딸그락~')
            money -= 100
            change += 1
        print(str(change * 100)+ '원을 반환하였습니다.')
        money = 0

    return money

money = DisplayIntRoandInsertCoin()

while(money > 0):
    choice = DisplayAndChoose(money)
    money = ShowResultAndChangePrice(money, choice)