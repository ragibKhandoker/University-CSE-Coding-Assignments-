class Box
  def initialize(width,height)
    @width = width
    @height = height
  end
  def getWidth
    @width
  end
  def getHeight
    @height
  end
  def getWidth
    @width
  end
  def getArea
    @width * @height
  end
  def printArea
    @area =getArea
    puts "Big box area is:#@area"
  end
  protected :printArea
end
obj1 = Box.new(10,20)
c1 = obj1.getArea()
puts "Area of the box is:#{c1}"
obj1.instance_eval{printArea}