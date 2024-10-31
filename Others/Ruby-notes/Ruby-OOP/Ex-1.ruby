# Custom Methood to create ruby objects
$global_variable = 10
class Class1
  def print_global
    puts "Global variable in class1 is #$global_variable"
  end
end
class Class2
  def print_global
    puts "Global variable in class2 is #$global_variable"
  end
end

obj1 = Class1.new
obj1.print_global
obj2 = Class2.new
obj2.print_global