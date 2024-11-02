# class variable
class Example
  VAR1 = 100
  VAR2 = 200
  def show
    puts "The value of first constant is #{VAR1}"
    puts "The value of second constant is #{VAR2}"
  end
end
# creating objects
obj1 = Example.new()
obj1.show