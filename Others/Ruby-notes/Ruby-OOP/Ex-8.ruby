class Customer
  def initialize(id,name,addr)
    @id = id
    @name = name
    @addr = addr
  end
  def display_details()
    puts "Customer id :#@id"
    puts "Customer name :#@name"
    puts "Customer addr :#@addr"
  end
end
#creating objects
obj1 = Customer.new("1","Ragib","Dhaka")
obj2 = Customer.new("2","Tasnim","Khulna")
obj3 = Customer.new("3","Rahul","Dinajpur")
obj1.display_details()
obj2.display_details()
obj3.display_details()