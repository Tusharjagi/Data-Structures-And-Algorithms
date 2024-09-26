/*
Errors in javaScript

1) Eval Error
2) Range Error
3) Reference Error
4) Syntax Error
5) Type Error
6) URI Error

*/


function checkRangeError(n) {
  if (n < 0 || n > 10) {
    throw new RangeError("value should be btw  0 to 10");
  }
}

try {
  // checkRangeError(20);
  // throw new EvalError("tango");
  // throw new ReferenceError("Reference Error hain bhai");
  // throw new SyntaxError("syntax hain bhai theek se likh le");
  // throw new TypeError("data type ka error kuc");
  // throw new URIError("URI ka error agaya bhai");
  throw decodeURIComponent("'%3Fx%3Dtest'");
} catch(e) {
  if (e instanceof RangeError){
    console.log("name:", e.name)
    console.log("message:", e.message)
    console.log("stack:", e.stack)
  } else if (e instanceof EvalError) {
    console.log("name:", e.name)
    console.log("message:", e.message)
    console.log("stack:", e.stack)
  } else if (e instanceof ReferenceError) {
    console.log("name:", e.name)
    console.log("message:", e.message)
    console.log("stack:", e.stack)
  } else if (e instanceof SyntaxError) {
    console.log("name:", e.name)
    console.log("message:", e.message)
    console.log("stack:", e.stack)
  } else if (e instanceof TypeError) {
    console.log("name:", e.name)
    console.log("message:", e.message)
    console.log("stack:", e.stack)
  } else if (e instanceof URIError) {
    console.log("name:", e.name)
    console.log("message:", e.message)
    console.log("stack:", e.stack)
  } else {
    console.log(e);
  }
}
