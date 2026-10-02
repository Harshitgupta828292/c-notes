# students=[
#     {"name": "hermayine","house":"gryfindor"},
#     {"name":"harry","house":"gryfindor"},
#     {"name":"ron","house":"gryfindor"},
#     {"name":"draco","house":"slytherin"},
#     {"name":"padma","house":"ravenclaw"},
# ]
# houses=[]
# for student in students:
#     if student ["house"] not in houses:
#         houses.append(student["house"]) 
        
# for house in sorted(houses):
#             print(house)
# students=[
#     {"name": "hermayine","house":"gryfindor"},
#     {"name":"harry","house":"gryfindor"},
#     {"name":"ron","house":"gryfindor"},
#     {"name":"draco","house":"slytherin"},
#     {"name":"padma","house":"ravenclaw"},
# ]
# houses=set()
# for student in students:
#     houses.add(student["house"])      
        
# for house in sorted(houses):
#             print(house)

#?////////////////////////////////////////////////////////////////GLOBAL VARIABLE?////////////////////////////////////////////////////////////
#   you can not change the variable as tyou think
# bank.py
# balance=0

# def main():
#     print("balance",balance)


# if  __name__=="__main__":
#     main()

# balance=0


# def main():
#     print("balance",balance)
#     deposit(100)
#     withdraw(50)
#     print("balance",balance)
    
    
# def deposit(n):
#    global balance
#    balance +=n 
    

# def withdraw(n):
#    global balance
#    balance -=n
    
    
# if __name__=="__main__":
#     main()
class Account:
       def __init__(self):
           self._balance=0
       
       @property
       def balance(self):
           return self._balance
       
       def deposit(self,n):
           self._balance += n
           
       def withdraw(self,n):
           self._balance-=n
               
               
       def main():
         account=Account()
         print("balance",account.balance)
         account.deposit(100)
         account.withdraw(50)
         print("balance:",account.balance)


       if __name__=="__main__":
          main()                   
                   