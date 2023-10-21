const arr = [0, 9, 8, 7, 6, 5, 4, 3, 2, 1];

for (let i = 0; i < arr.length - i; i++) {
  for (let j = 0; j < arr.length - i - 1; j++) {
    if (arr[j] < arr[i + 1]) {
      let temp = arr[j];
      arr[i] = arr[j + 1];
      arr[j + 1] = temp;
    }
  }
}

printArray(arr);

function printArray(arr) {
  arr.forEach((i) => console.log(i));
}
