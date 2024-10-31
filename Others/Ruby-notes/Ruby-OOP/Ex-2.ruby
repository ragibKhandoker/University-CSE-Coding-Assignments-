class Box
  def initialize(w,h)
    @width,@height = w,h
  end

  def printWidth
    @width
  end

  def printHeight
    @height
  end
end
obj1 = Box.new(10,20)
c1= obj1.printWidth()
c2= obj1.printHeight()

puts "Width of the box is: #{c1}"
puts "Height of the box is: #{c2}"