// function sayHello() {
//   return `Hello ${this}`;
// }

// const obj = {name: "tushar"};

// const bind = sayHello.bind(obj.name);
// console.log("bind:", bind())


// const per =  {
//   age: 23,
//   getAge: function() {
//     return this;
//   }
// }

// const per2 = {name: "tushar"};
// const call = per.getAge.call(per2.name);
// console.log("call:", call)


// curring 

// const curringSum = (a) => {
//   return (b) => {
//     return (c) => {
//       return a + b + c;
//     }
//   }
// }

// const sum = curringSum(1)(2)(2);
// console.log("sum:", sum)


// Closures

// function counter() {
//   let count = 0;
//   return function() {
//     count++
//     return count; 
//   }
// }

// const increment = counter();

// console.log(increment());
// console.log(increment());
// console.log(increment());
// console.log(increment());

// function fetchData(callback) {
//   setTimeout(() => {
//     // Simulating data fetching with a delay
//     const data = { id: 1, name: "Tushar" };
//     callback(data); // Pass the data to the callback function
//   }, 2000); // 2 seconds delay
// }

// // Using the fetchData function with a callback
// fetchData((data) => {
//   console.log("Fetched data:", data);
// });

// promise

const promise = new Promise((resolve, reject) => {
  if (2 == 2) {
    resolve();
  }
  reject()
})