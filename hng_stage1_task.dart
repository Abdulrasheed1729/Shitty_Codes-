import 'dart:math' as math;
void main() {
  final circle1 = Circle.noParam();
  final circle2 = Circle.oneParam(radius: 2);
  final circle3 = Circle(radius: 2, color: 'blue');
  
  print('''
  Circle 1:
  Area: ${circle1.getArea()}
  Circumference: ${circle1.getCircumference()}
  ${circle1.getDescription()}
  ${circle1.getColor()}
  ''');
  
  print('''
  Circle 2:
  Area: ${circle2.getArea()}
  Circumference: ${circle2.getCircumference()}
  ${circle2.getDescription()}
  ${circle2.getColor()}
  ''');
  
  print('''
  Circle 3:
  Area: ${circle2.getArea()}
  Circumference: ${circle3.getCircumference()}
  ${circle3.getDescription()}
  ${circle3.getColor()}
  ''');
}


class Circle {
  
  /// The color of the circle
  String color;
  
  /// The radius of the circle
  double radius;
  
  /// [Circle] constructor that takes both `radius`
  /// and `color` as its parameter
  Circle({required this.color, required this.radius});
  
  /// [Circle] constructor with no parameters
  Circle.noParam(): color = 'red', radius = 1;
  
  /// [Circle] constructor the takes `radius` as its parameter
  Circle.oneParam({required this.radius}): color = 'red';
  
  
  /// A method that returns the area of the given [Circle]
  double getArea() => math.pi* radius * radius;
  
  
  /// A method that returns the circumference of the given [Circle]
  double getCircumference() => 2 * math.pi* radius;
  
  /// A method that returns the description of the given [Circle]
  String getDescription() =>'Description: Radius: $radius Color: $color';
  
  /// A method that returns the `color` of the given [Circle]
  String getColor() => 'Color: $color'; 
}
