# class variable
class Customer
  @@num_of_customers = 0
  def initialize(id,name,addr)
    @id = id
    @name = name
    @addr = addr
  end
  def diaplay_details()
    puts "Customer id: #@id"
    puts "Customer name: #@name"
    puts "Customer addr: #@addr"
  end
  def total_no_customers()
    @@num_of_customers += 1
    puts "Total number of customers:#@@num_of_customers"
  end
end
#creting objects
obj1 = Customer.new("1","Ragib","Dhaka")
obj2 = Customer.new("2","Sakib","Khulna")
obj3 = Customer.new("3","Farhan","Sylhet")

#call methods
obj1.total_no_customers()
obj2.total_no_customers()
obj3.total_no_customers()