# class methods and variables
class Box
  @@count = 0
  # initialize our class variable
  def initialize(weight,height)
    #assign instance variables
    @weight = weight
    @height = height
    @@count += 1
  end

  def self.printCount()
    puts "Box count is:#@@count"
  end
end
# creating two objects
obj1 = Box.new(16,18)
obj2 = Box.new(40,67)
# call the class method to print box count
Box.printCount()
