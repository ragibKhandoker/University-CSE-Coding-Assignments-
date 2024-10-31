class Box
  def initialize(width,height)
    @width = width
    @height = height
  end

  def to_string
    "(weight:#@width,height:#@height)"
  end
end

obj1 = Box.new(19,39)
c1 = obj1.to_string()
puts "String representation of box is:#{c1}"