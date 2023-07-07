// let students = ["Tanni", "Tabassum", "Bushra", "Sadia"];
// // let array = [0, 1, 2, 3];
// // console.log(students[0]);
// // console.log(students[1]);
// // console.log(students[2]);
// // console.log(students[3]);

// for(let i = 0; i < students.length; i++){
//     console.log(students[i]);
// }

let students = [
    {
        name: "Tanni",
        age: 4,
        contact: 7890
    },
    {
        name: "Tabassum",
        age: 11,
        contact: 1890
    },
    {
        name: "Bushra",
        age: 56,
        contact: "8345798"
    },
    {
        name: "Sadia",
        age: 90,
        contact: 12546868470
    }
]

for(let i = 0; i < students.length; i++)
    console.log(`Name: ${students[i].name}, Age: ${students[i].age}, Contact: ${students[i].contact}`);