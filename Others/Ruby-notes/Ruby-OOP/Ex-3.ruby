# instance me
class Box
  def initialize(w,h)
    @width,@height = w,h
  end

  def getArea
    @width * @height
  end
end
obj1 = Box.new(10,20)
c1 = obj1.getArea()
puts "Area of the box is: #{c1}"