// タグ付きUnion型のコード例（typeがタグ）Shapeが基本型、Circle, Rectが部分型
type Circle = {type:"circle"; radius:number};
type Rect = {type:"rect"; width:number; height:number};
type Shape = Circle | Rect;

function getArea(shape: Shape): number {
  switch (shape.type) {
    case "circle":
      return Math.PI * shape.radius **2;
    case "rect":
      return shape.width * shape.height;
  }
}
let a: Shape = {type:"rect", width:10, height:5};
console.log(getArea(a))
